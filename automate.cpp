#include "automate.h"
#include "lexer.h"
#include <string>
#include "etat.h"
#include <iostream>
#include "e0.h"
#include "e1.h"
#include "e2.h"
#include "e3.h"
#include "e4.h"
#include "e5.h"
#include "e6.h"
#include "e7.h"
#include "e8.h"
#include "e9.h"



using namespace std;

Automate::Automate(string s) : lexer(s) {
stack<Etat*> statestack; 

stack<Symbole*> symbolstack ;




}


//obligatoire sinon il y a un problème lors de l'édition des liens
// à compléter
Automate::~Automate() {

  int st = statestack.size();
  int sy = symbolstack.size();

  for(int i=0; i<st ; i++){
    delete(statestack.top());
    statestack.pop();
  }
  for(int j=0; j<sy; j++){
    delete(symbolstack.top());
    symbolstack.pop();
  }
}

void Automate::executer(){
  bool fini = false;
  statestack.push(new E0());
  Symbole *s ; 
     while(!fini) {

      s=lexer.Consulter();


      fini = statestack.top()->transition(*this, s);

      
   }


  cout << "Résultat final : " <<( (Expr * )symbolstack.top())->getValeur() << endl;

}

void Automate::reduction(int n,Symbole * s) {
  Expr * exp = (Expr *) s;
  //lexer.reculer();
 

   for (int i=0;i<n;i++)
  {
    delete(statestack.top());
    statestack.pop();
    delete(symbolstack.top());
    symbolstack.pop();
  }
  Etat * test = statestack.top();
  test->transition(*this,s);
}

void Automate::decalage(Symbole * s, Etat * e) {
  symbolstack.push(s);
  statestack.push(e);
  if (s->isTerminal()) {
  lexer.Avancer();
  }
}

stack<Symbole*> Automate::getSymbolstack() {

  stack<Symbole*> copytemp;

  stack<Symbole*> copy;
  stack<Symbole*> newStack;
  
  int j = symbolstack.size();

// on crée une copie mais les éléments y sont inversés

  for(int i = 0; i< j ; i++ )
  {
    Symbole * elt = symbolstack.top();
    copytemp.push(elt);
    symbolstack.pop();
  }

//On remet les éléments dnas l'ordre 

  for(int i = 0; i< j ; i++ )
  {
    Symbole * elt = copytemp.top();
    copy.push(elt);
    newStack.push(elt);
    copytemp.pop();
  }

  this->symbolstack = newStack;
  return copy;
}


stack<Etat*> Automate::getStatestack() {

  stack<Etat*> copytemp;

  stack<Etat*> copy;
  stack<Etat*> newStack;
  
  int j = statestack.size();

// on crée une copie mais les éléments y sont inversés

  for(int i = 0; i< j ; i++ )
  {
    Etat * elt = statestack.top();
    copytemp.push(elt);
    statestack.pop();
  }

//On remet les éléments dnas l'ordre 

  for(int i = 0; i< j ; i++ )
  {
    Etat * elt = copytemp.top();
    copy.push(elt);
    newStack.push(elt);
    copytemp.pop();
  }

  this->statestack = newStack;
  return copy;
}

