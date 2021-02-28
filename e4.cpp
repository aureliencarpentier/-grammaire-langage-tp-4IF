#include "automate.h"
#include "e2.h"
#include "e3.h"
#include "e4.h"
#include "e7.h"
#include <iostream>

E4::E4():Etat("E4"){}

bool E4::transition(Automate & automate, Symbole*s) {
        switch (*s){
        case OPENPAR:
        automate.decalage(s, new E2());
        break;
        case INT:
        automate.decalage(s, new E3());
        break;
        case EXPR:
        automate.decalage(s, new E7());
        break;
        default: 
          cout << "expression invalide" << endl;
          exit(0);
        }
        return false;
    }
