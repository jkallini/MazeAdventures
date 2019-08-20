using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoomBuilder : MonoBehaviour {

    private int mazeRows, mazeColumns;
    private GameObject wall;
    private float size = 6f;
    public GameObject key;

    // Constructor
    public RoomBuilder(int mazeRows, int mazeColumns, GameObject wall, float size) {
        this.mazeRows = mazeRows;
        this.mazeColumns = mazeColumns;
        this.wall = wall;
        this.size = size;
    }

    // Build rooms
    public void BuildRooms() {
        int numberOfRooms = CalculateRooms();
        for (int i = 0; i < numberOfRooms; i++) {
            BuildRoom();
        }
        MakeKeys(numberOfRooms);
    }

    // Calculate number of rooms in maze
    int CalculateRooms() {

        // Maze is too small to have rooms
        if (mazeRows < 10 || mazeColumns < 10) return 0;

        int lowerBound, upperBound;

        // Calculate bounds
        if (mazeRows < mazeColumns) {
            lowerBound = mazeRows / 8;
            upperBound = mazeRows / 4;
        }
        else {
            lowerBound = mazeColumns / 8;
            upperBound = mazeColumns / 4;
        }

        // Generate a random integer between the bounds (lower bound inclusive)
        int numberOfRooms = Random.Range(lowerBound, upperBound);
        return numberOfRooms;
    }

    int CalculateDimensions() {

        int lowerBound, upperBound;

        if (mazeRows > 50 && mazeColumns > 50) {
            // Calculate bounds
            if (mazeRows < mazeColumns) {
                lowerBound = mazeRows / 16;
                upperBound = mazeRows / 8;
            }
            else {
                lowerBound = mazeColumns / 16;
                upperBound = mazeColumns / 8;
            }
        }
        else {
            // Calculate bounds
            if (mazeRows < mazeColumns) {
                lowerBound = mazeRows / 8;
                upperBound = mazeRows / 4;
            }
            else {
                lowerBound = mazeColumns / 8;
                upperBound = mazeColumns / 4;
            }
        }

        // Generate a random integer between the bounds (lower bound inclusive)
        int roomDimensions = Random.Range(lowerBound, upperBound);
        return roomDimensions;
    }

    // Builds a room with the given position and dimensions
    void BuildRoom() {

        int xPos, yPos, roomWidth, roomHeight;

        int count = 0;
        do {
            xPos = Random.Range(1, mazeColumns);
            yPos = Random.Range(1, mazeRows);
            roomWidth = CalculateDimensions();
            roomHeight = roomWidth;
            count++;
            if (count > 30) return; // prevents stack overflow
        } while (xPos + roomWidth / 2f >= mazeColumns || xPos - roomWidth / 2f <= 0 ||
                 yPos + roomHeight / 2f >= mazeRows || yPos - roomHeight / 2f <= 0);

        // Find all walls within range
        Collider[] hitColliders = Physics.OverlapBox(new Vector3(xPos * size, 0, yPos * size),
                                                     new Vector3(roomWidth * size / 2f, 0, roomHeight * size / 2f));

        // If there is a room in this range, try again
        count = 0;
        for (int i = 0; i < hitColliders.Length; i++) {
            if (count > 30) return; // prevents stack overflow
            else if (hitColliders[i].gameObject.tag == "Room") {
                BuildRoom();
                return;
            }
        }

        // Destroy all walls within range
        for (int i = 0; i < hitColliders.Length; i++) {
            Destroy(hitColliders[i].gameObject);
        }

        // Create room
        GameObject room = Instantiate(wall, new Vector3(xPos * size, 0, yPos * size), Quaternion.identity) as GameObject;
        room.transform.localScale = new Vector3(roomWidth * size, size, roomHeight * size);
        room.tag = "Room";

    }

    void MakeKeys(int keys) {
        
    }
}
