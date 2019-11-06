# include <iostream>
# include <string>
# include <fstream>
# include <iomanip>
# include <stdlib.h>


using namespace std;
int SIZE = 0;


/*3. Предметна область - бібліотека.
Розв'язувані задачі: видача довідок про наявність книг, журналів, газет. 

Реалізувати наступні сервіси:
1. Заповнення бази даних
2. Перегляд даних про всі джерела
//////////3. Доповнення бази даних записом джерела
4. Видалення джерела із бази даних
////////5. Упорядкування по полях : тип інформаційного джерела(книга, журнал, газета) і назва
////////6. Пошук : наявність заданої книги(відомі автор і назва), наявність заданого журналу
////////7. Вибірка : книги автора ХХ; 
////////8. Вибірка : книги певної категорії(фантастика, детектив тощо), 
////////9. Вибірка : журнали за певний рік(відомі рік і назва журналу)
////////10. Обчислення: кількість книг деякої категорії
11. Корекція : видалення зведень про газети за певний рік
12. Табличний звіт : список боржників книг певного автора
	Для обробки даних скористатися динамічним масивом покажчиків на структури відповідного типу.
*/


/// BOOK///////////////////////////////////////////////////


struct cardBook
{

	string kindBook;
	string title ;
	string author;
	string description;
	int idCardBook = 0;
	int pages;
	int yearOfPublication;
	int dateBookReceivedLibrary;



	void ShowInfoCardBook()
	{
		cout << "----------------------------------------" << endl;
		cout << kindBook << " :\t" << title << "\tAuthor:\t" << author << "\tPages:\t" << pages << "\nYear of publicathion:\t" << yearOfPublication << "\tDate book received of the library:\t" << dateBookReceivedLibrary << "\nDescription:\t" << description << endl;
		cout << "----------------------------------------" << endl;
	}
};

//2. Перегляд даних про книги
void ShowInfoCardBook(cardBook *cardBooks, const int numberOfCardBooks)
{
	for (int i = 0; i < SIZE + numberOfCardBooks; i++)
	{
		cardBooks[i].ShowInfoCardBook();
	}
}


// 1. Читання бази даних із файлу
void FillCollectionFromFile(cardBook *&cardBooks) //11.Enter database from File\n";
{
	char temp[255];
	string path = "db.txt";
	ifstream readFile;
	readFile.open(path);
	if (!readFile.is_open())
	{
		cout << "Can't open file " << endl;
	}
	else
	{
		cout << "Opened" << endl;
		readFile.getline(temp, 255);
		SIZE = readFile.eof();
		cardBooks = new cardBook[SIZE];
		for (int i=0; i<SIZE; i++)
		{

			readFile.getline(temp, 255);
			cardBooks[i].idCardBook = stoi(temp);
			readFile.getline(temp, 255);
			cardBooks[i].kindBook = temp;
			readFile.getline(temp, 255);
			cardBooks[i].title = temp;
			readFile.getline(temp, 255);
			cardBooks[i].author = temp;
			readFile.getline(temp, 255);
			cardBooks[i].description = temp;
			readFile.getline(temp, 255);
			cardBooks[i].pages = stoi(temp);
			readFile.getline(temp, 255);
			cardBooks[i].yearOfPublication = stoi(temp);
			readFile.getline(temp, 255);
			cardBooks[i].dateBookReceivedLibrary = stoi(temp);
			
		}
	}

	readFile.close();

}


void PrintBookCollectionFromFile(cardBook *&cardBooks)
{
	for (int i = 0; i < SIZE; i++)
	{
		cardBooks[i].ShowInfoCardBook();
		cout << endl;
	}
}


// 1. Запис даних у файл

void OutputCollectionInFile(cardBook *&cardBooks, int numberOfCardBooks)
{
	ofstream writeFile;
	string path = "db1.txt";
	string text;
	writeFile.open(path, ofstream::app);
	if (!writeFile.is_open())
	{
		cout << "Can't open file!" << endl;
	}
	else
	{
		cout << "File saved!" << endl;
		for (int i = 0; i < SIZE + numberOfCardBooks; i++)
		{	
			writeFile <<"**************   Cardbook number: "<< i + 1 <<"**********************"<< endl;
			writeFile << "Card ID:\t" << cardBooks[i].idCardBook << endl;
			writeFile << "Kind:\t   " << cardBooks[i].kindBook <<endl;
			writeFile << "Title:\t   "<< cardBooks[i].title << endl;
			writeFile << "Author:\t   "<<cardBooks[i].author << endl;
			writeFile << "Description:\t   " <<cardBooks[i].description << endl;
			writeFile << "Pages:\t   "<<cardBooks[i].pages << endl;
			writeFile << "Year of publication:\t   "<< cardBooks[i].yearOfPublication << endl;
			writeFile << "The year the book was received by the library:\t   "<< cardBooks[i].dateBookReceivedLibrary<< endl;
		}
		
	}

	writeFile.close();
}




