#include "Util.h"

Util::Util()
{
}

Util::~Util()
{
}
int Util::genereNb(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
}