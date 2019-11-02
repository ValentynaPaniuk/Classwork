# include <iostream>
# include <ctime>
# include <string>
# include "1FirstMenu.h"
# include "2SecondMenu.h"
# include "3Library.h"
# include "4CardBook.h"
# include "5CardClient.h"
# include "6Developer.h"

using namespace std;

//Menu
void MenuManager(menu, exit, cardBooks, numberOfCardBooks, numberOfCardClients, cardClients, dev, lib)
{


	while (!exit)
	{
		cout << " =================     MENU   ==============================:\n";
		cout << "  1.Enter Database:\n";
		cout << "    11.From File\n";
		cout << "    12.From Keyboard\n";
		cout << "**************************" << endl;
		cout << "  2.Browsing the database БД\n"; //перегляд бази даних
		cout << "**************************" << endl;
		cout << "  3. Editing the database:\n"; //зміна бази даних
		cout << "    31.Clear the database\n";
		cout << "    32.Add new card clients:\n";
		cout << "    33.Add new card books:\n";
		cout << "    34.Delete card books\n";
		cout << "    35.Delete card client\n";
		cout << "**************************" << endl;
		cout << "  4.Database output:\n"; //вивід бази даних
		cout << "    41.In File\n";
		cout << "    42.On Screen\n";
		cout << "**************************" << endl;
		cout << "  5.Data search:\n";
		cout << "     51.By client's last name:\n";
		cout << "     52.By the title of the book:\n";
		cout << "     53.By the author's name:\n";
		cout << "**************************" << endl;
		cout << "  6.Sorting:\n";
		cout << "     61.Sort by book title:\n";
		cout << "     62.Sort by the author of the book:\n";
		cout << "     63.Sort by visitor name:\n";
		cout << "**************************" << endl;
		cout << "  7.About the developer\n";
		cout << "**************************" << endl;
		cout << "  8.Clear the screen\n";
		cout << "**************************" << endl;
		cout << "  9.Exit\n\n";

		cout << "Select menu item: ";
		cin >> menu;

		switch (menu)
		{
		case 1: //1.Enter Database:\n";
		{
			system("cls");
			lib.CreateLibrary(lib);
			system("cls");
			exit = true;

		}
		case 11: //11.From File\n";
		{
			break;
		}
		case 12: // 12.From Keyboard\n";
		{
			break;
		}
		case 2: // 2.Browsing the database БД\n"; перегляд бази даних
		{

			break;
		}
		case 31: //31.Clear the database\n";
		{
			break;
		}
		case 32: //  32.Add new card clients:\n";
		{
			system("cls");
			AddNewCardClient(cardClients, numberOfCardClients);
			ShowInfoClient(cardClients, numberOfCardClients);
			system("pause");
			break;

		}
		case 33: //33.Add new card books:\n";
		{
			system("cls");
			cardBooks->CreateBookCollection(cardBooks, numberOfCardBooks);
			cardBooks->ShowInfoCardBook(cardBooks, numberOfCardBooks);
			system("pause");
			break;
		}
		case 34: //34.Delete card books\n";
		{
			break;
		}
		case 35: //35.Delete card client\n";
		{
			break;
		}
		case 41: // 41.Database output in File\n";
		{
			break;
		}
		case 42: //42.Database output on Screen\n";
		{
			break;
		}
		case 51: // 51.Data search by client's last name:\n";
		{
			break;
		}
		case 52: //52.Data search by the title of the book:\n";
		{
			FindCardBook(cardBooks, numberOfCardBooks);
			menu = 8;
			break;
		}

		case 53: //54.Data search by the author's name:\n";
		{
			break;
		}
		case 61: // 61.Sort by book title:\n";
		{
			break;
		}
		case 62: //62.Sort by the author of the book:\n";
		{
			break;
		}
		case 63: //63.Sort by visitor name:\n";
		{
			SortByName(cardClients, numberOfCardClients);
			ShowInfoClient(cardClients, numberOfCardClients);
			menu = 8;
			break;
		}

		case 7: //7.About the developer\n";
		{
			system("cls");
			dev.CreateDev(dev);
			system("pause");
			break;
		}
		case 8: //8.Clear the screen\n";
		{
			system("cls");


			break;
		}
		case 9: //9.Exit\n\n";
		{
			exit = true;
			break;
		}

		default:
		{
			cout << "ERROR! \n\n";
			menu = 8;
		}
		}

	}

}




