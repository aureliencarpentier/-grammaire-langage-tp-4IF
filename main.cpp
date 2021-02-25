#include <iostream>
#include "lexer.h"
#include "string"
#include "automate.h"
#include "e0.h"
#include "e1.h"
#include "e2.h"
#include "e3.h"
#include "e4.h"
#include "e5.h"
#include "e6.h"
#include "e7.h"
#include "e8.h"
#include "e9.h"

int main(void) {
  string chaine("(1+34)*123");

  //Lexer l(chaine);
  Automate automate(chaine);
  automate.executer();

/*
   Symbole * s;

   while(*(s=l.Consulter())!=FIN) {
      s->Affiche();
      cout<<endl;

      l.Avancer();
      
   }


   cout << "c'est la fin" << endl;
   
   Fin * fin = (Fin *) s;
   fin->Affiche2();
*/
   return 0;
}

