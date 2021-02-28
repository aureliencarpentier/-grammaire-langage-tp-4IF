#include "automate.h"
#include "e9.h"
#include <iostream>

E9::E9():Etat("E9"){}

bool E9::transition(Automate & automate, Symbole*s) {
        

        //ici on récupère la pile de symboles contenue dans l'automate (fonction à tester évidement)
        stack<Symbole*> symboleStack = automate.getSymbolstack();

        //ici, on récupère les 3 éléments en tête de la pile
        Symbole * etatPrecedent1 = symboleStack.top();
        symboleStack.pop();
        Symbole * etatPrecedent2 = symboleStack.top();
        symboleStack.pop();
        Expr * entierPrecedent2 = (Expr*) etatPrecedent2;
        Symbole * etatPrecedent3 = symboleStack.top();
        symboleStack.pop();



        switch (*s){

        case CLOSEPAR:
        automate.reduction(3, new Expr(entierPrecedent2->getValeur()));
        break;
        
        case PLUS:
        automate.reduction(3,new Expr(entierPrecedent2->getValeur()));
        break;
        
        case MULT:
        automate.reduction(3,new Expr(entierPrecedent2->getValeur()));
        break;

        case FIN:
        automate.reduction(3,new Expr(entierPrecedent2->getValeur()));
        break;

        default:
          cout << "expression invalide" << endl;
          exit(0);
        }
        return false;
    }
