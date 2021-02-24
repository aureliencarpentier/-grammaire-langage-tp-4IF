#include "automate.h"
#include "lexer.h"
#include <string>

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
  Zizi test = statestack.top();
  test->transition(*this,s);
}

void Automate::decalage(Symbole * s, Etat * e) {
  symbolstack.push(s);
  statestack.push(e);
  if (s->isTerminal()) {
  lexer.Avancer();
  }
}