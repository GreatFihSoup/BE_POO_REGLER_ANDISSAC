#include "Ecran.h"

void Ecran::initialiser() {
    lcd.begin(16, 2); //creer ecrans bonne dimension (16 colonnes et 2 lignes)
    creerEmojis(); // charge les 6 emojis dans memoire lcd
}

// Chaque byte = une ligne de 5 pixels
// 0b01010 = . * . * .  (1 = pixel allume, 0 = pixel eteint)
void Ecran::creerEmojis() {

    // Smiley content  
    byte ok[8] = {
        0b01010,  //  * *
        0b01010,  //  * *
        0b00000,  //
        0b10001,  // *   *
        0b01110,  //  ***
        0b00000,  //
        0b00000,  //
        0b00000   //
    };

    // Smiley triste 
    byte triste[8] = {
        0b01010,  //  * *
        0b01010,  //  * *
        0b00000,  //
        0b01110,  //  ***
        0b10001,  // *   *
        0b00000,  //
        0b00000,  //
        0b00000   //
    };

    // Point d'exclamation 
    byte alerte[8] = {
        0b00100,  //   *
        0b00100,  //   *
        0b00100,  //   *
        0b00100,  //   *
        0b00000,  //
        0b00100,  //   *
        0b00000,  //
        0b00000   //
    };

    // Arbre
    byte arbre[8] = {
        0b00100,  //   *
        0b01110,  //  ***
        0b11111,  // *****
        0b01110,  //  ***
        0b11111,  // *****
        0b00100,  //   *
        0b00100,  //   *
        0b00000   //
    };

    // Thermometre
    byte thermo[8] = {
        0b00100,  //   *
        0b01010,  //  * *
        0b01010,  //  * *
        0b01110,  //  ***
        0b01110,  //  ***
        0b11111,  // *****
        0b11111,  // *****
        0b01110   //  ***
    };

    // Goutte d'eau
    byte goutte[8] = {
        0b00100,  //   *
        0b00100,  //   *
        0b01010,  //  * *
        0b01010,  //  * *
        0b10001,  // *   *
        0b10001,  // *   *
        0b10001,  // *   *
        0b01110   //  ***
    };

    //chargement dans les slots de la memoire LCD
    lcd.createChar(EMOJI_OK, ok);
    lcd.createChar(EMOJI_TRISTE, triste);
    lcd.createChar(EMOJI_ALERTE, alerte);
    lcd.createChar(EMOJI_ARBRE, arbre);
    lcd.createChar(EMOJI_THERMO, thermo);
    lcd.createChar(EMOJI_GOUTTE, goutte);
}

//affiche lignes de texte
void Ecran::afficher(string ligne1, string ligne2) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(ligne1.c_str()); //c_str() convertit string en char*
    lcd.setCursor(0, 1);
    lcd.print(ligne2.c_str());
}

// Change la couleur de fond de l'ecran
void Ecran::setCoulVert()  {
    lcd.setRGB(0, 255, 0); 
}

void Ecran::setCoulRouge() { 
    lcd.setRGB(255, 0, 0); 
}

// etat URGENT = Clignote 3 fois en rouge puis reste rouge
void Ecran::clignoter() {
    for (int i = 0; i < 3; i++) {
        lcd.setRGB(255, 0, 0); 
        delay(300);
        lcd.setRGB(0,   0, 0); 
        delay(300);
    }
    lcd.setRGB(255, 0, 0);
}