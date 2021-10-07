#include "LeJeu.h"



LeJeu::LeJeu()
{
}

LeJeu::~LeJeu()
{
}
void LeJeu::initJeu()
{
	monAventurier = new Aventurier();
	monAventurier->initAventurier();

}
void LeJeu::deroulementJeu()
{
	Menu::menuAffichage(Menu::menuPrincipale());
	int menuCourant = 0;
	while (!finPartie)
	{
		switch (_getch())
		{
		case KEY_UN:
			Menu::menuAffichage(monAventurier->to_string());
			menuCourant = 1;
			break;
		case KEY_DEUX:
			Menu::menuAffichage(monAventurier->getArmeDispo());
			menuCourant = 2;
			break;
		case KEY_TROIS:
			Menu::menuAffichage(monAventurier->getArmeDispo());
			std::cout << "\n" << std::endl;
			std::cout << "Quel arme voulez vous equipper?"<<std::endl;
			std::cout << "\n" << std::endl;
			std::cout << "**** VOTRE ARME ACTIVE PRESENTEMENT ****" << std::endl;
			std::cout << monAventurier->getArmeActive() << std::endl;
			monAventurier->changerArme(_getch());
			menuCourant = 3;
			break;
		case KEY_QUATRE:
			Menu::menuAffichage(monAventurier->getShop());
			std::cout << "\n" << std::endl;
			std::cout << "C'EST CE QUE LE MARCHAND A A VOUS OFFRIR" << std::endl;
			std::cout << "\n" << std::endl;
			std::cout << "QUEL ARME VOULEZ VOUS ACHETER?" << std::endl;
			std::cout << "SINON APPUYEZ SUR UN AUTRE TOUCHE" << std::endl;
			monAventurier->acheterArme(_getch());
			menuCourant = 4;
			break;
		case KEY_CINQ:
			finPartie = true;
			break;
		default:
			if (menuCourant == 0)
			{
				std::cout << "Veuillez entre une option valide" << std::endl;
			}
			else
			{
				menuCourant = 0;
			}
			break;
		}
		Menu::menuRetour();
		Menu::menuAffichage(Menu::menuPrincipale());
		
		
		
	}
}