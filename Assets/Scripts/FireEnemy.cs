using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireEnemy : MonoBehaviour {

    public bool dead = false;
    public float shotTime = 3f;
    public float shotRadius;
    private float deltaTime;

    public GameObject projectile;
    public ParticleSystem flare;

    private Transform playerTransform;
    private PlayerController playerController;
    private float flareTime = 0f;

    // Use this for initialization
    void Start() {
        playerTransform = GameObject.FindGameObjectWithTag("Player").transform;
        playerController = GameObject.FindGameObjectWithTag("Player").GetComponent<PlayerController>();
        deltaTime = 0;
    }

	// Update is called once per frame
	void Update() {
        UpdateFlare();

        // only attack if the player not dead
        if (playerController.dead || playerController.win) return;
        UpdateAttack();
    }

    private void UpdateFlare() {
        if (flareTime <= 0) {
            Instantiate(flare, transform);
            flareTime = 5f;
        }
        flareTime -= Time.deltaTime;
    }

    private void UpdateAttack() {

        if (dead) return;

        float distance = Vector3.Distance(transform.position, playerTransform.position);

        if (distance <= shotRadius && deltaTime <= 0) {
            Instantiate(projectile, transform.position, Quaternion.Euler(15, 30, 45));
            deltaTime = shotTime;
        }

        deltaTime -= Time.deltaTime;
    }
}
