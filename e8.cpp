#include "automate.h"
#include "e8.h"
#include <iostream>
E8::E8():Etat("E8"){}

bool E8::transition(Automate & automate, Symbole*s) {

 
        //ici on récupère la pile de symboles contenue dans l'automate (fonction à tester évidement)
        stack<Symbole*> symboleStack = automate.getSymbolstack();

        //ici, on récupère les 3 éléments en tête de la pile
        Symbole * etatPrecedent1 = symboleStack.top();
        symboleStack.pop();
        Symbole * etatPrecedent2 = symboleStack.top();
        symboleStack.pop();
        Symbole * etatPrecedent3 = symboleStack.top();
        symboleStack.pop();

        Expr * entierPrecedent1 = (Expr*) etatPrecedent1;
        Expr * entierPrecedent3 = (Expr*) etatPrecedent3;
        
        switch (*s){
       
        case CLOSEPAR:
        automate.reduction(3,new Expr(entierPrecedent1->getValeur()*entierPrecedent3->getValeur()));
        break;
        
        case PLUS:
        automate.reduction(3,new Expr(entierPrecedent1->getValeur()*entierPrecedent3->getValeur()));
        break;
        
        case MULT:
        automate.reduction(3,new Expr(entierPrecedent1->getValeur()*entierPrecedent3->getValeur()));
        break;

        case FIN:
        automate.reduction(3,new Expr(entierPrecedent1->getValeur()*entierPrecedent3->getValeur()));
        break;
        
        default:
          cout << "expression invalide" << endl;
          exit(0);
        
        }
        return false;
    }
