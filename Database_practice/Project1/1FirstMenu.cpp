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

void FirstMenu()
{
	
	system("cls");
	cout << "===================================================================" << endl;
	cout << "|                                                                  |" << endl;
	cout << "|                                                                  |" << endl;
	cout << "|                    WELCAME TO THE LIBRARY!                       |" << endl;
	cout << "|                                                                  |" << endl;
	cout << "|                                                                  |" << endl;
	cout << "|             People stop thinking, when they stop reading         |" << endl;
	cout << "|                                                                  |" << endl;
	cout << "|                                                                  |" << endl;
	cout << "|                                                                  |" << endl;
	cout << "|                                                                  |" << endl;
	cout << "===================================================================" << endl;
	
	
	cout << "\t\t\tAre you a client or manager?" << endl;
	cin >> personType;

	cout << "How many clients cards we will enter: " << endl;
	cin >> numberOfCardClients;
	

	cout << "How many book cards we will enter: " << endl;
	cin >> numberOfCardBooks;
	


	do
	{
		if (personType == "client" || personType == "Client" || personType == "CLIENT")
		{
			; // Calls Function mainMenu
		}

		else if (personType == "manager" || personType == "Manager" || personType == "MANAGER")
		{

			MenuManager(menu, exit, cardBooks, numberOfCardBooks, numberOfCardClients, cardClients, dev, &lib);
		}
	} while (personType == "client" || personType == "Client" || personType == "CLIENT" || personType == "manager" || personType == "Manager" || personType == "MANAGER");

	cout << endl << "Thank You for visiting our library. BYE !!! " << endl;




	delete[] cardBooks;
	cardBooks = nullptr;

	delete[] cardClients;
	cardClients = nullptr;



}
