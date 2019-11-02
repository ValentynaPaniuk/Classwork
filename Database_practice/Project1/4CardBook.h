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

/// BOOK///////////////////////////////////////////////////
struct cardBook
{
	string title;
	string author;
	string description;
	string titleBook;
	int pages;
	int yearOfPublication;
	int dateBookReceivedLibrary;

	


	void ShowInfoCardBook();
	void ShowInfoCardBooks(cardBook *cardBooks, const int numberOfCardBooks);
	void CreateBookCollection(cardBook *cardBooks, int &numberOfCardBooks);
	void FindCardBook(cardBook *cardBooks, const int numberOfCardBooks);
	
};








