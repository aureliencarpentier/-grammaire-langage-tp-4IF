#include "e8.h"

E8::E8():Etat("E8"){}

bool E8::transition(Automate & automate, Symbole*s) {
        switch (*s){
        case OPENPAR:
        break;
        
        case CLOSEPAR:
        automate.reduction(3,s);
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
