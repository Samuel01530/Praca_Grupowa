//Wypozyczalnia sprzetu ogrodzniczego:
//baza osob
//baza sprzetu
//baza wypozyczen
//test
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


    fstream plik;
    plik.open("dane.txt",std::ios::in);
    {
        vector <int> zaza;
        int tempid;
        string tempimie;
        string tempnazw;
        int temppesel;
    while(plik.eof()==false)
    {
        plik>>tempid;

     plik>>tempimie;
     
    

     plik>>tempnazw;
     
     

     plik>>temppesel;
     
     
Osoba MyOsoba =* new  Osoba(tempid,tempimie,tempnazw,temppesel);
zaza.push_back(MyOsoba.get_id());



    
    }




    }
plik.close();
  
}