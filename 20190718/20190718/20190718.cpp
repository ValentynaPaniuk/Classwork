# include <iostream>
# include <ctime>

using namespace std;

// Exercise 2 Function
//---функцію Fill(), яка заповнює одновимірний масив випадковими значеннями в діапазоні [-12..20]
void FILL(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++) 
	{
		arr[i] = rand() % 20 - 12;
	}


}
//---функцію Print(), яка виводить елементи масиву на екран.  
void PRINT(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "[" << i << "] =  " << arr[i] << endl;
	}


}

//-- - функцію, яка повертає кількість відємних елементів масиву

void MIN(int arr[], const int SIZE, int min)
{
	min = 0;
	
	for (int i = 0; i < SIZE; i++)
	{
		
		if (arr[i] < 0)
		{
				min++;
		}
		
	}
	cout << "Negative elements in the array: " << min << endl;
	

}

//-- - функцію для знаходження середнього арифметичного елементів масиву






//-- - функцію для знаходження максимального елемента масиву * /









///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*C++
1. Написати калькулятор, робота якого буде основана на функціях.
Введення цифр та вибір математичної операції виконати в діалоговому стилі (запитати у користувача, вивести меню).
У програмі передбачити уникнення помилок (ділення на нуль і т.д.). Фантазія та «дизайн» меню – ціниться та вітається!!!
Примітка! Кожна арифметична операція описується окремою функцією. Побудова самого меню також винесена в окрему функцію.  */

float  ADDITION()
{
	float a, b;
	cout << "Enter two numbers : " << endl;
	cin >> a >> b;
	return a+b;
}
float  SUBTRACT()
{
	float a, b;
	cin >> a >> b;
	return a - b;
}
float DIVISION()
{
	float a, b;
	cout << "Enter two numbers : " << endl;
	cin >> a >> b;
	
	if (b == 0)
	{
		cout << " You can not divide by zero" << endl;
		return 0;
		
	}
	else
	{
		return a / b;
	}
}
float MULTIPLICATE()
{
	float a, b;
	cout << "Enter two numbers : " << endl;
	cin >> a >> b;
	return a*b;
}

char MENU()
{
	cout << "_______________________________________________________________________________" << endl;
	
	{
		char choice = '0';
	
		cout << "ADDITION => + " << endl;
		cout << "SUBSTRACT => - " << endl;
		cout << "DEVISION => / " << endl;
		cout << "MULTIPLICATE => * " << endl;
		cout << "NULL => EXIT " << endl;
		cin >> choice;
		cout << "_______________________________________________________________________________" << endl;
		return choice;
	}
}

int main()
{
	srand(unsigned(time(NULL)));
	setlocale(LC_ALL, "ru");

	bool exit = false;
	float result;

	while (!exit)
	{
		char choice = MENU();
		switch (choice)
		{
		case '+':
		{

			result = ADDITION();
			cout << "ADDITION = " << result << endl;

			break;
		}
		case '-':
		{
			result = SUBTRACT();
			cout << "SUBSRTACT = " << result << endl;
			break;
		}
		case '/':
		{
			result = DIVISION();
			if (result != 0)
			{
				cout << "DIVISION = " << result << endl;
			}

			break;
		}
		case '*':
		{
			result = MULTIPLICATE();
			cout << "MULTIPLICATE = " << result << endl;
			break;
		}
		case '0':
		{

			cout << "EXIT" << endl;
			exit = true;
			break;
		}

		default:
		{	cout << "Wrong choise" << endl;
		break;
		}
		}

	}

	cout << "After wile result" << result << endl;

	cout << "______________________________________________________________________________________________________________________________" << endl;
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		/*2. Написати наступні функції, які в якості параметра приймають одновимірний масив і його розмірність. Перевірити роботу функції для одновимірного масиву довжини 10
	---функцію Fill(), яка заповнює одновимірний масив випадковими значеннями в діапазоні [-12..20]
	---функцію Print(), яка виводить елементи масиву на екран.
	---функцію, яка повертає кількість відємних елементів масиву
	---функцію для знаходження середнього арифметичного елементів масиву
	---функцію для знаходження максимального елемента масиву */




	const int SIZE = 10;
	int arr[SIZE];
	int min = 0;
	FILL(arr, SIZE);
	PRINT(arr, SIZE);
	MIN(arr, SIZE,min);


	


	system("pause");
	return 0;

}