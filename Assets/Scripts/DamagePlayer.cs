using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DamagePlayer : MonoBehaviour {

    public float damage;

	private void OnTriggerStay(Collider other){
        if (other.gameObject.CompareTag("Player")) {
            other.GetComponent<PlayerHealth>().Damage(damage);
        }
	}
}
