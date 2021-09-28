#include "Arme.h"


Arme::Arme(int valeur, int attaque, int durabilite, std::string nom, float poids, int rarete)
{
	this->valeur = valeur;
	this->attaque = attaque;
	this->durabilite = durabilite;
	this->nom = nom;
	this->poids = poids;
	this->rarete = rarete;
}

Arme::~Arme()
{
}
int Arme::getValeur()
{
	if (rarete == 1)
	{
		return valeur;
	}
	if (rarete == 2)
	{
		return valeur + 50;
	}
	if (rarete == 3)
	{
		return valeur + 150;
	}
	if (rarete == 4)
	{
		return valeur + 200;
	}
}
int Arme::getAtt()
{
	if (rarete == 1)
	{
		return attaque;
	}
	if (rarete == 2)
	{
		return attaque + 10;
	}
	if (rarete == 3)
	{
		return attaque + 15;
	}
	if (rarete == 4)
	{
		return attaque + 25;
	}
}
int Arme::getDur()
{
	return durabilite;
}
std::string Arme::getNom()
{
	return nom;
}
float Arme::getPoids()
{
	return poids;
}
int Arme::getRarete()
{
	return rarete;
}
std::string Arme::getRareteString(int raretee)
{
	if (raretee == 1)
	{
		return "Common";
	}
	if (raretee == 2)
	{
		return "Rare";
	}
	if (raretee == 3)
	{
		return "Unique";
	}
	else	
	{
		return "Legendary";
	}
}
std::string Arme::to_string()
{
	std::string infoArme;

	infoArme.append("Nom : " + this->getNom() + "\n");
	infoArme.append("Attaque : " + std::to_string(this->getAtt()) + "\n");
	infoArme.append("Durabilite : " + std::to_string(this->getDur()) + "\n");
	infoArme.append("Poids : " + std::to_string(this->getPoids()) + "\n");
	infoArme.append("Rarete : "+ this->getRareteString(this->getRarete())+ "\n");
	infoArme.append("Valeur: " + std::to_string(this->getValeur()) + "\n");

	return infoArme;
}