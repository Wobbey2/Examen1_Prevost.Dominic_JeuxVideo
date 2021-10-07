#include "Menu.h"
Menu::Menu()
{
}

Menu::~Menu()
{
}
std::string Menu::menuPrincipale()
{
	std::string message;
	message.append("----- MENU PRINCIPAL -----\n");
	message.append("CHOISIR L'UNE DES OPTIONS SUIVANTE \n");
	message.append("1 - VOIR VOTRE AVENTURIER  \n");
	message.append("2 - VOIR VOS ARMES  \n");
	message.append("3 - CHANGER ARME EQUIPPER  \n");
	message.append("4 - VOIR LE MARCHAND  \n");
	message.append("5 - QUITTER  \n");
	message.append("Veuillez entrer un choix qui se trouve dans le menu \n");
	return message;
}


void Menu::menuClear()
{
	system("cls");
}
void Menu::menuRetour()
{
	std::cout << "\nAppuyez sur une touche pour retourner au menu principale." << std::endl;
	switch (_getch())
	{
	default:
		break;
	}
}
void Menu::menuAffichage(std::string aAfficher)
{
	menuClear();
	std::cout << aAfficher << std::endl;

}