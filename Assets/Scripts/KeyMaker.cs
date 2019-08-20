using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KeyMaker : MonoBehaviour {

    private int rows, cols;
    private float roomSize;
    private int keyCount;
    private GameObject key;
    public int totalRooms;

    public KeyMaker(int mazeRows, int mazeColumns, float roomSize, GameObject key) {
        rows = mazeRows;
        cols = mazeColumns;
        this.roomSize = roomSize;
        this.key = key;
        keyCount = 0;
    }

    // Generates keys for the MazeCreator script
    public void GenerateKeys(int keyNum) {

        totalRooms = keyNum;
        for (int k = 0; k < keyNum; k++) {
            MakeKey();
        }
        print("Number of Keys: " + keyCount);
    }

    // Generates keys for the MazeLoader script
    public void GenerateKeys1(int keyNum) {

        totalRooms = keyNum;
        for (int k = 0; k < keyNum; k++) {
            MakeKey1();
        }
        print("Number of Keys: " + keyCount);
    }

    private void MakeKey() {

        int x = Random.Range(1, rows);
        int y = Random.Range(1, cols);

        Collider[] hitColliders =
            Physics.OverlapBox(new Vector3(x * roomSize + roomSize / 2f, 0, y * roomSize + roomSize / 2f),
                               new Vector3(1f, 0f, 1f));

        if (hitColliders.Length > 0) {
            MakeKey();
            return;
        }

        GameObject mazeKey = Instantiate(key, new Vector3(x * roomSize + roomSize / 2f, 0f, y * roomSize + roomSize / 2f),
                                         Quaternion.identity) as GameObject;
        mazeKey.tag = "Key";
        keyCount++;
    }

    private void MakeKey1() {
        
        int x = Random.Range(1, rows);
        int y = Random.Range(1, cols);

        Collider[] hitColliders = Physics.OverlapBox(new Vector3(x * roomSize, 0, y * roomSize),
                                                     new Vector3(1f, 0f, 1f));
        if (hitColliders.Length > 0) {
            MakeKey1();
            return;
        }

        GameObject mazeKey = Instantiate(key, new Vector3(x * roomSize, 0f, y * roomSize), 
                                     Quaternion.identity) as GameObject;
        mazeKey.tag = "Key";
        keyCount++;

    }
}
