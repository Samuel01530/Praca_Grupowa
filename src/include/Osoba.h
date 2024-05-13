#ifndef OSOBA
#define OSOBA
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class Osoba{
    private:
int id;
string imie;
string nazwisko;
int pesel;
public:
Osoba();
Osoba(int,string,string,int);
int get_id();
string get_imie();
string get_nazwisko();
int get_pesel();


};

#endif /* OSOBA */
