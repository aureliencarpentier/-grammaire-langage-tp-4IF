#include "e0.h"


E0::E0():Etat("E0"){}

bool E0::transition(Automate & automate, Symbole*s) {
        switch (*s){
        case PLUS:

        automate.decalage(s, new E4("4"))
        
        break;

        case MULT:
        
        break;
        
        case FIN:

        break;
        }
        return false;
    }
