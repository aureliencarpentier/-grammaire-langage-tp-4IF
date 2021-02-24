#include "automate.h"
#include "symbole.h"
#include <string>

using namespace std;

class Etat { 
public:



	Etat(string name);
	virtual ~Etat();
	void print() const;

  virtual bool transition(Automate & automate, Symbole*s)=0;
  
	protected:
		string name;
};