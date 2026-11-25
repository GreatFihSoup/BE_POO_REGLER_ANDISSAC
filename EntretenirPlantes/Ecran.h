#ifndef ECRAN_H
#define ECRAN_H
#include <rgb_lcd.h>
#include <string>
using namespace std;

class Ecran : public Peripherique {
private:
    rgb_lcd lcd; 

    // Cree emojis
    void creerEmojis();

public:
    void initialiser();
    void afficher(string ligne1, string ligne2);
    void setCoulVerte(); //fond vert  = plante OK
    void setCoulRouge(); //fond rouge = besoin d'arrosage
    void clignoter(); //clignote en rouge = etat URGENT

    static const byte LOGO_OK = 0; // smiley content
    static const byte LOGO_TRISTE = 1; // smiley triste 
    static const byte LOGO_ALERTE = 2; // point d'exclamation
    static const byte LOGO_ARBRE = 3; // arbre
    static const byte LOGO_THERMO = 4; // thermometre
    static const byte LOGO_GOUTTE = 5; // goutte d'eau
};

#endif