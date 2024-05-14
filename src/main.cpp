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

Osoba MyO;
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
cout<<tempid<<" ";
     plik>>tempimie;
     cout<<tempimie<<" ";
    

     plik>>tempnazw;
     cout<<tempnazw<<" ";
     

     plik>>temppesel;
     cout<<temppesel<<endl;
     
Osoba MyOsoba =* new  Osoba(tempid,tempimie,tempnazw,temppesel);
zaza.push_back(MyOsoba.get_id());



    
    }




    }
plik.close();
  
}