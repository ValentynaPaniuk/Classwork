#include <iostream>
#include <string>

using namespace std;
//=============================================================================================================================
struct Book
{
	string title;
	string author;
	int pages;
	int price;

	void ShowBookInfo() {
		cout << "<!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!>" << endl;
		cout << "\nTitle: " << title << "\nAuthor: " << author << "\nPages: " << pages << "\nPrice: " << price << endl;
		cout << "<!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!>" << endl;
	}
};

void CreateBookCollection(Book *books, const int booksCount) {

	for (int i = 0; i < booksCount; i++) {
		cout << "Create book number: => " << i + 1 << endl;
		cout << "Book title: =>" << endl;
		cin >> books[i].title;
		cout << "Book author: =>" << endl;
		cin >> books[i].author;
		cout << "Pages: =>" << endl;
		cin >> books[i].pages;
		cout << "Book price: =>" << endl;
		cin >> books[i].price;
		cout << "<===================================>" << endl;
		cout << "<=============Book added! ==========>" << endl;
		cout << "<===================================>" << endl;
	}
}

void ShowBook(Book *books, const int booksCount) {
	for (int i = 0; i < booksCount; i++) {
		books[i].ShowBookInfo();
	}
}


void SortByPrice(Book *books, int booksCount) {
	for (int i = 0; i < booksCount-1; i++) {
		for (int j = 0; j < booksCount-i-1; j++) {
			if (books[j].price > books[j + 1].price) {
				swap(books[j], books[j + 1]);
			}
		}
	}
}

void SortByPrice_(Book *books, const int booksCount) {
	for (int i = booksCount - 1; i >= 1; i--) {
		for (int j = 0; j < i; j++) {
			if (books[j].price > books[j + 1].price) {
				Book tmp;
				tmp = books[j];
				books[j] = books[j + 1];
				books[j + 1] = tmp;
			}
		}
	}
}

//================================================================================================================
/* Exerice 1 Описати структуру «Людина». Передбачити:
1. Заповнення масиву людей
2. Вивід інформації з сортуванням по прізвищу та імені
3. Вивід списку іменників місяця з вказанням дати народження
4. Зміна розміру масиву при додаванні та видаленнні записів //Пізніше зробимо
5. Пошук по прізвищу та імені
6. Редагування запису */

struct Man {
	string name;
	string surname;
	int dateOfBierthday;
	int monthOfBierthaday;
	int yearOfBierthday;
	string gender;

	void ShowManInfo()
	{
		cout << "********** PEOPLE INFO ************" << endl;
		cout << "Our client " << name << " " << surname << endl;
		cout << "Date of bierthday: " << dateOfBierthday << " " << monthOfBierthaday << " " << yearOfBierthday << endl;
		cout << "Man or woman: " << gender << endl;
	}
};

void ShowMan(Man *people, const int peopleCounter) {
	for (int i = 0; i < peopleCounter; i++) {
		people[i].ShowManInfo();
	}
}

//1. Заповнення масиву людей
void AddNewMan(Man *people, const int peopleCounter)
{
	for (int i = 0; i < peopleCounter; i++) {
		cout << "Add client number " << i + 1 << endl;
		cout << "Client's name: =>" << endl;
		cin >> people[i].name;
		cout << "Client's surname " << endl;
		cin >> people[i].surname;
		cout << "Date of birthday: " << endl;
		cin >> people[i].dateOfBierthday>>people[i].monthOfBierthaday>>people[i].yearOfBierthday;
		cout << "Man or woman: " << endl;
		cin >> people[i].gender;
		cout << "<===================================>" << endl;
		cout << "<=============CLIENT added! ==========>" << endl;
		cout << "<===================================>" << endl;
	}
}

//2. Сортуванням по прізвищу
void SortBySurname(Man *people, int peopleCounter) 
{
	for (int i = 0; i < peopleCounter - 1; i++)
	{
		for (int j = 0; j < peopleCounter - i - 1; j++)
		{
			if (people[j].surname > people[j + 1].surname)
			{
				swap(people[j], people[j + 1]);
			}
		}
	}
}

//2. Сортуванням по імені
void SortByName(Man *people, int peopleCounter)
{
	for (int i = 0; i < peopleCounter - 1; i++)
	{
		for (int j = 0; j < peopleCounter - i - 1; j++)
		{
			if (people[j].name > people[j + 1].name)
			{
				swap(people[j], people[j + 1]);
			}
		}
	}
}

//3. Вивід списку іменників місяця з вказанням дати народження

void ShowBirthday(Man *people, int peopleCounter)
{
	int month = 0;
	cout << "Enter the month in which search bierthdays: " << endl;
	cin >> month;
	for (int i = 0; i < peopleCounter; i++) {
		
		if (people[i].monthOfBierthaday == month)
		{
			people[i].ShowManInfo();
		}
	}
}


int main() {

	//int booksCount = 0;
	//cout << "Enter books count: " << endl;
	//cin >> booksCount;

	//Book *books = new Book[booksCount];
	//CreateBookCollection(books, booksCount);
	//ShowBook(books, booksCount);
	//cout << "*****************************************" << endl;
	//
	////Варіант Андрія - сортування;
	//SortByPrice(books, booksCount);
	//ShowBook(books, booksCount);

	//Варіант Слави - сортування;
	/*SortByPrice_(books, booksCount);
	ShowBook(books, booksCount);*/

	//==============================================================================

	/* Exerice 1 Описати структуру «Людина». Передбачити:
1. Заповнення масиву людей
2. Вивід інформації з сортуванням по прізвищу та імені
3. Вивід списку іменників місяця з вказанням дати народження
4. Зміна розміру масиву при додаванні та видаленнні записів //Пізніше зробимо
5. Пошук по прізвищу та імені
6. Редагування запису */

	int peopleCounter = 0;
	cout << "Enter how many people do You want to add? " << endl;
	cin >> peopleCounter;
	Man *people = new Man[peopleCounter];
	AddNewMan(people, peopleCounter);
	ShowMan(people, peopleCounter);
	cout << "||||||||||||||||||||||||||||||||||||||  Sorting by surname: " << endl;
	SortBySurname(people, peopleCounter);
	ShowMan(people, peopleCounter);
	cout << "||||||||||||||||||||||||||||||||||||||  Sorting by name: " << endl;
	SortByName(people, peopleCounter);
	ShowMan(people, peopleCounter);
	cout << "||||||||||||||||||||||||||||||||||||||  BIERTHDAYS OF MONTH: " << endl;
	ShowBirthday(people, peopleCounter);



	/*string name1 = "Bill";
	string name2 = "Boby";


	if (name1 > name2) {
		cout << name1 << endl;
	}
	else if (name1 < name2) {
		cout << name2 << endl;
	}
	else{
		cout << "=" <<endl;
	}*/


	system("pause");
	return 0;
}
