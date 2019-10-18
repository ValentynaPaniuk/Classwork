# include <iostream>
# include <ctime>
# include <string>

using namespace std;

/// BOOK///////////////////////////////////////////////////
struct cardBook
{
	string title;
	string author;
	string description;
	int pages;
	int yearOfPublication;
	int dateBookReceivedLibrary;


	void ShowInfoCardBook()
	{
		cout << "Title\t" << title << "\tAuthor\t" << author << "\tPages:\t" << pages << "\nYear of publicathion\t" << yearOfPublication << "\nDate book received of the library:\t" << dateBookReceivedLibrary << endl;
		cout << "\nDescription\t" << description << endl;
	}
};


void ShowInfoCardBook(cardBook *cardBooks, const int numberOfCardBooks)
{
	for (int i = 0; i < numberOfCardBooks; i++)
	{
		cardBooks[i].ShowInfoCardBook();
	}
}

void CreateBookCollection(cardBook *cardBooks, int &numberOfCardBooks)
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


void FindCardBook(cardBook *cardBooks, const int numberOfCardBooks)
{
	string titleBook;
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

/////  CLIENT    ////////////////////////////////////////////
struct cardClient
{
	string idCard;
	string name;
	string surname;
	string hobby;
	int dateOfBirthday;
	int monthOfBirthday;
	int yearOfBirthday;

	void ShowInfoCardClient()
	{

		cout << "ID card\t" << idCard << "\nName " << name << " " << surname << "\nHobby:\t" << hobby << "\nDate of birthday:\t" << dateOfBirthday << " " << monthOfBirthday << " " << yearOfBirthday << endl;
	}
};

void ShowInfoClient(cardClient *cardClients, const int numberOfCardClients)
{
	for (int i = 0; i < numberOfCardClients; i++)
	{
		cardClients[i].ShowInfoCardClient();
	}

}

void AddNewCardClient(cardClient *cardClients, const int numberOfCardClients)
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


void SortByName(cardClient *cardClients, const int numberOfCardClients)
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

//Developer

struct developer
{
	string devel;
	string address;
	string email;

	void ShowInfoDev()
	{
		cout << "    Developer: \t" << devel << "\nAddress: \t" << address << "e-mail: \t" << email << endl;
		cout << "                           All rights reserved." << endl;
		cout << "     Support phone: +3(8)096-599-13-35 (paid from all Ukrainian networks)." << endl;
	}
};

void CreateDev(developer dev)
{

	dev.devel = "Paniuk Valentyna";
	dev.address = "str. Haidamatska, buil. 41, apt. 78, Rivne, 33000";
	dev.email = "valentyna.paniuk@gmail.com";
	dev.ShowInfoDev();
}



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
	void ShowInfoLibrary()
	{
		cout << "LIBRARY:\t" << name << "\nAddress:\t" << address << "\nworkSchedule\t" << workSchedule << endl;
	}
};

void CreateLibrary(library &lib)
{
	lib.name = "Rivne Regional Universal Scientific Library";
	lib.booksCount = 10;
	lib.director = "Valentyna Petrivna Yaroschuk";
	lib.address = "33028, Rivne, Sq. Korolenko, 6";
	lib.workSchedule = "\t9:00=19:00; \nSunday:\t\t\t9:00 = 18:00;\n\t\t\tDay off is friday. ";
	lib.history = "Rivne Regional Universal Scientific Library was founded in February 1940.";
	lib.ShowInfoLibrary();
}




void MenuManager(int menu, bool exit, cardBook *cardBooks, int numberOfCardBooks, const int numberOfCardClients, cardClient *cardClients, developer dev, library &lib)
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
			CreateLibrary(lib);
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
			CreateBookCollection(cardBooks, numberOfCardBooks);
			ShowInfoCardBook(cardBooks, numberOfCardBooks);
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
			CreateDev(dev);
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



int main()
{
	bool exit = false;

	int numberOfCardBooks = 0;
	int numberOfCardClients = 0;
	int menu = 8;

	string personType;

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

	cout << "How many book cards we will enter: " << endl;
	cin >> numberOfCardBooks;
	cout << "How many people do You want to add: " << endl;
	cin >> numberOfCardClients;


	cardBook *cardBooks = new cardBook[numberOfCardBooks];
	cardClient *cardClients = new cardClient[numberOfCardClients];
	developer dev;
	library lib;

	do
	{
		if (personType == "client" || personType == "Client" || personType == "CLIENT")
		{
			; // Calls Function mainMenu
		}

		else if (personType == "manager" || personType == "Manager" || personType == "MANAGER")
		{
			MenuManager(menu, exit, cardBooks, numberOfCardBooks, numberOfCardClients, cardClients, dev, lib);
		}
	} while (personType == "client" || personType == "Client" || personType == "CLIENT" || personType == "manager" || personType == "Manager" || personType == "MANAGER");

	cout << endl << "Thank You for visiting our library. BYE !!! " << endl;


	//MenuManager(menu, exit, cardBooks, numberOfCardBooks, numberOfCardClients, cardClients, dev, lib);










	system("pause");
	return 0;
}
