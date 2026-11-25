#ifndef PERIPHERIQUE_H
#define PERIPHERIQUE_H
#include <string>
using namespace std;

class Peripherique {
protected:
    int pin;    // numero de la broche GPIO de l'ESP32

public:
    Peripherique(int pin);
};

#endif