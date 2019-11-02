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

/////  CLIENT    ////////////////////////////////////////////



void cardClient::ShowInfoCardClient()
	{

		cout << "ID card\t" << idCard << "\nName " << name << " " << surname << "\nHobby:\t" << hobby << "\nDate of birthday:\t" << dateOfBirthday << " " << monthOfBirthday << " " << yearOfBirthday << endl;
	}

void cardClient:: ShowInfoClient(cardClient *cardClients, int &numberOfCardClients)
{
	for (int i = 0; i < numberOfCardClients; i++)
	{
		cardClients[i].ShowInfoCardClient();
	}

}

void cardClient::AddNewCardClient(cardClient *cardClients, int &numberOfCardClients)
{

	for (int i = 0; i < numberOfCardClients; i++)
	{

		cardClients[i].idCard = i + 1;
		cout << "Add card of the client: => " << cardClients[i].idCard << endl;
		cout << "Name of client:\t";
		cin >> cardClients[i].name;
		cout << "Surname of client:\t";
		cin >> cardClients[i].surname;
		cout << "Hobby:\t";
		cin >> cardClients[i].hobby;
		cout << "Date of birthday:\t";
		cin >> cardClients[i].dateOfBirthday;
		cout << "Month of birthday:\t";
		cin >> cardClients[i].monthOfBirthday;
		cout << "Year of birthday:\t" << endl;
		cin >> cardClients[i].yearOfBirthday;
		cout << "----------------------------------------------------------" << endl;
		cout << "|   Add card of client " << cardClients[i].idCard << "     |" << endl;
		cout << "----------------------------------------------------------" << endl;
	}


}


void cardClient ::SortByName(cardClient *cardClients, int numberOfCardClients)
{
	for (int i = 0; i < numberOfCardClients - 1; i++)
	{
		for (int j = 0; j < numberOfCardClients - i - 1; j++)
		{
			if (cardClients[j].name > cardClients[j + 1].name)
			{
				swap(cardClients[j], cardClients[j + 1]);
			}
		}
	}
}