//1. Заповнення бази даних книжками з клавіатури
void CreateBookCollection(cardBook *cardBooks, int &numberOfCardBooks)
{
	cout << "You must add "<< SIZE + numberOfCardBooks <<" books:"<< endl;
	for (int i = 0; i < SIZE + numberOfCardBooks; i++)
	{
		bool exit = false;
		cardBooks[i].idCardBook = i + 1;
		cout << "*****************  Add card of the book: => " << cardBooks[i].idCardBook <<"****************************"<<endl;
		while (!exit)
		{
			cout << "=============================================================================" << endl;
			cout << "\nKind of book (book, magazine, newspaper, booklet):  " << endl;
			cin >> cardBooks[i].kindBook;
			if (cardBooks[i].kindBook == "book" || cardBooks[i].kindBook == "magazine" || cardBooks[i].kindBook == "newspaper" || cardBooks[i].kindBook == "booklet")
			{
				exit = true;
			}
			else
			{
				cout << "Enter the printed type correctly!!! " << endl;
			}
		}

		cout << "Title: \t";
		cin >> cardBooks[i].title;
		cout << "Author: \t";
		cin >> cardBooks[i].author;
		cout << "Description: \t";
		cin >> cardBooks[i].description;
		exit = false;
		while (!exit)
		{
			cout << "Pages: \t";
			cin >> cardBooks[i].pages;
			if (cardBooks[i].pages < 1)
			{
				cout << "!!! Enter the correct number of pages: " << endl;
			}
			else
			{
				exit = true;
			}
		}
		exit = false;
		while (!exit)
		{
			cout << "Year of publication: \t";
			cin >> cardBooks[i].yearOfPublication;
			if (1100 > cardBooks[i].yearOfPublication || cardBooks[i].yearOfPublication > 2019)
			{
				cout << "!!! Enter the correct Year of publication:  " << endl;
			}
			else
			{
				exit = true;
			}
		}

		exit = false;
		while (!exit)
		{
			cout << "The Year the book was received by the library \t";
			cin >> cardBooks[i].dateBookReceivedLibrary;
			if (cardBooks[i].dateBookReceivedLibrary < cardBooks->yearOfPublication && cardBooks[i].dateBookReceivedLibrary < 1940)
			{
				cout << "!!! Enter the correct year the book was received by the library: " << endl;
			}
			else
			{
				exit = true;
			}
		}
		cout << "----------------------------------------------" << endl;
		cout << "| Add card " << i + 1 << "    |" << endl;
		cout << "----------------------------------------------" << endl;

	}

}

//4. Видалення джерела із бази даних

//void DelBookTitle(cardBook *cardBooks, int numberOfCardBooks, int menu, int index)
//{
//	bool exit = false;
//	SIZE = 7;
//	
//	
//
//}

// 5. Упорядкування по полях : тип інформаційного джерела(книга, журнал, газета) і назва

void SortByKind(cardBook *cardBooks, const int numberOfCardBooks)
{
	cout << "Kind of book: 1 - book, 2 - magazine, 3 - newspaper, 4 - booklet" << endl;
	for (int i = 0; i < SIZE + numberOfCardBooks - 1; i++)
	{
		for (int j = 0; j < numberOfCardBooks - i - 1; j++)
		{
			if (cardBooks[j].kindBook > cardBooks[j + 1].kindBook)
			{
				swap(cardBooks[j], cardBooks[j + 1]);
			}
		}
	}

}


