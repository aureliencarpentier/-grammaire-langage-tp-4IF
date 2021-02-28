#include "automate.h"
#include "e1.h"
#include "e4.h"
#include "e5.h"
#include <iostream>

E1::E1():Etat("E1"){}

bool E1::transition(Automate & automate, Symbole*s) {

        cout << "etat 1" << endl;

        stack<Symbole*> symboleStack = automate.getSymbolstack();
        
        Symbole * symbolePrecedent = symboleStack.top();
        Expr * exprPrecedent = (Expr*) symbolePrecedent;

        switch (*s){
        case PLUS:
        automate.decalage(s,new E4() );
        
        break;

        case MULT:
        
        automate.decalage(s, new E5());
        break;
        
        case FIN:
        // il faut dépiler et renvoyer la valeur de la dernière expression à travers FIN.
        return true;

        break;

        default:
          cout << "expresson invalide" << endl;
          exit(0);
          
        }
        return false;
    }
