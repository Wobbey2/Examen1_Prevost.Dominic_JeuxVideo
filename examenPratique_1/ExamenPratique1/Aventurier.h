#pragma once
#include <string>
#include "Hache.h"
#include "Epee.h"
#include "Masse.h"
#include <vector>

class Aventurier
{
public:
	Aventurier();
	~Aventurier();

	int getAtt();
	int getOrDispo();
	int getForce();
	void initAventurier();
	void initMarchand();
	void acheterArme(int choixAchat);
	void ajouterArme(Arme* arme);
	void changerArme(int choix);
	std::string getArmeActive();
	std::string to_string();
	std::string getNom();
	std::string getArmeDispo();
	std::string getShop();

private:
	Arme* monArme;
	int orDispo;
	int force;
	int attaque;
	std::vector<Arme*> vecArme;
	std::vector<Arme*> vecShop;

protected:
	std::string nom;
};


