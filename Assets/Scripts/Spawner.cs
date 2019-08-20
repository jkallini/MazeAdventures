using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawner : MonoBehaviour {

    private GameObject item;
    private int rows, cols;
    private float size;

    public Spawner(int rows, int cols, float size, GameObject item) {
        this.rows = rows;
        this.cols = cols;
        this.size = size;
        this.item = item;

        Spawn();
    }

    private void Spawn() {
        float width = rows * size - (2 * size);
        float height = cols * size - (2 * size);
        PoissonDiscSampler sampler = new PoissonDiscSampler(width, height,
                                                2 * size);

        foreach (Vector2 sample in sampler.Samples())
        {

            Collider[] hitColliders = Physics.OverlapSphere(new Vector3(sample.x + size, 0, sample.y + size), 2f);

            if (hitColliders.Length == 0) {
                Instantiate(item, new Vector3(sample.x + size, 0, sample.y + size), Quaternion.identity);
            }
        }
    }
}
