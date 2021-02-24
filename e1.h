#include "etat.h"

class E1 : public Etat
{
	public :
	bool transition(Automate & automate, Symbole*s);
	E1();
	
};
