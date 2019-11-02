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

//Menu
void MenuManager(int menu, bool exit, cardBook *cardBooks, int numberOfCardBooks, int numberOfCardClients, cardClient *cardClients, developer dev, library &lib)
{


	
			lib.CreateLibrary(lib);
		
			cardClients->AddNewCardClient(cardClients, numberOfCardClients)
			cardClients->ShowInfoCardClient(cardClients, numberOfCardClients);
			system("pause");		
			
			cardBooks->CreateBookCollection(cardBooks, numberOfCardBooks);
			cardBooks->ShowInfoCardBook(cardBooks, numberOfCardBooks);
			
			cardBooks->FindCardBook(cardBooks, numberOfCardBooks);
			
			cardClients->SortByName(cardClients, numberOfCardClients);
			cardClients->ShowInfoClient(cardClients, numberOfCardClients);
			
			dev.CreateDev(dev);
			system("pause");
		

}
