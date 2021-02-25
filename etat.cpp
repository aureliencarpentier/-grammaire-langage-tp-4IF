#include "etat.h"
#include <iostream>

#if ! defined ( ETAT_CPP )
#define ETAT_CPP


using namespace std;

Etat::Etat(string name) : name(name){}

void Etat::print() const {
  cout << name << endl;
}

#endif