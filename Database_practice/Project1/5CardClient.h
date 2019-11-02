#pragma once
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

struct cardClient
{
	string idCard;
	string name;
	string surname;
	string hobby;
	int dateOfBirthday;
	int monthOfBirthday;
	int yearOfBirthday;


	void ShowInfoCardClient();
	void ShowInfoClient(cardClient *cardClients, int &numberOfCardClients);
	void AddNewCardClient(cardClient *cardClients, int &numberOfCardClients);
	void SortByName(cardClient *cardClients, int numberOfCardClients);

};
