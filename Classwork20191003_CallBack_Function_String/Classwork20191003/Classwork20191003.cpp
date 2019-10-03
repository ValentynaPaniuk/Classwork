# include <iostream>
# include <ctime>
# include <string>

using namespace std;

//Без аргументів в функції
//======================================
//string address()
//{
//	return "Ukraine. Rivne";
//}
//
//string person()
//{
//	return "Vill Smit";
//}
//
//void ShowInfo(string (*func)())
//{
//	cout << func() << endl;
//}
//===========================================

//////////////////////////// З аргументами  функції не працюють!!!!!!!!!!!!!!!!!!!
//////////////////////////string address(string myaddres)
//////////////////////////{
//////////////////////////	return "Ukraine. Rivne";
//////////////////////////}
//////////////////////////
//////////////////////////string person(string name)
//////////////////////////{
//////////////////////////
//////////////////////////	return "Vill Smit";
//////////////////////////}
//////////////////////////
//////////////////////////void ShowInfo(string (*func)(string value))
//////////////////////////{
//////////////////////////	cout << func(value) << endl;
//////////////////////////
//////////////////////////}

//=======================================================================================================================
/* 1. Реалізувати калькулятор з використання вказівників на функцію.*/

double addition();
double subtractiob();
double multiplication();
double division();
void result(double(*Func)());

//==================================================================================================================================================

// 2. Дана непустая строка.Вывести коды ее первого и последнего символа.


// 3. Дана строка.Вывести строку, содержащую те же символы, но распо -ложенные в обратном порядке.
// 4. Дана строка.Подсчитать количество содержащихся в ней цифр.


int main()
{
	/*ShowInfo(address);
	ShowInfo(person);*/


	//================================================
	//////////////////////////// З аргументами  функції не працюють!!!!!!!!!!!!!!!!!!!
	///////////////////////////*ShowInfo ((address)(myaddress));
	/////////////////////////////ShowInfo ((person)(name)); */

	//=================================================================================================================================================
/* 1.Реалізувати калькулятор з використання вказівників на функцію.*/
	cout << "\t Exercise 1: Realizuvati calculator from vikoristannya vkazіvnikіv on functions." << endl;
	char action = ' ';
	bool exit = 0;
	cout << "Enter action: +, -, /, *, 0(exit): " << endl;
	while (!exit)
	{
		cin >> action;
		switch (action)
		{
		case '+':
		{

			result(addition);
			break;
		}
		case '-':
		{

			result(subtractiob);
			break;
		}
		case '*':
		{
			result(multiplication);
			break;
		}
		case '/':
		{

			result(division);
			break;
		}
		case '0':
			exit = true;
		default:
			break;
		}
	}
	//=====================================================================================================================================================
	// 2. Дана непустая строка.Вывести коды ее первого и последнего символа.
	char word[255] = {};
	cout << "\t Exercise 2: A non - empty string is given.Print the codes of its first and last character." << endl;
	cout << "Enter word: " << endl;
	cin >> word;
	for (int i = 0; i < strlen(word); i++)
	{
		if (i == 0)
		{
			cout << "The fierst letter of the word: " << word[i] << endl;
		}
		else if (i == (strlen(word)-1))
		{
			cout << "The last letter of the word: " << word[i] << endl;
		}
	}

	// 3. Дана строка.Вывести строку, содержащую те же символы, но расположенные в обратном порядке.

	char sentence[255] = {};
	cout << "\t Exercise 3: Given a string.Print a string containing the same characters but in reverse order." << endl;
	cout << "Enter sentence: " << endl;
	cin >> sentence;

	for (int i = (strlen(sentence)-1); i >=0; i--)
	{
		cout << sentence[i];
	}
	cout << endl;

	// 4. Дана строка.Подсчитать количество содержащихся в ней цифр.

	char text[255] = {};
	int counter = 0;
	cout << "\t Exercise 4: Given a string. Count the number of digits contained in it." << endl;
	cout << "Enter text: " << endl;
	cin >> text;
	for (int i = 0; i < strlen(text); i++)
	{
		if (int (text[i]) >= 48 && int (text[i]) <= 57)
		{
			counter++;
		}
	}
	cout << "The number of digits are: "<< counter << endl;

	// 5. Дана строка, изображающая целое положительное число. Вывести сумму цифр этого числа.
	char number[255] = {};
	int summa = 0;
	cout << "\t Exercise 5: Given a string representing a positive integer. Print the sum of the digits of this number." << endl;
	cout << "Enter number" << endl;
	cin >> number;
	
	for (int i = 0; i < strlen(number); i++)
	{
		if (int (number[i]) >= 48 && int (number[i]) <= 57)
		{
			summa += (int(number[i]) - 48);
		}
		
	}
	cout << "Summa number = " <<summa<< endl;


	/* 6. Дана строка, состоящая  слов, набранных заглавными буквами и разделенных "_'  (одним или несколькими). 
		  Найти количеcтво слов, которые начинаются и заканчиваются одной и той же буквой.*/




	system("pause");
	return 0;
}


/* Реалізувати калькулятор з використання вказівників на функцію.*/
	double addition()
	{
		int a = 0, b = 0;
		cout << "Enter number 1: " << endl;
		cin >> a;
		cout << "Enter number 2: " << endl;
		cin >> b;
		cout << "Result =>";
		return a + b;
	}
	double subtractiob()
	{
		int a = 0, b = 0;
		cout << "Enter number 1: " << endl;
		cin >> a;
		cout << "Enter number 2: " << endl;
		cin >> b;
		cout << "Result =>";
		return a - b;
	}
	double multiplication()
	{
		int a = 0, b = 0;
		cout << "Enter number 1: " << endl;
		cin >> a;
		cout << "Enter number 2: " << endl;
		cin >> b;
		cout << "Result =>";
		return a * b;
	}
	double division()
	{
		int a = 0, b = 0;
		cout << "Enter number 1: " << endl;
		cin >> a;
		cout << "Enter number 2: " << endl;
		cin >> b;
		cout << "Result =>";
		return a / b;
	}
	void result(double(*Func)())
	{
		
		cout << Func() << endl;
	}

