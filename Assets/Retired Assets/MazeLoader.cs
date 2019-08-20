using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MazeLoader : MonoBehaviour {
    
	public int mazeRows, mazeColumns;
    public GameObject wall, room, floor, key, pattern;
	public float size = 4.5f;
    public float roomSize = 10f;
    public int roomCount = 0;

	private MazeCell[,] mazeCells;

	// Use this for initialization
	void Start() {

        CreateBackground();
        InitializeMaze();
        MazeAlgorithm ma = new HuntAndKillMazeAlgorithm(mazeCells);
        // MazeAlgorithm ma = new DFSMazeAlgorithm(mazeCells);
		ma.CreateMaze();

        // activate player GameObject
        GameObject player = GameObject.FindGameObjectWithTag("Player");
        player.GetComponent<PlayerController>().Initialize();
	}

    // Initializes the background pattern
    private void CreateBackground() {
        BackgroundMaker background = new BackgroundMaker(size, mazeRows, mazeColumns, pattern);
        background.Generate();
    }

    // Construct initial grid
	private void InitializeMaze() {

		mazeCells = new MazeCell[mazeRows, mazeColumns];

        //create floor
        /*GameObject floor = GameObject.CreatePrimitive(PrimitiveType.Plane);
       floor.name = "Floor";

       floor.transform.position = new Vector3((mazeRows - 2) / 2, -.5f, (mazeColumns - 2) / 2);
       floor.transform.localScale += new Vector3(-.1f, 0f, -.1f);

       Renderer renderer3 = floor.GetComponent<Renderer>();
       renderer3.material.color = Color.grey;
*/

        StartAndEndPoints();

        for (int r = 0; r < mazeRows; r++) {
            for (int c = 0; c < mazeColumns; c++) {
                mazeCells[r, c] = new MazeCell();

                // For now, use the same wall object for the floor!
                // mazeCells[r, c].floor = null;

                wall.layer = 2; // set floor to be ignored by raycast

                mazeCells[r, c].floor = Instantiate(floor, new Vector3(r * size, -(size / 2f), c * size), Quaternion.identity) as GameObject;

                // Renderer rend = mazeCells[r, c].floor.GetComponent<Renderer>();
                // rend.material.color = Color.grey;

                mazeCells[r, c].floor.name = "Floor " + r + "," + c;
                mazeCells[r, c].floor.transform.Rotate(Vector3.right, 90f);


                if (c == 0) {

                    wall.layer = 0; // allow raycast to be casted on wall

                    mazeCells[r, c].westWall = Instantiate(wall, new Vector3(r * size, 0, (c * size) - (size / 2f)), Quaternion.identity) as GameObject;
                    mazeCells[r, c].westWall.name = "West Wall " + r + "," + c;

                }

                wall.layer = 0; // allow raycast to be casted on wall

                mazeCells[r, c].eastWall = Instantiate(wall, new Vector3(r * size, 0, (c * size) + (size / 2f)), Quaternion.identity) as GameObject;
                mazeCells[r, c].eastWall.name = "East Wall " + r + "," + c;

                if (r == 0) {
                    mazeCells[r, c].northWall = Instantiate(wall, new Vector3((r * size) - (size / 2f), 0, c * size), Quaternion.identity) as GameObject;
                    mazeCells[r, c].northWall.name = "North Wall " + r + "," + c;
                    mazeCells[r, c].northWall.transform.Rotate(Vector3.up * 90f);

                }

                mazeCells[r, c].southWall = Instantiate(wall, new Vector3((r * size) + (size / 2f), 0, c * size), Quaternion.identity) as GameObject;
                mazeCells[r, c].southWall.name = "South Wall " + r + "," + c;
                mazeCells[r, c].southWall.transform.Rotate(Vector3.up * 90f);

            }
        }

        CreateRooms();
    }

    // Create Start and End Points
    void StartAndEndPoints() {
        
        // create start/end point 
        GameObject startPoint = GameObject.CreatePrimitive(PrimitiveType.Cube);
        startPoint.name = "Start Point";

        GameObject endPoint = GameObject.CreatePrimitive(PrimitiveType.Cube);
        endPoint.name = "End Point";
        endPoint.tag = "Goal";
        endPoint.GetComponent<Collider>().isTrigger = true;

        //orient it
        startPoint.transform.position = new Vector3(0f, (-size / 2f) + .3f, 0f);
        endPoint.transform.position = new Vector3((mazeRows - 1) * size, (-size / 2f) + .3f, (mazeColumns - 1) * size);

        //change color
        Renderer renderer = startPoint.GetComponent<Renderer>();
        renderer.material.color = Color.yellow;

        Renderer renderer2 = endPoint.GetComponent<Renderer>();
        renderer2.material.color = Color.red;
    }

    // Create rooms
    void CreateRooms() {
        /*
        RoomBuilder roomBuilder = new RoomBuilder(mazeRows, mazeColumns, wall, size);
        roomBuilder.BuildRooms();
        */

        float width = mazeRows * size - (2 * roomSize);
        float height = mazeColumns * size - (2 * roomSize);
        PoissonDiscSampler sampler = new PoissonDiscSampler(width, height, 3 * roomSize);
        
        foreach (Vector2 sample in sampler.Samples()) {
            
            Collider[] hitColliders = Physics.OverlapBox(new Vector3(sample.x + roomSize, 0, sample.y + roomSize),
                                                         new Vector3((roomSize + 4) / 2f, 0, (roomSize + 4) / 2f));

            for (int i = 0; i < hitColliders.Length; i++) {
                if (hitColliders[i].gameObject.tag != "Room") {
                    Destroy(hitColliders[i].gameObject);
                }
            }

            Instantiate(room, new Vector3(sample.x + roomSize, 0, sample.y + roomSize), Quaternion.identity);
            roomCount++;
        }

        // Generate keys for each room created
        KeyMaker keyMaker = new KeyMaker(mazeRows, mazeColumns, size, key);
        print("Number of Rooms " + roomCount);
        keyMaker.GenerateKeys1(roomCount);

        // Update Text
        GameObject canvas = GameObject.Find("Canvas");
        Text[] textValue = canvas.GetComponentsInChildren<Text>();
        textValue[2].text = "Total Rooms: " + roomCount;
    }
}
