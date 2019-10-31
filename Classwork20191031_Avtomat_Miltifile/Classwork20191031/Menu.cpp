# include <iostream>
# include <string>
# include "Avtomat.h"
# include "Menu.h"

using namespace std;


void Menu(avtomat drink1, avtomat drink2, avtomat drink3, avtomat drink4)
{

	int choice;
	bool exit = false;
	double allprofit = 0;
	while (!exit)
	{
		cout << "=====================================================================" << endl;
		cout << "What do You want to drink?\n1 - Pepsi\n2 - Fanta\n3 - Sprite\n4 - Bonaqua\nExit - 0  " << endl;
		cout << "If You don't want to drink - press 0;" << endl;
		cout << "=====================================================================" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			system("cls");
			cout << "Your choice is Pepsi" << endl;
			drink1.ShowInfo();
			drink1.Rest();
			drink1.Counting();
			drink1.Profit();
			drink1.ShowInfo();
			system("pause");
			break;
		}
		case 2:
		{
			system("cls");
			cout << "Your choice is Fanta" << endl;
			drink2.ShowInfo();
			drink2.Rest();
			drink2.Counting();
			drink2.Profit();
			drink2.ShowInfo();
			system("pause");
			break;
		}
		case 3:
		{
			system("cls");
			cout << "Your choice is Sprite" << endl;
			drink3.ShowInfo();
			drink3.Rest();
			drink3.Counting();
			drink3.Profit();
			drink3.ShowInfo();
			system("pause");
			break;
		}
		case 4:
		{
			system("cls");
			cout << "Your choice is Bonaqua" << endl;
			drink4.ShowInfo();
			drink4.Rest();
			drink4.Counting();
			drink4.Profit();
			drink4.ShowInfo();
			system("pause");
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
