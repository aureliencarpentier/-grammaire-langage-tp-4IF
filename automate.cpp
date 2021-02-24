#include "automate.h"
#include "lexer.h"
#include <string>

using namespace std;

Automate::Automate(string lexername) {
stack<Etat*> statestack; 
stack<Symbole*> symbolstack ;
lexer = Lexer("lexername");
}


void Automate::reduction(int n,Symbole * s) {
  for (int i=0;i<n;i++)
  {
    delete(statestack.top());
    statestack.pop();
  }
  statestack.top()->transition(*this,s);
}

void Automate::decalage(Symbole * s, Etat * e) {
symbolstack.push(s);
statestack.push(e);
if (s->isTerminal()) {
lexer.Avancer();
}
}