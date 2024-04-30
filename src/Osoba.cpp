#include "include/Osoba.h"
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

Osoba :: Osoba()
{
    id = -1;
    imie = "brak imienia";
    nazwisko = "brak nazwiska";
}
Osoba :: Osoba(int _id,string _imie, string _nazwisko)
{
    id = _id;
    imie = _imie;
    nazwisko = _nazwisko;
}
