#include "etat.h"
#include "symbole.h"

class E9 : public Etat
{
	public :
	bool transition(Automate & automate, Symbole*s);
	E9();
	
};
