#include "e3.h"

bool E3::transition(Automate & automate, Symbole*s) {
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
