#include "etat.h"

class E3 : public Etat
{
	public :
  E3();
	bool transition(Automate & automate, Symbole*s);

	
};
