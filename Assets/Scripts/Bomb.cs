using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bomb : MonoBehaviour {

    public float bombTime = 3f;
    public float blastRadius = 3f;
    public ParticleSystem explosion;
    public float damage;

    private float deltaTime;

	// Use this for initialization
	void Start () {
        deltaTime = bombTime;
	}
	
	// Update is called once per frame
	void Update () {
        if (deltaTime <= 0) {
            Instantiate(explosion, GetComponent<Transform>().position, Quaternion.Euler(-90, 0, 0));
            Collider[] hitColliders = Physics.OverlapSphere(GetComponent<Transform>().position, blastRadius);
            for (int i = 0; i < hitColliders.Length; i++) {
                if (hitColliders[i].gameObject.CompareTag("Wall")) {
                    Destroy(hitColliders[i].gameObject);
                }
                if (hitColliders[i].gameObject.CompareTag("Player")) {
                    hitColliders[i].GetComponent<PlayerHealth>().Damage(damage);
                }
            }
            Destroy(gameObject);
        }
        deltaTime -= Time.deltaTime;
	}
}
