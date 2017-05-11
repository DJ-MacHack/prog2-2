//
// Created by DJ_MacHack on 09.05.2017.
// Mtknr.: 374771
// mail@hendrik-haas.de
// Partner: Julian Bruna
//

#include "ArtikelTest.h"

//ToDo Checkliste ausdrucken

/**
 * Konstruktor
 * @param artikel
 */
ArtikelTest::ArtikelTest(Artikel* artikel){
    this->artikel = artikel;
}

/**
 * Führt alle Tests aus und summiert Kontrollwerte
 */
void ArtikelTest::testAll() {
    try {
        cout << "Test Konstruktor falsch 1:" << endl;
        this->ergebnis +=testKonstruktorFalsch1();
        cout << "Nicht bestanden!" << endl;
    } catch (exception& a) {
        cout << a.what() << endl;
        cout << "Bestanden!" << endl;
    }


    try {
        cout << "Test Konstruktor falsch 2:" << endl;
        this->ergebnis += testKonstruktorFalsch2();
        cout << "Nicht bestanden!" << endl;
    } catch (exception& a) {
        cout << a.what() << endl;
        cout << "Bestanden!" << endl;
    }



    try {
        cout << "Test Konstruktor falsch 3:" << endl;
        this->ergebnis += testKonstruktorFalsch3();
        cout << "Nicht bestanden!" << endl;
    } catch (exception& a) {
        cout << a.what() << endl;
        cout << "Bestanden!" << endl;
    }

    try {
        cout << "Test Konstruktor falsch 4:" << endl;
        this->ergebnis += testKonstruktorFalsch4();
        cout << "Nicht bestanden!" << endl;
    } catch (exception& a) {
        cout << a.what() << endl;
        cout << "Bestanden!" << endl;
    }


    try {
        cout << "Test Konstruktor richtig 1:" << endl;
        this->ergebnis += testKonstruktorRichtig1();
        cout << "Bestanden!" << endl;
    } catch (exception& a) {
        cout << a.what() << endl;
        cout << "Nicht bestanden!" << endl;
    }


    try {
        cout << "Test Konstruktor richtig 2:" << endl;
        this->ergebnis += testKonstruktorRichtig2();
        cout << "Bestanden!" << endl;
    } catch (exception& a) {
        cout << a.what() << endl;
        cout << "Nicht bestanden!" << endl;
    }


    try {
        cout << "Test Konstruktor richtig 3:" << endl;
        this->ergebnis += testKonstruktorRichtig3();
        cout << "Bestanden!" << endl;
    } catch (exception& a) {
        cout << a.what() << endl;
        cout << "Nicht bestanden!" << endl;
    }

    try {
        cout << "Test setName richtig 1:" << endl;
        this->ergebnis += testSetNameRichtig1();
        cout << "Bestanden!" << endl;
    } catch (exception& a) {
        cout << a.what() << endl;
        cout << "Nicht bestanden!" << endl;
    }

    try {
        cout << "Test setName falsch 1:" << endl;
        this->ergebnis += testSetNameFalsch1();
        cout << "Nicht bestanden!" << endl;
    } catch (exception& a) {
        cout << a.what() << endl;
        cout << "Bestanden!" << endl;
    }

    try {
        cout << "Test bucheZugang falsch 1:" << endl;
        this->ergebnis += testBucheZugangFalsch1();
        cout << "Nicht bestanden!" << endl;
    } catch (exception& a) {
        cout << a.what() << endl;
        cout << "Bestanden!" << endl;
    }



    try {
        cout << "Test bucheZugang falsch 2:" << endl;
        this->ergebnis += testBucheZugangFalsch2();
        cout << "Nicht bestanden!" << endl;
    } catch (exception& a) {
        cout << a.what() << endl;
        cout << "Bestanden!" << endl;
    }

    try {
        cout << "Test bucheZugang richtig 1:" << endl;
        this->ergebnis += testBucheZugangRichtig1();
        cout << "Bestanden!" << endl;
    } catch (exception& a) {
        cout << a.what() << endl;
        cout << "Nicht bestanden!" << endl;
    }

    try {
        cout << "Test bucheAbgang falsch 1:" << endl;
        this->ergebnis += testBucheAbgangFalsch1();
        cout << "Nicht bestanden!" << endl;
    } catch (exception& a) {
        cout << a.what() << endl;
        cout << "Bestanden!" << endl;
    }



    try {
        cout << "Test bucheAbgang falsch 2:" << endl;
        this->ergebnis += testBucheAbgangFalsch2();
        cout << "Nicht bestanden!" << endl;
    } catch (exception& a) {
        cout << a.what() << endl;
        cout << "Bestanden!" << endl;
    }

    try {
        cout << "Test bucheAbgang richtig 1:" << endl;
        this->ergebnis += testBucheAbgangRichtig1();
        cout << "Bestanden!" << endl;
    } catch (exception& a) {
        cout << a.what() << endl;
        cout << "Nicht bestanden!" << endl;
    }
}

