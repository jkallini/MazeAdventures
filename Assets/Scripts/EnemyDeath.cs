using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyDeath : MonoBehaviour {

    public ParticleSystem deathExplosion;
    public GameObject heart;

    private float deathTime = 1f;

    // Use this for initialization
    void Start() {
        Animator animator = GetComponent<Animator>();
        if (gameObject.name == "Bomb Enemy(Clone)") {
            animator.Play("Bomb Enemy Death", 0, 0);
        }
        else animator.Play("Fire Enemy Death", 0, 0);
    }

    void Update() {
        deathTime -= Time.deltaTime;
        if (deathTime <= 0) {
            Instantiate(deathExplosion, transform.position, Quaternion.identity);
            Instantiate(heart, transform.position, Quaternion.identity);
            gameObject.SetActive(false);
        }
    }
}
