#pragma once
#include "Aventurier.h"
#include <iostream>
#include <Windows.h>
#include "conio.h"


class Menu
{
public:
	Menu();
	~Menu();

	static std::string menuPrincipale();
	static void menuClear();
	static void menuRetour();
	static void menuAffichage(std::string aAfficher);

private:


};