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

struct developer
{
	string devel;
	string address;
	string email;

	void ShowInfoDev();
	void CreateDev(developer dev);
	
};


