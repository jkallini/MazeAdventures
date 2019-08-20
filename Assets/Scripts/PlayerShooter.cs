using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerShooter : MonoBehaviour {

    public GameObject bullet;
    private float shotTimer;

	void Start() {
        shotTimer = 0;
	}

	// Update is called once per frame
	void Update() {

        if (PauseMenu.isPaused) return;

        if (Input.GetButton("Fire1") && shotTimer <= 0) {
            Instantiate(bullet, transform.position, transform.rotation);
            shotTimer = .25f;
        }
        shotTimer -= Time.deltaTime;
    }
}
