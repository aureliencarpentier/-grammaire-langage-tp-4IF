#include "automate.h"
#include "symbole.h"
#include <string>

class Etat { 
public:
	Etat(std::string name);
	virtual ~Etat();
	void print() const;
	virtual bool transition(Automate & automate, Symbole*s) = 0;
	
	protected:
		std::string name;
};