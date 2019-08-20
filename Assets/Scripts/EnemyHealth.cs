using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EnemyHealth : MonoBehaviour {

    public Image healthBar;
    public float maxHealth = 100f; // max health

    private Animator animator;     // enemy's animator
    private float currentHealth;   // current health
    private float timer;           // time between taking damage

	// Use this for initialization
	void Start () {
        animator = GetComponent<Animator>();
        currentHealth = maxHealth;
        timer = 0;
	}
	
	// Update is called once per frame
	void Update () {
        timer -= Time.deltaTime;
        if (timer <= 0) { // disable animator if time is up
            if (gameObject.name == "Bomb Enemy(Clone)") {
                animator.Play("Bomb Enemy Damage", 0, 0);
            }
            else animator.Play("Fire Enemy Damage", 0, 0);
        }
	}

    void UpdateHealth() {
        float ratio = currentHealth / maxHealth;
        healthBar.rectTransform.localScale = new Vector3(ratio, 1, 1);
    }

    // method to take player damage
    public void Damage(float damage) {
        // only take damage if time is up
        if (timer > 0) return;
        timer = 2f;
        currentHealth -= damage;
        if (currentHealth <= 0) {
            if (gameObject.name == "Bomb Enemy(Clone)") {
                GetComponent<BombEnemy>().dead = true;
            }
            else GetComponent<FireEnemy>().dead = true;
            currentHealth = 0;
            GetComponent<EnemyDeath>().enabled = true;
        }
        UpdateHealth();
    }
}
