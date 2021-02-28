#include "automate.h"
#include "e5.h"
#include "e7.h"
#include "e8.h"
#include "e2.h"
#include "e3.h"
#include <iostream>

E5::E5():Etat("E5"){}

bool E5::transition(Automate & automate, Symbole*s) {
        


        switch (*s){
        
        case OPENPAR:
        automate.decalage(s, new E2());
        break;
        
        case INT:
        automate.decalage(s, new E3());
        break;
        
        case ERREUR:
        break;
        
        case EXPR:
        automate.decalage(s, new E8());
        break;
        }
        return false;
    }
