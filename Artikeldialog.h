//
// Created by DJ_MacHack on 09.05.2017.
// Mtknr.: 374771
// mail@hendrik-haas.de
// Partner: Julian Bruna
//

#ifndef INC_2_ARTIKELDIALOG_H
#define INC_2_ARTIKELDIALOG_H

#include "Artikel.h"
#include <vector>
#include <iostream>

class Artikeldialog {
public:
    void artikelDatenAnzeigen(const Artikel& artikel);
    int auswahl();
    Artikel artikelErstellen();
    void credits();

private:
    int split(const string &txt, std::vector<std::string> &strs, char ch);
};


#endif //INC_2_ARTIKELDIALOG_H
