#include "automate.h"
#include "e2.h"
#include "e3.h"
#include "e4.h"
#include "e8.h"

E4::E4():Etat("E4"){}

bool E4::transition(Automate & automate, Symbole*s) {
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
