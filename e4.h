#include "etat.h"

class E4 : public Etat
{
	public :
  E4();
	bool transition(Automate & automate, Symbole*s);
	
};