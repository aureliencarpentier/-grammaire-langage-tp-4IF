#include "automate.h"
#include "e3.h"
#include "symbole.h"
E3::E3():Etat("E3"){}

bool E3::transition(Automate & automate, Symbole*s) {
        //ici on récupère la pile de symboles contenue dans l'automate (fonction à tester évidement)
        stack<Symbole*> symboleStack = automate.getSymbolstack();

        //ici, on récupère le premier élément (le seul dont on a besoin car l'état 3 n'as que des réductions r5 et la règle 5 n'as que 1 élément à gauche du type entier.) 
        Symbole * etatPrecedent = symboleStack.top();
        Entier * entierPrecedent = (Entier*) etatPrecedent;
        switch (*s){

        case CLOSEPAR:

        automate.reduction(1, new Expr(entierPrecedent->getValeur()));
        break;


        case PLUS:
        automate.reduction(1, new Expr(entierPrecedent->getValeur()));
        break;


        case MULT:
        automate.reduction(1, new Expr(entierPrecedent->getValeur()));
        break;

        case FIN:
        automate.reduction(1, new Expr(entierPrecedent->getValeur()));
        break;
        }
        return false;
    }
