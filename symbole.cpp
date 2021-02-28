#include "symbole.h"
#include <iostream>

void Symbole::Affiche(){
  cout << "affichage du symbole : " << ident << " = " << Etiquettes[ident] << endl;
}

void Fin::Affiche2(){
  cout << "affichage du symbole de fin: " << valeur << endl;
}



int Fin::getValeur(){
  return valeur;
}

int  Entier::getValeur() {
  return valeur;
}

int Expr::getValeur(){
  return valeurExpression;
}

Expr::Expr(int valeur):Symbole(EXPR), valeurExpression(valeur)  {



}
