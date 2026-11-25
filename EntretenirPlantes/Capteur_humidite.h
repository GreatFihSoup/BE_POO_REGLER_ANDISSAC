#ifndef CAPTEUR_HUMIDITE_H
#define CAPTEUR_HUMIDITE_H
#include "Capteur.h"
#include "SHT31.h"

class CapteurHumidite : public Capteur { //est un capteur donc herite de classe capteur 
private : 
    float temperature;
    float humidite; 

public:
    CapteurHumidite(int pin);

    //on réecrit la fonction lire()
    void lire() override;

    void VerifierSeuils(float seuil); 
};

#endif