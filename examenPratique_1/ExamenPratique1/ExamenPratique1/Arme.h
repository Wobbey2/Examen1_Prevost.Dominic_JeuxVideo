#pragma once
#include <string>
#include <iostream>
#include "Util.h"

class Arme
{
public:
	Arme(int valeur, int attaque, int durabilite, std::string nom, float poids, int rarete);
	~Arme();

	int getValeur();
	int getAtt();
	int getDur();
	float getPoids();
	std::string getNom();
	std::string getRareteString(int raretee);
	int getRarete();

	virtual std::string to_string();






private:
	int valeur;
protected:
	int attaque;
	int durabilite;
	float poids;
	std::string nom;
	int rarete;
};

	

