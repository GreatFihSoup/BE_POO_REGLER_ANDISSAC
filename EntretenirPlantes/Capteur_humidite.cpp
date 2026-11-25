#include "Capteur_humidite.h"
#include <Arduino.h>

// Appelle le constructeur de la classe parent (Capteur)
CapteurHumidite::CapteurHumidite(int pin) : Capteur(pin) {}

void Capteur_humidite::lire() {
    temperature = sht31.getTemperature();
    humidite = sht31.getHumidity();
    
    //lancement erreurs 
    if (humidite < 0 || humidite > 100 || humidite=NAN)
        throw Err_val_humidite;

    if (temperature < 0 || temperature > 90 || temperature =NAN)
        throw Err_val_temp;
}

//verifier si la temperature et l'humidite sont dans les bonnes plages
void Capteur_humidite::VerifierSeuils(float seuilHumidite, float minTemp, float maxTemp) {
    if (humidite < seuilHumidite) {
        
    } 
    if (temperature<minTemp) {

    }
    if (temperature>maxTemp) {
        
    }
}