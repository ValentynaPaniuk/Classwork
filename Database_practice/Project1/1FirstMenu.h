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

void FirstMenu()
{
	bool exit = false;
	int menu = 8;
	int numberOfCardBooks = 0;
	int numberOfCardClients = 0;
	developer dev;
	library lib;
	string personType;

	cardClient *cardClients = new cardClient[numberOfCardClients];

	cardBook *cardBooks = new cardBook[numberOfCardBooks];

	

	void MenuManager(int menu, bool exit, cardBook *cardBooks, int numberOfCardBooks, int numberOfCardClients, cardClient *cardClients, developer dev, library &lib);
	
}

