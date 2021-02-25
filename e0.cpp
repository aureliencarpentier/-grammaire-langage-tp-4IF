#include "automate.h"
#include "e0.h"
#include "e3.h"
#include "e2.h"
#include <iostream>
E0::E0():Etat("E0"){}

bool E0::transition(Automate & automate, Symbole*s) {
        cout << "etat 0" << endl;
        switch (*s){
        case INT:
          automate.decalage(s, new E3());
        
        break;

        case OPENPAR:
          automate.decalage(s, new E2());

        break;

        }
        return false;
    }