//6.1 Пошук : наявність заданої книги (відомі автор і назва)
void FindCardBook(cardBook *cardBooks, const int numberOfCardBooks, int menu, string FindBookTitle, string FindBookAuthor)
{
	bool isBookTitle = false;
	bool isBookAuther = false;
	
		cout << "Enter Title of book do You want to find : " << endl;
		cin >> FindBookTitle;
		cout << "Enter Author of book do You want to find : " << endl;
		cin >> FindBookAuthor;
		for (int i = 0; i < SIZE + numberOfCardBooks; i++)
		{
			if (cardBooks[i].title == FindBookTitle && cardBooks[i].author == FindBookAuthor)
			{
				isBookTitle = true;
				isBookAuther = true;
				cardBooks[i].ShowInfoCardBook();
				cout << endl;
			}
		}
		if (!isBookTitle || !isBookAuther)
		{
			cout << "Please, enter correct data." << endl;
		}
		

}

//6.2 Пошук : наявність заданого журналу

void FindMagazineTitle(cardBook *cardBooks, const int numberOfCardBooks, string FindBookTitle)
{
	bool isMagazine = false;
		cout << "Enter title of manager do You want to find : " << endl;
		cin >> FindBookTitle;
		for (int i = 0; i < SIZE + numberOfCardBooks; i++)
		{
			if (cardBooks[i].title == FindBookTitle && cardBooks[i].kindBook == "magazine")
			{
				isMagazine = true;
				cardBooks[i].ShowInfoCardBook();
				cout << endl;
			}
			
		}
		if (!isMagazine)
			{
			cout << "There is no such magazine in the library.\nCheck the search terms. " << endl;
			}

}




//7. Вибірка : книги автора ХХ;
void FindBooksAuthor(cardBook *cardBooks, const int numberOfCardBooks, int menu, string FindBookAuthor)
{
	bool isAuthor = false;

	cout << "Enter the Author of books do You want to find : " << endl;
	cin >> FindBookAuthor;

	for (int i = 0; i < SIZE + numberOfCardBooks; i++)
	{
		if (cardBooks[i].author == FindBookAuthor)
		{
			isAuthor = true;
			cardBooks[i].ShowInfoCardBook();
			cout << endl;
		}
	}
	if (!isAuthor)
	{
		cout << "There are no books by this author" << endl;
		cout << "***************************************" << endl;

	}


}

//8. Вибірка : книги певної категорії(фантастика, детектив тощо), 
void FindBooksDescription(cardBook *cardBooks, const int numberOfCardBooks, int menu, string FindDescription)
{
	bool isDescription = false;

	cout << "Enter the Description of books do You want to find : " << endl;
	cin >> FindDescription;

	for (int i = 0; i < SIZE + numberOfCardBooks; i++)
	{
		if (cardBooks[i].description == FindDescription)
		{
			isDescription = true;
			cardBooks[i].ShowInfoCardBook();
			cout << endl;
		}
	}
	if (!isDescription)
	{
		cout << "There are no books in this description" << endl;
		cout << "***************************************" << endl;

	}


}

// 9. Вибірка : журнали за певний рік(відомі рік і назва журналу)

void FindMagazineTitleYear(cardBook *cardBooks, const int numberOfCardBooks, int menu, int FindYearMagazine)
{
	bool isMagazine = false;

	cout << "Enter the Year the magazine was printed : ";
	cin >> FindYearMagazine;

	for (int i = 0; i < SIZE + numberOfCardBooks; i++)
	{
		if (cardBooks[i].kindBook == "magazine" && cardBooks[i].yearOfPublication == FindYearMagazine)
		{
			isMagazine = true;
			cardBooks[i].ShowInfoCardBook();
			cout << endl;
		}
	}
	if (!isMagazine)
	{
		cout << "There are no magazines published this year" << endl;
		cout << "***************************************" << endl;

	}


}

// 10. Обчислення: кількість книг деякої категорії

void SumBooksDescription(cardBook *cardBooks, const int numberOfCardBooks, int menu, string FindDescription)
{
	bool isDescription = false;
	int summa = 0;

	cout << "Enter the Description of books do You want to find : " << endl;
	cin >> FindDescription;

	for (int i = 0; i < SIZE + numberOfCardBooks; i++)
	{
		if (cardBooks[i].description == FindDescription)
		{
			isDescription = true;
			summa++;
			cardBooks[i].ShowInfoCardBook();
			cout << endl;
		}
	}
	if (!isDescription)
	{
		cout << "There are no books in this description" << endl;
		cout << "***************************************" << endl;

	}
	cout << "===========================================================================" << endl;
	cout << "Number of books in the category: \" " << FindDescription << "\" = " << summa << endl;

}




// 11. Корекція : видалення зведень про газети за певний рік


