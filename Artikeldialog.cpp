//
// Created by DJ_MacHack on 09.05.2017.
// Mtknr.: 374771
// mail@hendrik-haas.de
// Partner: Julian Bruna
//

#include <fstream>
#include<iostream>
#include <sstream>
//#include <windows.h>
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
            if(input.find("Q") != std::string::npos){
                std::vector<std::string> vector = split(input, 'Q');
                int teile = vector.size();
                for(int i = 0; i < teile; i++){
                    if(vector.at(i)=="Q") {
//                        HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
//                        SetConsoleTextAttribute(handle, FOREGROUND_RED);
                        cout << "\x1B[31m"+vector.at(i);
                    } else {
//                        HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
//                        SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN |
//                                                        FOREGROUND_BLUE);
                        cout << "\x1B[37m"+vector.at(i);
                    }
                }
                cout << endl;
            } else {
//                HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
//                SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN |
//                                                FOREGROUND_BLUE);
                std::cout << "\x1B[37m"+input << std::endl;
            }
        }
        inFile.close();
    } else {
        cout << "Datei kann nicht geoeffnet werden!";
    }

}

int Artikeldialog::split(const std::string &txt, std::vector<std::string> &strs, char ch)
{
    unsigned int pos = txt.find( ch );
    unsigned int initialPos = 0;
    strs.clear();
    while( pos != std::string::npos ) {
        strs.push_back( txt.substr( initialPos, pos - initialPos ) );
        initialPos = pos + 1;
        strs.push_back( txt.substr( pos, 1) );

        pos = txt.find( ch, initialPos );
    }
    strs.push_back( txt.substr( initialPos, (std::min((pos), txt.length())) - initialPos + 1 ) );

    return strs.size();
}
vector<string> Artikeldialog::split(string str, char delimiter) {
    vector<string> internal;
    stringstream ss(str); // Turn the string into a stream.
    string tok;
    string s(1, delimiter);

    while(getline(ss, tok, delimiter)) {
        internal.push_back(tok);
        internal.push_back(s);
    }
    internal.pop_back();

    return internal;
}