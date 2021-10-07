#include "Hache.h"


Hache::Hache(): Arme(200,25,30,"Hache",8.5, Util::genereNb(1, 4))
{
}

Hache::~Hache()
{
}

std::string Hache::to_string()
{
	std::string message = Arme::to_string();
	return message;
}