/**
 * Alle Konstruktorvariablen korrekt
 * @return 1
 */
int ArtikelTest::testKonstruktorRichtig1(){
    Artikel artikel = Artikel(1234, "Test1", 1);
    return 1;
}

/**
 * Alle Konstruktorvariablen korrekt
 * @return 1
 */
int ArtikelTest::testKonstruktorRichtig2(){
    Artikel artikel = Artikel(1234, "Test2");
    return 1;
}

/**
 * Alle Konstruktorvariablen korrekt
 * @return 1
 */
int ArtikelTest::testKonstruktorRichtig3(){
    Artikel artikel = Artikel(1234);
    return 1;
}

/**
 * Artikelnummer vierstellig
 * @return -1
 */
int ArtikelTest::testKonstruktorFalsch1(){
    Artikel artikel = Artikel(12345);
    return -1;
}

/**
 * Artikelname leerer String
 * @return -1
 */
int ArtikelTest::testKonstruktorFalsch2(){
    Artikel artikel = Artikel(1234, "");
    return -1;
}

/**
 * Artikelbestand negativ
 * @return -1
 */
int ArtikelTest::testKonstruktorFalsch3(){
    Artikel artikel = Artikel(1234, "Test3", -1);
    return -1;
}

/**
 * Artikelnummer ist nicht vierstellig
 * @return  -1
 */
int ArtikelTest::testKonstruktorFalsch4(){
    Artikel artikel = Artikel(123, "Test4", 4);
    return -1;
}

/**
 * Artikelname wird geändert
 * @return 1
 */
int ArtikelTest::testSetNameRichtig1(){
    Artikel artikel = Artikel(1234, "Testname", 1);
    cout << artikel.getBezeichnung() << endl;
    artikel.setBezeichnung("Staubsauger");
    cout << artikel.getBezeichnung() << endl;
    return 1;
}

/**
 * Artikelname wird nicht geändert weil leerer Name
 * @return -1
 */
int ArtikelTest::testSetNameFalsch1(){
    Artikel artikel = Artikel(1234, "Test", 1);
    artikel.setBezeichnung("");
    return -1;
}

/**
 * Negative Buchung
 * @return -1
 */
int ArtikelTest::testBucheZugangFalsch1(){
    Artikel artikel = Artikel(1234, "Test", 1);
    artikel.bucheZugang(-1);
    return -1;
}

/**
 * Leere Buchung
 * @return -1
 */
int ArtikelTest::testBucheZugangFalsch2(){
    Artikel artikel = Artikel(1234, "Test", 1);
    artikel.bucheZugang(0);
    return -1;
}

/**
 * Buchung
 * @return 1
 */
int ArtikelTest::testBucheZugangRichtig1(){
    Artikel artikel = Artikel(1234, "Test", 1);
    cout << artikel.getBestand() << endl;
    artikel.bucheZugang(1);
    cout << artikel.getBestand() << endl;
    return 1;
}

/**
 * Negative Buchung
 * @return -1
 */
int ArtikelTest::testBucheAbgangFalsch1(){
    Artikel artikel = Artikel(1234, "Test", 1);
    artikel.bucheAbgang(-1);
    return -1;
}

/**
 * Keine Buchung
 * @return -1
 */
int ArtikelTest::testBucheAbgangFalsch2(){
    Artikel artikel = Artikel(1234, "Test", 1);
    artikel.bucheAbgang(0);
    return -1;
}

/**
 * Richtige Buchung
 * @return -1
 */
int ArtikelTest::testBucheAbgangRichtig1(){
    Artikel artikel = Artikel(1234, "Test", 2);
    cout << artikel.getBestand() << endl;
    artikel.bucheAbgang(1);
    cout << artikel.getBestand() << endl;
    return 1;
}

/**
 * Gibt Kontrollwert aus
 * @return ergebnis
 */
int ArtikelTest::getErgebnis() {
    return this->ergebnis;
}