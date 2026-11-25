#include "Capteur.h"

//Constructeur : on initialise la broche et la valeur a 0
Capteur::Capteur(int pin): Peripherique(pin) {
    valeur = 0;
}

//Retourne la derniere valeur lue
float Capteur::getValeur() {
    return valeur;
}