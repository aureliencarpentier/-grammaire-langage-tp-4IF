#include "automate.h"
#include "e9.h"

E9::E9():Etat("E9"){}

bool E9::transition(Automate & automate, Symbole*s) {
        switch (*s){
        
        case OPENPAR:
        break;

        case CLOSEPAR:
        automate.reduction(3, new Expr());
        break;
        
        case PLUS:
        automate.reduction(3,s);
        break;
        
        case MULT:
        automate.reduction(3,s);
        break;

        case INT:
        break;

        case FIN:
        automate.reduction(3,s);
        break;
        
        case ERREUR:
        break;

        case EXPR:
        break;

        }
        return false;
    }
