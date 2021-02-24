#include "etat.h"
#include <iostream>

using namespace std;

Etat::Etat(string name) : name(name){}

void Etat::print() const {
  cout << name << endl;
}

