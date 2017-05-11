//
// Created by DJ_MacHack on 09.05.2017.
// Mtknr.: 374771
// mail@hendrik-haas.de
// Partner: Julian Bruna
//

#ifndef INC_2_ARTIKELTEST_H
#define INC_2_ARTIKELTEST_H


#include "Artikel.h"

class ArtikelTest {
public:
        ArtikelTest(Artikel* artikel);
        void testAll();
        int testKonstruktorRichtig1();
        int testKonstruktorRichtig2();
        int testKonstruktorRichtig3();
        int testKonstruktorFalsch1();
        int testKonstruktorFalsch2();
        int testKonstruktorFalsch3();
        int testKonstruktorFalsch4();
        int testSetNameRichtig1();
        int testSetNameFalsch1();
        int testBucheZugangFalsch1();
        int testBucheZugangFalsch2();
        int testBucheZugangRichtig1();
        int testBucheAbgangFalsch1();
        int testBucheAbgangFalsch2();
        int testBucheAbgangRichtig1();
        int getErgebnis();
private:
        Artikel* artikel;
        int ergebnis = 0;
};


#endif //INC_2_ARTIKELTEST_H
