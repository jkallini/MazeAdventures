using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerHealth : MonoBehaviour {

    public Image healthBar;

    private float maxHealth = 100f;      // max health
    private float currentHealth;         // current health
    private float timer;                 // time between taking damage
    private Animator animator;           // player's animator
    private PlayerController controller; // player controller script

	// Use this for initialization
	void Start () {
        currentHealth = maxHealth;
        timer = 0;
        animator = GetComponent<Animator>();
        controller = GetComponent<PlayerController>();
	}

	void Update() {
        // decrement the timer with each frame
        timer -= Time.deltaTime;
        if (timer <= 0 && !controller.dead) { // disable animator if time is up
            animator.Play("Player Damage", 0, 0);
        }
	}

	void UpdateHealth() {
        float ratio = currentHealth / maxHealth;
        healthBar.rectTransform.localScale = new Vector3(ratio, 1, 1);
    }

    // method to take player damage
    public void Damage(float damage) {
        // only take damage if time is up
        if (timer > 0 || controller.dead || controller.win) return;
        timer = 2f;
        currentHealth -= damage;
        if (currentHealth <= 0) {
            controller.dead = true;
            currentHealth = 0;
            GetComponent<PlayerDeath>().enabled = true;
        }
        UpdateHealth();
    }

    // method to take player healing
    public void Heal(float heal) {
        if (controller.dead || controller.win) return;
        currentHealth += heal;
        if (currentHealth > maxHealth) {
            currentHealth = maxHealth;
        }
        UpdateHealth();
    }
}
