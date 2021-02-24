#include "etat.h"
#include <string>

class E2 : public Etat
{
	public :
    E2();
	  bool transition(Automate & automate, Symbole*s);
};
