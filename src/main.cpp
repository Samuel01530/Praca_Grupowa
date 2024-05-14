// Wypozyczalnia sprzetu ogrodzniczego:
// baza osob
// baza sprzetu
// baza wypozyczen
// test
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string>
#include <fstream>
#include "include/Osoba.h"
#include <iostream>

using namespace std;

int main()
{

    Osoba MyO;
    fstream plik;
    plik.open("dane.txt", std::ios::in);

    vector<Osoba> myOsoby;
    int tempid;
    string tempimie;
    string tempnazw;
    int temppesel;

    while (plik.eof() == false)
    {

        plik >> tempid;
        
        plik >> tempimie;
 

        plik >> tempnazw;
        

        plik >> temppesel;
     

        Osoba *myOsoba = new Osoba(tempid, tempimie, tempnazw, temppesel);
        myOsoby.push_back(*myOsoba);
    }

    plik.close();


    for (int i = 0; i < myOsoby.size(); i++)
    {
        cout<<myOsoby[i].get_id()<<" ";
        cout << myOsoby[i].get_imie()<<" ";
        cout << myOsoby[i].get_nazwisko()<<" ";
        cout << myOsoby[i].get_pesel() << endl;
    }
    
}