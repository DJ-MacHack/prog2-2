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

int main() {
    Artikeldialog dialog = Artikeldialog();
    int auswahl = 0;
    auswahl = dialog.auswahl();

    while(auswahl < 1 || auswahl > 3){
        cout << "Fehlerhafte Eingabe!" << endl;
        auswahl = dialog.auswahl();
    }

    if(auswahl == 1){
        Artikel artikelneu = dialog.artikelErstellen();
        cout << "Ihr Artikel:" << endl;
        dialog.artikelDatenAnzeigen(artikelneu);
    }

    if (auswahl == 2) {
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
    }

    dialog.credits();
    return 0;
}