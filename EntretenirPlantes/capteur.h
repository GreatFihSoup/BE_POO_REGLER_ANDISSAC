#ifndef CAPTEUR_H
#define CAPTEUR_H
#include "Peripherique.h"

//Codes d'erreur
#define Err_val_humidite  1
#define Err_val_temp 2
#define Err_val_lum 3

class Capteur : public Peripherique {
protected:
    float valeur; // derniere valeur lue par le capteur

public:
    Capteur(int pin);

    //chaque capteur redefinit sa propre facon de lire
    virtual void lire() = 0;

    float getValeur();
};

#endif
