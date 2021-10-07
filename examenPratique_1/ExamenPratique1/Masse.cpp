#include "Masse.h"



Masse::Masse():Arme(175,15,10,"Masse",10.5, Util::genereNb(1, 4))
{
}

Masse::~Masse()
{
}
std::string Masse::to_string()
{
	std::string message = Arme::to_string();
	return message;
}