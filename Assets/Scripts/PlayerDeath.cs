using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class PlayerDeath : MonoBehaviour {
    
    public ParticleSystem deathExplosion;
    public GameObject deathText;
    public GameObject restart;

    private float deathTime = 1f;

	// Use this for initialization
	void Start() {

        Animator animator = GetComponent<Animator>();
        animator.Play("Player Death", 0, 0);
		
	}

	void Update() {
        deathTime -= Time.deltaTime;
        if (deathTime <= 0) {
            Instantiate(deathExplosion, transform.position, Quaternion.identity);
            restart.SetActive(true);
            gameObject.SetActive(false);
            deathText.SetActive(true);
        }
	}
}
