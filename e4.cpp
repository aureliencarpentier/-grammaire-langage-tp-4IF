#include "e4.h"


E4::E4():Etat("E4"){}

bool E4::transition(Automate & automate, Symbole*s) {
        switch (*s){
        case OPENPAR:
        case INT:
        case ERREUR:
        case EXPR:
        break;
        }
        return false;
    }
