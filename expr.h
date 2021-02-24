class Expr :public Symbole {
  public:
    Expr():Symbole(EXPR,false) {}
    virtual~Expr() {}
    virtual double eval(constmap<string,double>& valeurs) = 0;
};