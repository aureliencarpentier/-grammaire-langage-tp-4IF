#include "etat.h"
#include <string>

class E2 : Etat
{
	public :
    E2(string name);
	  bool transition(Automate & automate, Symbole*s) = 0;
};
