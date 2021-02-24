#include "etat.h"

class E0 : public Etat
{
	public :
	bool transition(Automate & automate, Symbole*s);
	E0();
	
};
