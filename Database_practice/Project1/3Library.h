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

// Library
struct library
{
	cardBook book;
	string name;
	int booksCount;
	string director;
	string address;
	string contactManager;
	string workSchedule;
	string history;

	void ShowInfoLibrary();
	void CreateLibrary(library &lib);

};
