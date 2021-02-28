#include "automate.h"
#include "e7.h"
#include "e5.h"
#include <iostream>
E7::E7():Etat("E7"){}

bool E7::transition(Automate & automate, Symbole*s) {
         


        //ici on récupère la pile de symboles contenue dans l'automate (fonction à tester évidement)

        stack<Symbole*> symboleStack = automate.getSymbolstack();

        stack<Symbole*> symboleStackCopy = automate.getSymbolstack();


        int j = symboleStack.size();

        for(int i ; i < j ; i++){

          symboleStackCopy.top()->Affiche();
          symboleStackCopy.pop();
        }
      
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
        //r2
        automate.reduction(3, new Expr(entierPrecedent1->getValeur()+entierPrecedent3->getValeur()));
        break;

        case PLUS:
        //r2
        automate.reduction(3, new Expr(entierPrecedent1->getValeur()+entierPrecedent3->getValeur()));
        break;
        
        case MULT:
        automate.decalage(s,new E5);
        break;
        
        case FIN:
        //r2
        automate.reduction(3, new Expr(entierPrecedent1->getValeur()+entierPrecedent3->getValeur()));
        break;
        
        case ERREUR:
        break;
        
        }
        return false;
}
