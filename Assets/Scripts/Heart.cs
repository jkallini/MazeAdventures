using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Heart : MonoBehaviour {

    public float heal;

	private void OnTriggerEnter(Collider other) {
        if (other.gameObject.CompareTag("Player")) {
            other.GetComponent<PlayerHealth>().Heal(heal);
            Destroy(gameObject);
        }
	}
}
