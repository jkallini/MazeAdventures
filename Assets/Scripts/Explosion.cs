using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Explosion : MonoBehaviour {

    public float explosionDuration = 3f;
    private float deltaTime;

	// Use this for initialization
	void Start () {
        deltaTime = explosionDuration;
	}
	
	// Update is called once per frame
	void Update () {
        if (deltaTime <= 0) {
            Destroy(gameObject);
        }
        deltaTime -= Time.deltaTime;
	}
}
