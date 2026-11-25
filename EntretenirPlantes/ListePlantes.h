#ifndef LISTEPLANTES_H
#define LISTEPLANTES_H
#include "Plante.h"

// Tableau des plantes et leurs specificites 
// Plante("Nom", seuilHumidite (en %), min temperature, max temperature, seuilLumiere(en %))
const int nb_plantes = 3;

Plante listePlantes[nb_plantes] = {
    Plante("Cactus", 40, 5, 35, 85) //EN DESSOUS DE 40 % AU DESSUS DE 85% LUMIERE 
    Plante("Fougère", 60, 15, 25, 35),
    Plante("Monstera", 50, 16, 30, 55),
    Plante("Basilic", 55, 15, 30, 75),
    Plante("Sansevieria", 30, 12, 32, 45),
    Plante("Orchidée", 50, 16, 28, 50)
};

#endif