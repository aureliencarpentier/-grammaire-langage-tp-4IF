
#include "symbole.h"
#include "stack"
#include "lexer.h"

using namespace std;

class Etat;

class Automate {

  public :
    Automate (string s);
    virtual ~Automate();
    void decalage (Symbole * s, Etat * e);
    void reduction(int n,Symbole * s);

  protected :
    stack<Etat*> statestack;
    stack<Symbole*> symbolstack;
    Lexer lexer;
};