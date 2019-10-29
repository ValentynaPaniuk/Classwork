# include <iostream>
# include <ctime>
# include <string>
# include <fstream> // include - директива препроцесора

using namespace std;

int main()
{
	srand(unsigned(time(NULL)));

	ofstream writeFile; //Створення об'єкту writeFile класу  ofstream 
	string path = "db.txt"; //Змінна path для назви файлу

	//==================== Write  to file=================
	//writeFile.open(path); //Створює і відкриваємо файл path - перезаписує той-же файл
	writeFile.open(path, ofstream::app); // метод open параметр шлях path другий параметр app

	if (!writeFile.is_open()) 
	{
		cout << "Can't open file" << endl; //Вивести на екран
	}
	else 
	{
		writeFile << "Hello there" << endl; // ЗЩаписати в файл
	}
		writeFile.close();
	//==================== Write  to file=================


	//==================== Read  from file=================
		ifstream readFile;
		readFile.open(path);

		/*if (!readFile.is_open()) {
			cout << "Can't open file!" << endl;
		}
		else {
			cout << "Opened" << endl;
			char data;
			while (readFile.get(data)) {
				cout << data << endl;
			}
		}*/
		//string arr[6];
		//int i = 0;

		//string data;
		//while (!readFile.eof()) {
		//	/*data = "";
		//	readFile >> data;*/
		//	getline(readFile, data);
		//	arr[i] = data;
		//	cout << data << endl;
		//	i++;
		//}
		//readFile.close();
		////==================== Read  from file=================
		//cout << "data from arr ===>>>>" << endl;
		//for (int i = 0; i < 25; i++) {
		//	cout << arr[i] << endl;
		//}

		//cout << "arr[0] = " << arr[0] << endl;
		//cout << "After ===>>> " << endl;

		//arr[0] = "Hello World! Hello Slavik!";
		//cout << "arr[0] = " << arr[0] << endl;

		//===================================================================================================

		/*Дано текстовий файл з .cpp програмою. 
		Видалити з файлу однорядкові коментарі(утворити новий файл без коментарів). */
		cout<<"Exercise 1: " << endl;
		ifstream myFile;
		string line = "Exersice1/database.txt";
		myFile.open(line);
		if (!myFile.is_open())
		{
			cout << "Can't open file! " << endl;
		}
		else 
		{
			cout << "Opened!" << endl;
		}

		string arr1[10];
		string data1;
		int SIZE = 0;
		for (int i = 0; i<10; i++)
		{
		
			myFile >> data1;
			cout << data1 << endl;
			getline(myFile, data1);
			arr1[i] = data1;
			SIZE++;
		}
		myFile.close();
		//=============================================================

		cout << SIZE<<endl;
		ofstream newFile;
		string newLine= "Exersice1/database1.txt";
		string text1;
		newFile.open(newLine, ofstream::app);

		if (!newFile.is_open()) {
			cout << "Can't open file!" << endl;
		}
		else 
		{
			cout << "Open newline" << endl;
		}

		

	
	system("pause");
	return 0;
}