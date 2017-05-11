//
// Created by DJ_MacHack on 09.05.2017.
// Mtknr.: 374771
// mail@hendrik-haas.de
// Partner: Julian Bruna
//
#include <iostream>
#include "ArtikelTest.h"
#include "Artikeldialog.h"

using namespace std;

/**
 * Mainfunktion
 * @return
 */
int main() {
    Artikeldialog dialog = Artikeldialog();
    string auswahl = "0";


    do {
        auswahl = dialog.auswahl();
        if (auswahl == "1") {
            Artikel artikelneu = dialog.artikelErstellen();
            cout << "Ihr Artikel:" << endl;
            try{dialog.artikelDatenAnzeigen(artikelneu);}
            catch(exception e) {
                e.what();
            }
            catch (...){
                cout << "Unbekannter Fehler!" << endl;
            }
        }

        if (auswahl == "2") {
            Artikel artikel = Artikel(1234, "TestinMain", 1);
            ArtikelTest testobjekt(&artikel);

            try {
                testobjekt.testAll();
            } catch (...) {
                cout << "Unbekannter Fehler!" << endl;
            }
            if (testobjekt.getErgebnis() == 6) {
                cout << "Alle Tests bestanden!" << endl;
            } else {
                cout << "Es wurden Fehler festgestellt!" << endl;
            }
        } else {
            if (auswahl != "3") {
                cout << "Fehlerhafte Eingabe!" << endl;
            }
        }
    } while (auswahl != "3");
    dialog.credits();       //fancy credits
    return 0;
}