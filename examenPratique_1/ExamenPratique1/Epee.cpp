#include "Epee.h"

Epee::Epee() : Arme(100, 10, 20, "Epee", 5.5,Util::genereNb(1,4))
{
}

Epee::~Epee()
{
}
std::string Epee::to_string()
{
	std::string message = Arme::to_string();
	return message;
}