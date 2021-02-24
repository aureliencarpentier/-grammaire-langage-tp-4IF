#include "etat.h"

class E1 : Etat
{
	public :
	bool transition(Automate & automate, Symbole*s) = 0;
	
	
};
