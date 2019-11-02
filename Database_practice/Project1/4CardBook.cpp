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


void cardBook::ShowInfoCardBook()
	{
		cout << "Title\t" << title << "\tAuthor\t" << author << "\tPages:\t" << pages << "\nYear of publicathion\t" << yearOfPublication << "\nDate book received of the library:\t" << dateBookReceivedLibrary << endl;
		cout << "\nDescription\t" << description << endl;
	}

void cardBook::ShowInfoCardBooks(cardBook *cardBooks, const int numberOfCardBooks)
{
	for (int i = 0; i < numberOfCardBooks; i++)
	{
		cardBooks[i].ShowInfoCardBook();
	}
}



void cardBook::CreateBookCollection(cardBook *cardBooks, int &numberOfCardBooks)
{

	cout << "----------------------------------------" << endl;


	for (int i = 0; i < numberOfCardBooks; i++)
	{
		cout << "Add card of the book: => " << i + 1 << endl;
		cout << "Book title: " << endl;
		cin >> cardBooks[i].title;
		cout << "Book author: " << endl;
		cin >> cardBooks[i].author;
		cout << "Book description: " << endl;
		cin >> cardBooks[i].description;
		cout << "Book pages: " << endl;
		cin >> cardBooks[i].pages;
		cout << "Book year of publication: " << endl;
		cin >> cardBooks[i].yearOfPublication;
		cout << "The date the book was received by the library " << endl;
		cin >> cardBooks[i].dateBookReceivedLibrary;
		cout << "------------------------------------" << endl;
		cout << "|           Add card of book    |" << endl;
		cout << "------------------------------------" << endl;

	}
}


void cardBook::FindCardBook(cardBook *cardBooks, const int numberOfCardBooks)
{
	cout << "Enter title of book do You want to find: " << endl;
	cin >> titleBook;
	for (int i = 0; i < numberOfCardBooks; i++)
	{
		if (cardBooks[i].title == titleBook)
		{
			cardBooks[i].ShowInfoCardBook();
		}
	}
}

