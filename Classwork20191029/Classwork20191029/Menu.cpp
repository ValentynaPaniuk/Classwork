
#include <iostream>
#include "Drink.h"
#include "Menu.h"

using namespace std;

void Menu::MakeChoice()
{
	
	
	cout << "What do You want to drink?\nIf You don't want to drink - press 0;" << endl;
	cout << "1 - Coca Cola\n2- Cool tea\n3 - Lemon lime\n4 - grape juice\n5 - Soda cream\nExit - 0 "<< endl;
	while (!exit)
	{
		cin >> choice;
		switch (choice)
		{
		case 1:
		{

			break; 
		}
		case 2:
		{
			break; 
		}
		case 3:
		{
			break; 
		}
		case 4:
		{
			break; 
		}
		case 0:
		{
			cout << "Thank You for your choice!" << endl;
			exit = true;
		}
		default:
		{
			cout << "Wrong choice! " << endl;
		}
		}
	}

}
void Menu::ShowChoice()
{
		cout << "Our choice:" << choice << endl;
}