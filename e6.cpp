
#include "e4.h"
#include "e5.h"
#include "e9.h"

E6::E6():Etat("E6"){}

bool E6::transition(Automate & automate, Symbole*s) {
        switch (*s){
        case CLOSEPAR:
            automate.decalage(s, new E4());
            break;
        case PLUS:
            automate.decalage(s, new E5());
            break;
        case MULT:
            automate.decalage(s, new E9());
            break;
        case ERREUR:
        break;
        }
        return false;
    }
