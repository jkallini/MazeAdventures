using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BombEnemy : MonoBehaviour {

    public bool dead = false;
    public float speed = 8f;
    public float outerRadius = 10f;
    public float innerRadius = 1f;
    public float explodeRadius = 3f;

    public float timeBetweenBombs = 3f;
    private float deltaTime;

    public GameObject bomb;

    private Transform playerTransform;
    private PlayerController playerController;

	// Use this for initialization
	void Start () {
        playerTransform = GameObject.FindGameObjectWithTag("Player").transform;
        playerController = GameObject.FindGameObjectWithTag("Player").GetComponent<PlayerController>();
        deltaTime = 0;
	}

    // Update is called once per frame
    void Update() {

        if (dead) return;

        // only update if player is not dead
        if (playerController.dead || playerController.win) return;

        float distance = Vector3.Distance(transform.position, playerTransform.position);

        // Start chasing the player within radius
        if (distance <= outerRadius && distance > innerRadius) {
            transform.position = Vector3.MoveTowards(transform.position, playerTransform.position, speed * Time.deltaTime);
        }

        // Drop a bomb when in range
        if (distance <= explodeRadius && deltaTime <= 0) {
            transform.position = transform.position;
            Instantiate(bomb, transform.position, Quaternion.Euler(0, -30, -45));
            deltaTime = timeBetweenBombs;
        }
        deltaTime -= Time.deltaTime;
	}
}
