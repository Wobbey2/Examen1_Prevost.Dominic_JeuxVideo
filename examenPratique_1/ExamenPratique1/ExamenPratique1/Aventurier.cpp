#include "Aventurier.h"
#include "FactoryArme.h"

Aventurier::Aventurier()
{
	attaque = 10;
	orDispo = 1000;
	force = 15;
	nom = "Paul le guerrier";
}

Aventurier::~Aventurier()
{
}

int Aventurier::getAtt()
{
	return attaque+monArme->getAtt();
}
int Aventurier::getOrDispo()
{
	return orDispo;
}
int Aventurier::getForce()
{
	return force;
}
std::string Aventurier::getNom()
{
	return nom;
}
std::string Aventurier::getArmeDispo()
{
	std::string armeDispo;
	for (int i = 0; i < vecArme.size(); i++)
	{
		armeDispo.append(std::to_string(i + 1) + " - " + vecArme[i]->to_string()+"\n");
	}
	return armeDispo;
}
std::string Aventurier::getShop()
{
	std::string shopDispo;
	for (int i = 0; i < vecShop.size(); i++)
	{
		shopDispo.append(std::to_string(i + 1) + " - " + vecShop[i]->to_string() + "\n");
	}
	return shopDispo;
}
void Aventurier::initAventurier()
{
	for (int i = 0; i < 2; i++)
	{
		vecArme.push_back(FactoryArme::getRandomArme());
	}
	monArme = vecArme[0];
	initMarchand();
}
//pour aller plus vite je l'ai fait dans aventurier, sinon ca aurait ete une autre classe
void Aventurier::initMarchand()
{
	for (int i = 0; i < 4; i++)
	{
		vecShop.push_back(FactoryArme::getRandomArme());
	}
	
}
void Aventurier::ajouterArme(Arme* arme)
{
	vecArme.push_back(arme);
}
void Aventurier::changerArme(int choix)
{
	choix = choix - 49;
	monArme = vecArme[choix];
}
void Aventurier::acheterArme(int choixAchat)
{
	choixAchat = choixAchat - 49;
	if (vecShop[choixAchat]->getValeur() <= getOrDispo())
	{
		vecArme.push_back(vecShop[choixAchat]);
		orDispo = orDispo - vecShop[choixAchat]->getValeur();
		vecShop.erase(vecShop.begin() + choixAchat);
	}
	else
	{
		std::cout << "Vous etes trop pauvre!" << std::endl;
	}
}
std::string Aventurier::getArmeActive()
{
	std::string message;

	message.append(monArme->to_string());
	return message;
}
std::string Aventurier::to_string()
{
	std::string infoAventurier;

	infoAventurier.append("Nom : " + this->getNom() + "\n");
	infoAventurier.append("Attaque : " + std::to_string(this->getAtt()) + "\n");
	infoAventurier.append("Or : " + std::to_string(this->getOrDispo()) + "\n");
	infoAventurier.append("Force : " + std::to_string(this->getForce()) + "\n");
	infoAventurier.append("Arme equiper : " + monArme->to_string() + "\n");

	return infoAventurier;
}