//
// Created by DJ_MacHack on 09.05.2017.
// Mtknr.: 374771
// mail@hendrik-haas.de
// Partner: Julian Bruna
//

#include <fstream>
#include<iostream>
#include "Artikeldialog.h"

void Artikeldialog::artikelDatenAnzeigen(const Artikel &artikel) {
    cout << "Artikelnummer: " << artikel.getArtikelnummer() << endl;
    cout << "Artikelbezeichnung: " << artikel.getBezeichnung() << endl;
    cout << "Artikelbestand: " << artikel.getBestand() << endl;
}

int Artikeldialog::auswahl() {
    int i;
    cout << "Auswahl der Moeglichkeiten:" << endl;
    cout << "1 Neuen Artikel erstellen" << endl;
    cout << "2 ArtikelTests starten" << endl;
    cout << "3 Programm beenden" << endl;
    cin >> i;
    return i;
}

Artikel Artikeldialog::artikelErstellen() {
    int nummer, menge;
    string name;
    cout << "Ihre vierstellige Artikelnummer:" << endl;
    cin >> nummer;
    cout << "Ihr Artikelname:" << endl;
    cin >> name;
    cout << "Ihr Artikelbestand:" << endl;
    cin >> menge;
    Artikel neu = Artikel(nummer, name, menge);
    return neu;
}

void Artikeldialog::credits() {
    std::ifstream inFile ("credits.txt");
    std::string input = "";
    //inFile.open("credits.txt");
    if (inFile.is_open()) {
        while (getline (inFile,input)) {
            std::cout << input << std::endl;
        }
        inFile.close();
    } else {
        cout << "Datei kann nicht geoeffnet werden!";
    }
}