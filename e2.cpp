#include "automate.h"
#include "e2.h"
#include "e3.h"
#include "e6.h"

E2::E2():Etat("E2"){}

bool E2::transition(Automate & automate, Symbole*s) {
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
            automate.decalage(s, new E6());
            break;
        }
        return false;
}
