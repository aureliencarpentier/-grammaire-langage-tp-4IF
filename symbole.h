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
      virtual bool isTerminal() {return true}
      
   protected:
      int ident;
};

class Entier : public Symbole {
  public:
      Entier(int v) : Symbole(INT), valeur(v) { }
      ~Entier() { }
      virtual void Affiche();
  protected:
      int valeur;
};

class Expr :public Symbole {
  public:
    Expr():Symbole(EXPR,false) {}
    virtual~Expr() {}
    virtual double eval(constmap<string,double>& valeurs) = 0;
    bool isTerminal() {return false};
};