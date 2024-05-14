#include "include/Osoba.h"
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

Osoba ::Osoba()
{
    id = -1;
    imie = "brak imienia";
    nazwisko = "brak nazwiska";
}
Osoba ::Osoba(int _id, string _imie, string _nazwisko, int _pesel)
{
    id = _id;
    imie = _imie;
    nazwisko = _nazwisko;
    pesel = _pesel;
}
int Osoba::get_id()
{
    return id;
}
string Osoba::get_imie()
{
    return imie;
}
string Osoba::get_nazwisko()
{
    return nazwisko;
}
int Osoba::get_pesel()
{
    return pesel;
}