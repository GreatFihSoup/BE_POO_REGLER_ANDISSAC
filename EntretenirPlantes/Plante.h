#ifndef PLANTE_H
#define PLANTE_H
#include <string>
using namespace std;

// Classe Plante : represente une plante avec son nom et seuils correspondants 
class Plante {
public:
    string nom;   // nom de la plante
    float  seuilHum; // humidite minimum en %
    float minTemp; 
    float maxTemp;
    float seuilLum; 

    Plante(string nom, float seuilHum, float minTemp, float maxTemp, float seuilLum);
};

#endif