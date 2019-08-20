using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class MazeCreator : MonoBehaviour {

    private int mazeRows, mazeColumns;
    public GameObject wall, room, floor, key, pattern, enemy1, enemy2, heart;
    public float size = 5;
    public float roomSize = 10;
    public int roomCount = 0;
    public TMP_Text goalText;

    // Use this for initialization
    void Start() {
        
        mazeRows = InputTextManager.mazeRows;
        mazeColumns = InputTextManager.mazeColumns;

        InitializeMaze();

        // activate the player GameObject
        GameObject player = GameObject.FindGameObjectWithTag("Player");
        player.GetComponent<PlayerController>().Initialize();
    }

	void Update() {
        if (Input.GetKeyDown(KeyCode.Escape)) {
            Application.Quit();
        } 
	}

	// Create maze
	void InitializeMaze() {

        CreateBackground();
        CreateBorders();
        CreateFloor();
        StartAndEndPoints();

        // Begin recursive division process
        RecursiveDivision(0, mazeRows, 0, mazeColumns);

        CreateRooms();
        SpawnEnemies();
        SpawnHearts();
    }

    // Initializes the background pattern
    private void CreateBackground() {
        BackgroundMaker background = new BackgroundMaker(size, mazeRows, mazeColumns, pattern);
        background.Generate();
    }


    // Create borders of the maze
    private void CreateBorders() {
        // Initialize east & west borders
        for (int c = 0; c < mazeColumns; c++) {
            GameObject eastBorder = Instantiate(wall, new Vector3(0f, 0f, c * size + size / 2f), 
                                                Quaternion.Euler(0, 90, 0)) as GameObject;
            eastBorder.tag = "Border Wall";
            GameObject westBorder = Instantiate(wall, new Vector3(mazeRows * size, 0f, c * size + size / 2f), 
                                                Quaternion.Euler(0, 90, 0)) as GameObject;
            westBorder.tag = "Border Wall";
        }

        // Initialize north & south borders
        for (int r = 0; r < mazeRows; r++) {
            GameObject southBorder = Instantiate(wall, new Vector3(r * size + size / 2f, 0f, 0f), 
                                                 Quaternion.identity) as GameObject;
            southBorder.tag = "Border Wall";
            GameObject northBorder = Instantiate(wall, new Vector3(r * size + size / 2f, 0f, mazeColumns * size),
                                                 Quaternion.identity) as GameObject;
            northBorder.tag = "Border Wall";
        }
    }

    // Generate floor
    private void CreateFloor() {
        
        for (int r = 0; r < mazeRows; r++) {
            for (int c = 0; c < mazeColumns; c++) {
                Instantiate(floor, new Vector3(r * size + size / 2f, -(size / 2f), c * size + size / 2f), 
                            Quaternion.Euler(90, 0, 0));
                //Renderer rend = mazeFloor.GetComponent<Renderer>();
                // rend.material.color = Color.gray;
            }
        }
    }

    // Instantiate Start and End points
    void StartAndEndPoints() {

        GameObject startPoint = GameObject.CreatePrimitive(PrimitiveType.Cube);
        startPoint.name = "Start Point";

        GameObject endPoint = GameObject.CreatePrimitive(PrimitiveType.Cube);
        endPoint.name = "End Point";
        endPoint.tag = "Goal";
        endPoint.GetComponent<Collider>().isTrigger = true;

        //orient it
        startPoint.transform.position = new Vector3(size / 2f, (-size / 2f) + .3f, size / 2f);
        endPoint.transform.position = new Vector3(mazeRows * size - size / 2f, (-size / 2f) + .3f, mazeColumns * size - size / 2f);

        //change color
        Renderer rend1 = startPoint.GetComponent<Renderer>();
        rend1.material.color = Color.yellow;

        Renderer rend2 = endPoint.GetComponent<Renderer>();
        rend2.material.color = Color.red;
    }

    // Recursive Division maze algorithm
    void RecursiveDivision(int firstRow, int lastRow, int firstCol, int lastCol) {
        int width = lastRow - firstRow;
        int height = lastCol - firstCol;

        bool orient;
        if (width == height) {
            int random = Random.Range(0, 2);
            orient = (random == 1);
        }
        else orient = (width > height);

        if (orient) { // True corresponds to vertical division
            if (firstRow == lastRow - 1) return;
            int r = Random.Range(firstRow + 1, lastRow);
            int gap = Random.Range(firstCol, lastCol);
            for (int c = firstCol; c < lastCol; c++) {
                if (c != gap) {
                    Instantiate(wall, new Vector3(r * size, 0f, c * size + size / 2f), Quaternion.Euler(0, 90, 0));
                }
            }
            RecursiveDivision(firstRow, r, firstCol, lastCol);
            RecursiveDivision(r, lastRow, firstCol, lastCol);
        }
        else { // false corresponds to horizontal division
            if (firstCol == lastCol - 1) return;
            int c = Random.Range(firstCol + 1, lastCol);
            int gap = Random.Range(firstRow, lastRow);
            for (int r = firstRow; r < lastRow; r++) {
                if (r != gap) {
                    Instantiate(wall, new Vector3(r * size + size / 2f, 0f, c * size), Quaternion.identity);
                }
            }
            RecursiveDivision(firstRow, lastRow, firstCol, c);
            RecursiveDivision(firstRow, lastRow, c, lastCol);
        }
    }

    // Create rooms
    void CreateRooms() {
        /*
        RoomBuilder roomBuilder = new RoomBuilder(mazeRows, mazeColumns, wall, size);
        roomBuilder.BuildRooms();
        */

        float width = mazeRows * size - (2 * roomSize);
        float height = mazeColumns * size - (2 * roomSize);
        PoissonDiscSampler sampler = new PoissonDiscSampler(width, height,
                                                3 * roomSize);
        
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
        print("Number of Rooms: " + roomCount);
        keyMaker.GenerateKeys(roomCount);

        // Update Text
        goalText.text = "Total Rooms: " + roomCount + @"
Width: " + mazeRows + @"
Length: " + mazeColumns;
    }

    void SpawnEnemies() {
        Spawner spawner1 = new Spawner(mazeRows, mazeColumns, size, enemy1);
        Spawner spawner2 = new Spawner(mazeRows, mazeColumns, size, enemy2);
    }

    void SpawnHearts() {
        Spawner heartSpawn = new Spawner(mazeRows, mazeColumns, size, heart);
    }
}