// 12. Табличний звіт : список боржників книг певного автора





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

//2. Перегляд даних про читачів
void ShowInfoClient(cardClient *cardClients, const int numberOfCardClients)
{
	for (int i = 0; i < SIZE + numberOfCardClients; i++)
	{
		cardClients[i].ShowInfoCardClient();
	}

}

//1. Заповнення бази даних читачами бібліотеки
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


void SortBySurname(cardClient *cardClients, const int numberOfCardClients)
{
	for (int i = 0; i < SIZE + numberOfCardClients - 1; i++)
	{
		for (int j = 0; j < numberOfCardClients - i - 1; j++)
		{
			if (cardClients[j].surname > cardClients[j + 1].surname)
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

//Про бібліотеку
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


//Menu
void MenuManager(int menu, bool exit, cardBook *cardBooks, int numberOfCardBooks, int numberOfCardClients, cardClient *cardClients, developer dev, library &lib, int SIZE, string FindBookTitle, string FindBookAuthor, string FindDescription, int FindYearMagazine)
{


	while (!exit)
	{
		system("cls");
		cout << " =================     MENU   ==============================:\n";
		cout << "  1. About Library:\n"; // Ввід бази даних
		cout << "    11.Enter database from File\n";
		cout << "    12.Enter database from Keyboard\n";
		cout << "**************************" << endl;
		cout << "  2.Browsing the database:\n"; //Перегляд бази дних
		cout << "**************************" << endl;
		cout << "  3. Editing the database:\n"; //Редагування бази даних
		cout << "    31.Clear the database\n";
		cout << "    32.Add new card client:\n";
		cout << "    33.Add new card book:\n";
		cout << "    34.Delete card book\n";
		cout << "    35.Delete card client\n";
		cout << "**************************" << endl;
		cout << "  4.Database output:\n"; //Вивід бази даних
		cout << "    41.In File\n"; //+
		cout << "    42.On Screen\n";
		cout << "**************************" << endl;
		cout << "  5.Data search:\n";//Пошук
		cout << "     51.By client's last name:\n";
		cout << "     52.By the title and Author of the book:\n"; //+
		cout << "     53.By the Title of magazine:\n"; //+
		cout << "     54.By the Author of books\n"; //+
		cout << "     55.By the Description of books\n"; //+
		cout << "     56.By the Year of publication of magazine\n"; //+
		cout << "**************************" << endl;
		cout << "  6.Sorting:\n"; //Сортування
		cout << "     61.Sort by book kind:\n"; //+
		cout << "     62.Sort by the author of the book:\n";
		cout << "     63.Sort by visitor last name:\n";//+
		cout << "**************************" << endl;
		cout << "  7.Reports:\n"; //Звіти
		cout << "     71.Number of books in the category: fiction, detective, fashion, business, ... :\n";
		cout << "**************************" << endl;
		cout << "  8.About the developer\n";
		cout << "**************************" << endl;
		cout << "  9.Clear the screen\n";
		cout << "**************************" << endl;
		cout << "  10.Exit\n\n";

		cout << "Select menu item: ";
		cin >> menu;

		switch (menu)
		{
		case 1: //1.About Database:\n";
		{
			system("cls");
			CreateLibrary(lib);
			system("pause");
			break;

		}
		case 11: //11.From File\n";
		{
			system("cls");
			FillCollectionFromFile(cardBooks);
			//PrintBookCollectionFromFile(cardBooks);
			//ShowInfoCardBook(cardBooks, numberOfCardBooks);
			system("pause");
			break;
		}
		case 12: // 12.From Keyboard\n";
		{
			system("cls");
			CreateBookCollection(cardBooks, numberOfCardBooks);
			ShowInfoCardBook(cardBooks, numberOfCardBooks);
			system("pause");
			break;
		}
		case 2: // 2.Browsing the database ÁÄ\n"; ïåðåãëÿä áàçè äàíèõ
		{
			system("cls");
			ShowInfoCardBook(cardBooks, numberOfCardBooks);
			system("pause");
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
		case 33: //33.Add new card book:\n";
		{
			system("cls");
			
			system("pause");
			break;
		}
		case 34: //34.Delete card books\n";
		{
			system("cls");
			
			//ShowInfoCardBook(cardBooks, numberOfCardBooks);

			system("pause");
			break;
		}
		case 35: //35.Delete card client\n";
		{
			system("cls");

			system("pause");
			break;
		}
		case 41: // 41.Database output in File\n";
		{
			system("cls");
			OutputCollectionInFile(cardBooks, numberOfCardBooks);
			system("pause");
			break;
		}
		case 42: //42.Database output on Screen\n";
		{
			system("cls");

			system("pause");
			break;
		}
		case 51: // 51.Data search by client's last name:\n";
		{
			system("cls");
			SortBySurname(cardClients, numberOfCardClients);
			system("pause");
			break;
		}
		case 52: //52.Data search by the title and Author of the book:\n";
		{
			system("cls");
			FindCardBook(cardBooks, numberOfCardBooks, menu, FindBookAuthor, FindBookTitle);
			system("pause");
			break;
		}

		case 53: // 53.By the Title of magazine : \n";
		{
			system("cls");
			FindMagazineTitle(cardBooks, numberOfCardBooks, FindBookTitle);
			menu = 8;
			system("pause");
			break;
		}
		case 54://54.By the Author of books\n";
		{
			system("cls");
			FindBooksAuthor(cardBooks, numberOfCardBooks, menu, FindBookAuthor);
			menu = 8;
			system("pause");
			break;

		}

		case 55://55.By the Description of books\n";
		{
			system("cls");
			FindBooksDescription(cardBooks, numberOfCardBooks, menu, FindDescription);
			menu = 8;
			system("pause");
			break;

		}
		case 56: // 56.By the Title and Year of publication of magazine\n";
		{
			system("cls");
			FindMagazineTitleYear(cardBooks, numberOfCardBooks, menu, FindYearMagazine);
			menu = 8;
			system("pause");
			break;
		}
		case 61: // 61.Sort by book title:\n";
		{
			system("cls");
			SortByKind(cardBooks, numberOfCardBooks);
			ShowInfoCardBook(cardBooks, numberOfCardBooks);
			system("pause");
			break;
		}
		case 62: //62.Sort by the author of the book:\n";
		{
			system("pause");
			break;
		}
		case 63: //63.Sort by visitor name:\n";
		{
			SortBySurname(cardClients, numberOfCardClients);
			ShowInfoClient(cardClients, numberOfCardClients);
			menu = 8;
			system("pause");
			break;
		}

		case 71:
		{
			SumBooksDescription(cardBooks, numberOfCardBooks, menu, FindDescription);
			menu = 8;
			system("pause");
			break;
		}

		case 8: //8.About the developer\n";
		{
			system("cls");
			CreateDev(dev);
			system("pause");
			break;
		}
		case 9: //9.Clear the screen\n";
		{
			system("cls");


			break;
		}
		case 10: //10.Exit\n\n";
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

void FirstMenu()
{
	bool exit = false;
	int menu = 8;
	int numberOfCardBooks = 0;
	int numberOfCardClients = 0;
	int index = 0;

	string FindBookTitle;
	string FindBookAuthor;
	string FindDescription;
	int FindYearMagazine = 0;


	developer dev;
	library lib;
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



	do
	{
		if (personType == "client" || personType == "Client" || personType == "CLIENT")
		{
			; // Calls Function mainMenu
		}

		else if (personType == "manager" || personType == "Manager" || personType == "MANAGER")
		{
			cout << "How many clients cards we will enter: " << endl;
			cin >> numberOfCardClients;


			cout << "How many book cards we will enter: " << endl;
			cin >> numberOfCardBooks;

			cardClient *cardClients = new cardClient[numberOfCardClients];
			cardBook *cardBooks = new cardBook[numberOfCardBooks];


			//MenuManager(menu, exit, cardBooks, numberOfCardBooks, numberOfCardClients, cardClients, dev, lib, SIZE, FindBookTitle, FindBookAuthor, FindDescription, FindYearMagazine);

			MenuManager(menu, exit, cardBooks, numberOfCardBooks, numberOfCardClients, cardClients, dev, lib, SIZE, FindBookTitle, FindBookAuthor, FindDescription, FindYearMagazine);

			delete[] cardBooks;
			cardBooks = nullptr;

			delete[] cardClients;
			cardClients = nullptr;

		}
	} while (personType == "client" || personType == "Client" || personType == "CLIENT" || personType == "manager" || personType == "Manager" || personType == "MANAGER");

	cout << endl << "Thank You for visiting our library. BYE !!! " << endl;

}



int main()
{
	FirstMenu();

	system("pause");
	return 0;
}