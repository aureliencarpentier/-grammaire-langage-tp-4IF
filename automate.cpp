#include "automate.h"
#include "lexer.h"
#include <string>
#include "etat.h"

using namespace std;

Automate::Automate(string s) : lexer(s) {
stack<Etat*> statestack; 
stack<Symbole*> symbolstack ;
}


void Automate::reduction(int n,Symbole * s) {
  for (int i=0;i<n;i++)
  {
    delete(statestack.top());
    statestack.pop();
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

  stack<Symbole*> copy;
  stack<Symbole*> newStack;

  int j = symbolstack.size();

  for(int i = 0; i< j ; i++ )
  {
    Symbole * elt = symbolstack.top();
    copy.push(elt);
    newStack.push(elt);
    symbolstack.pop();
  }

  this->symbolstack = newStack;
  return copy;
}

stack<Etat*> Automate::getStatestack() {

  stack<Etat*> copy;
  stack<Etat*> newStack;

  int j = symbolstack.size();

  for(int i = 0; i< j ; i++ )
  {
    Etat * elt = statestack.top();
    copy.push(elt);
    newStack.push(elt);
    symbolstack.pop();
  }

  this->statestack = newStack;
  return copy;
}

