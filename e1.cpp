#include "e1.h"

bool E1::transition(Automate & automate, Symbole*s) {
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
