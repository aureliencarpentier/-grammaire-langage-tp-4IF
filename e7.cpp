#include "e7.h"

E7::E7():Etat("E7"){}

bool E7::transition(Automate & automate, Symbole*s) {
        switch (*s){
        case OPENPAR:
        case CLOSEPAR:
        case PLUS:
        case MULT:
        case INT:
        case FIN:
        case ERREUR:
        case EXPR:
        break;
        }
        return false;
    }
