#pragma once
#include "Aventurier.h"
#include "Menu.h"

#define KEY_UN 49
#define KEY_DEUX 50
#define KEY_TROIS 51 
#define KEY_QUATRE 52
#define KEY_CINQ 53

class LeJeu
{
public:
	LeJeu();
	~LeJeu();

	void initJeu();
	void deroulementJeu();

private:
	Aventurier* monAventurier;
	bool finPartie=false;
};

