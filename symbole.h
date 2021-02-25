#pragma once

#include <string>
using namespace std;

enum Identificateurs { OPENPAR, CLOSEPAR, PLUS, MULT, INT, FIN, ERREUR, EXPR };

const string Etiquettes[] = { "OPENPAR", "CLOSEPAR", "PLUS", "MULT", "INT", "FIN", "ERREUR", "EXPR" };

class Symbole {
   public:
      Symbole(int i) : ident(i) {  }
      virtual ~Symbole() { }
      operator int() const { return ident; }
      virtual void Affiche();
      virtual bool isTerminal() {return true;}
      
   protected:
      int ident;
};

class Fin : public Symbole {
  public:
      Fin(int v) : Symbole(FIN), valeur(v) { }
      virtual ~Fin() { }
      void Affiche2();
      int getValeur();
  protected:
      int valeur;
};

class Entier : public Symbole {
  public:
      Entier(int v) : Symbole(INT), valeur(v) { }
      virtual ~Entier() { }
      int getValeur();
  protected:
      int valeur;
};

class Expr :public Symbole {
  
  public:
    Expr():Symbole(EXPR){}
    Expr(int valeur):Symbole(EXPR), valeurExpression(valeur) {}
    virtual~Expr() {}
    virtual int getValeur();
    bool isTerminal() {return false;};
    
  protected : 

    int valeurExpression;
};