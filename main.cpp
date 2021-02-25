#include <iostream>
#include "lexer.h"
#include "string"
#include "automate.h"

int main(void) {
  string chaine("(1+34)*123");

  Lexer l(chaine);
  Automate automate(chaine);

   Symbole * s;

   while(*(s=l.Consulter())!=FIN) {
      s->Affiche();
      cout<<endl;
      l.Avancer();
      
   }


   cout << "c'est la fin, voilà la résultat :" << endl;
   
   Fin * fin = (Fin *) s;
   fin->Affiche2();

   return 0;
}

