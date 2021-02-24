#include "e3.h"
#include "symbole.h"
E3::E3():Etat("E3"){}

bool E3::transition(Automate & automate, Symbole*s) {
        switch (*s){

        case CLOSEPAR:
        
        automate.reduction(1, new Expr() )
        break;


        case PLUS:
        break;


        case MULT:
        break;

        case FIN:
        break;
        }
        return false;
    }
