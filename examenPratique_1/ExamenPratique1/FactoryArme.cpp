#include "FactoryArme.h"

FactoryArme::FactoryArme()
{
}

FactoryArme::~FactoryArme()
{
}
Arme* FactoryArme::getRandomArme()
{
	int rdmNb = Util::genereNb(1, 3);

	Arme* arme = nullptr;

	if (rdmNb == 1)
	{
		arme = new Epee();
	}
	else if (rdmNb == 2)
	{
		arme = new Masse();
	}
	else
	{
		arme = new Hache();
	}
	return arme;
}