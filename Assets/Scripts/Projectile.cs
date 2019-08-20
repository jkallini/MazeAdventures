using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Projectile : MonoBehaviour {

    public float speed;
    public ParticleSystem explosion;

    private Transform player;
    private Vector3 target;
    private Vector3 initialPosition;
    private float radius;

	// Use this for initialization
	void Start () {
        player = GameObject.FindGameObjectWithTag("Player").transform;
        target = new Vector3(player.position.x, player.position.y, player.position.z);
        initialPosition = transform.position;
        radius = Vector3.Distance(initialPosition, target);
	}
	
	// Update is called once per frame
	void Update () {
        transform.position = Vector3.MoveTowards(transform.position, target, speed * Time.deltaTime);
        float distance = Vector3.Distance(initialPosition, transform.position);
        if (distance >= radius) {
            DestroyProjectile();
        }
    }

    private void DestroyProjectile() {
        Instantiate(explosion, GetComponent<Transform>().position, Quaternion.identity);
        Destroy(gameObject);
	}

	private void OnTriggerEnter(Collider other) {
        if (!other.gameObject.CompareTag("Bullet"))
            DestroyProjectile();
    }
}
