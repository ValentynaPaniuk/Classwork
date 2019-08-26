# include <iostream>
# include <ctime>
using namespace std;
int main()
{
	srand(unsigned(time(NULL)));
	setlocale(LC_ALL, "ru");

	/*
	// Матриця. Багаторівневі масиви
	const int ROW = 10;
	const int COL = 10;
	int arr[ROW][COL];

	// Заповнення багаторівневого масиву
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			arr[i][j] = rand() % 20 + 1;
		}
		cout << endl;
	}


	//******************************************************************
	// Вивід багаторівневого масиву
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{

			cout << "arr[" << i << "] " << "[" << j << "]= " << arr[i][j] << endl;
		}
		cout << endl;
	}

	//***************************************************************
	

	/*Вивести на екран таблицю множення (від 1 до 10) в відформатованому вигляді. 
	Орієнтовний вигляд таблиці повинен бути наступний:*/
	/*
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			arr[i][j] = i * j;
		}

		cout << endl;
	}

	//*********************************


	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout << i << "*" << j << "= " << arr[i][j] << endl;
		}

		cout << endl;
	}

	cout << "==========================================================" << endl;
	
	//*********************************************************************************************************************

	/*1. Даний двухвимірний масив розмірністю 5X4. Заповніть його випадковими числами із інтервалу -20.. 20: 
a) Виведіть масив на екран та знайдіть кількість елементів, значення яких рівне нулю.
b) знайдіть середнє арифметичне значення кожного рядка. 
c) Вивести на екран елементи вказаного користувачем рядка або вказаного користувачем стовпця
d) Поміняти місцями перший рядок з останнім, другий з передостаннім і т.д. (реверс матриці по рядках). Вивести новоутворену матрицю */

/*
	const int row = 5;
	const int col = 4;
	int x = 0, y=0;
	int ARR[row][col];
	int ARR1[row][col];
	int counter = 0, average=0, suma=0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			ARR[i][j] = rand() % 20 - 1;
		}
		cout << endl;

	}

	// Виведіть масив на екран та знайдіть кількість елементів, значення яких рівне нулю.
	cout << "======================================================" << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "arr[" << i << "] " << "[" << j << "]= " << ARR[i][j] << endl;

			if (ARR[i][j] == 0)
			{
				counter++;
			}
		}
		cout << endl;

	}

	cout << "COUNTER= " <<counter << endl;

	//знайдіть середнє арифметичне значення кожного рядка.
	cout << "======================================================" << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "arr[" << i << "] " << "[" << j << "]= " << ARR[i][j] << endl;
			suma += ARR[i][j];
			average = suma / col;
					
		}
		
		cout << endl;
		cout << "SUMA" << suma << endl;
		cout << "AVERAGE" << average << endl;
		suma = 0;

	}
	
	//Вивести на екран елементи вказаного користувачем рядка або вказаного користувачем стовпця
	cout << "======================================================" << endl;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << ARR[i][j] << "    ";
		}

		cout << endl;
	}

	cout << "Enter a row (from 0 to 4) or column (from 0 to 3)" << endl;
	cin >> x;
	cout << "1 - ROW,   2- COLUMN" << endl;
	cin >> y;
	if (y == 1)
	{
	cout << "OUR ROW" << endl;
	
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (x == i)
				{
					cout<< ARR[i][j] << "  ";
				}
			}
			cout << endl;
		}
	}

	if (y == 2)
	{
	cout << "OUR COLUMN" << endl;
	
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (x == j)
				{
					cout << ARR[i][j] << endl;
				}
			}
			cout << endl;
		}
	}
	

	cout << endl;
	cout << "======================================================" << endl;
//*************************************************************************************
	cout << endl;
	/*Поміняти місцями перший рядок з останнім, другий з передостаннім і т.д. (реверс матриці по рядках). Вивести новоутворену матрицю */
	
/*cout << "$$$$$$$$$$$$$$$$" << endl;
	 for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << ARR[i][j] << "    ";
		}
		cout << endl;
	}
	 
	cout << "$$$$$$$$$$$$$$$$" << endl;

	int rowi=row, colj=0;

	for (int i = 0; i<row;  i++)
	{
		
		for (int j = 0; j < col; j++)
		{
			ARR1[i][j] = ARR[rowi-1][colj];
			colj++;
						
		}
		rowi--;
		colj = 0;
			
	}
	
	
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout <<"["<<i<<"]   ["<<j<<"] = "<< ARR1[i][j]<<endl;
		}

		cout << endl;
		
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << ARR1[i][j] <<"  ";
		}

		cout << endl;

	}
	cout << "$$$$$$$$$$$$$$$$" << endl;
	cout << endl;

	*/

	/*1.Дана матриця розмірністю 10х10, заповнена випадковими числами в діапазоні [1..50]. 
Знайти мінімальний елемент матриці і поміняти місцями рядки матриці так щоб мінімальний елемент опинився у верхньому рядку*/


	const int row1 = 10, col1 = 10;
	int ARR2[row1][col1];
	int index = 0, max=0;
	

		for (int i = 0; i < row1; i++)
		{
			for (int j = 0; j < col1; j++)
			{
				ARR2[i][j] = rand() % 50 + 1;
			}
		}


	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			cout<<ARR2[i][j]<<"   ";
		}
		cout << endl;
	}

	cout << endl;
	cout << endl;
	int i1 = 0, j1 = 0;
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			
			max = ARR2[i1][j1];
			if (ARR2[i1][j1] > ARR2[i1][j1 + 1]) 
			{
				max = ARR2[i1][j1 + 1];
				cout << "MAX" << max << endl;
			
			}
			

		}
		cout << endl;
		
	}
	
	cout << endl;
	
	

	




/*2.Дана матриця розмірністю 10х10, заповнена випадковими числами в діапазоні [-20..20]. Знайти максимальний елемент матриці і
 поміняти місцями ще й стовпці так, щоб цей елемент опинився у крайньому лівому стовпці*/

	system("pause");
	return 0;
}