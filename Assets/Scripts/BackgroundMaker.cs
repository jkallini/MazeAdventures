using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackgroundMaker : MonoBehaviour {

    private float size;
    private int mazeRows, mazeColumns;
    private GameObject pattern;

    public BackgroundMaker(float size, int mazeRows, int mazeColumns, GameObject pattern) {
        this.size = size;
        this.mazeRows = mazeRows;
        this.mazeColumns = mazeColumns;
        this.pattern = pattern;
    }

    // Initializes the background pattern
    public void Generate() {

        float width = size * mazeRows;
        float height = size * mazeColumns;

        PoissonDiscSampler sampler = new PoissonDiscSampler(width + (4 * size), height + (4 * size), 2 * size);

        foreach (Vector2 sample in sampler.Samples()) {
            float xPos = sample.x - size;
            float yPos = sample.y - size;
            if (xPos < size || yPos < size || xPos > width || yPos > height) {
                Instantiate(pattern, new Vector3(xPos, -5 * size, yPos),
                            Quaternion.Euler(Random.Range(0, 90), Random.Range(0, 90), Random.Range(0, 90)));
            }
        }
    }
}
