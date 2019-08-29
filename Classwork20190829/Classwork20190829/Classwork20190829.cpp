# include <iostream>
# include <ctime>

using namespace std;


void Exercise_with_number( int *pX , int *pY, int *pZ)
{
	cout << "Product: " << (*pX) * (*pY) * (*pZ) << endl;
	cout << "Average: " << (*pX + *pY + *pZ) / 3 << endl;



	if ((*pX) > (*pY) && (*pX) > (*pZ))
	{
		cout << "MAX is : " << *pX << endl;
	}
	else if ((*pX) < (*pY) && (*pY) > (*pZ))
	{
		cout << "MAX is : " << *pY << endl;
	}
	else if ((*pX) < (*pZ) && (*pY) < (*pZ))
	{
		cout << "MAX is : " << *pZ << endl;
	}


}



//************************************************************************
void Fill(int arr1[], int const SIZE);
void Print(int arr1[], int const SIZE);
void Print_obert(int arr1[], int const SIZE);
void Sum(int arr1[], int const SIZE, int *sum);



int main()

{

	//*****************************************************************************************
	cout << "Exercise 1" << endl;
	int a = 5;
	cout << a << "=" << &a << endl;

	int *pA = &a;// Вказівник
	cout << "*pA = " << *pA /*Оператор розіменування (доступаємося до значення)*/ << " pA Address = " << pA /*Адреса*/ << endl;

	*pA = 800;
	cout << "*pA = " << *pA /*Оператор розіменування*/ << "pA  Address = " << pA /*Адреса*/ << endl;
	cout << "*A = " << a << "A Address = " << a << endl;


	int b;
	b = a;
	cout << "B= " << b << " b address = " << &b << endl;
	cout << endl;
	//*****************************************************************************************
	cout << "Exercise 2" << endl;
	const int SIZE = 5;
	int arr[SIZE] = { 2,3,5,8,1 };
	int *newArr = arr;

	for (int i = 0; i < SIZE; i++)
	{
		cout << "arr[" << i << "] = " << newArr[i] << endl;
	}
	//******************************************************************************************

	/*Дано три числа. Оголосити вказівники на ці числа.
	Отримати добуток трьох заданих чисел, середє арифметичне,
	найменше з них, користуючись непрямим доступом до чисел (через вказівники).  */

	int x, y, z;
	cin >> x >> y >> z;
	int *pX = &x;
	int *pY = &y;
	int *pZ = &z;

	cout << "Product: " << (*pX) * (*pY) * (*pZ) << endl;
	cout << "Average: " << (*pX + *pY + *pZ) / 3 << endl;


	if ((*pX) > (*pY) && (*pX) > (*pZ))
	{
		cout << "MAX is : " << *pX << endl;
	}
	else if ((*pX) < (*pY) && (*pY) > (*pZ))
	{
		cout << "MAX is : " << *pY << endl;
	}
	else if ((*pX) < (*pZ) && (*pY) < (*pZ))
	{
		cout << "MAX is : " << *pZ << endl;
	}

	//****************************************************************************

	cout << "================================================================" << endl;

	Exercise_with_number(pX ,pY, pZ);

	cout << "================================================================" << endl;

	

	/*Дано цілочисельний одновимірний масив. Заповнити його, 
	вивести на екран у прямому та зворотньому порядку та порахувати суму елементів з використанням вказівників. */

	int arr1[SIZE];
	int sum = 0;
	int *pSum = &sum;

	Fill(arr1, SIZE);
	Print(arr1, SIZE);
	cout << "=====================================================================" << endl;
	Print_obert(arr1, SIZE);
	Sum(arr1, SIZE, pSum);
	cout << "SUMMA : " << *pSum << endl;
	
	
	/*Дано одновимірний масив. Знайти найбільше та найменше значення у масиві та поміняти їх у масиві місцями. 
	Вивести перетворений масив на екран. */


	system("pause");
	return 0;
}


void Fill(int arr1[], int const SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr1[i] = rand() % 5 + 10;
	}
}

void Print(int arr1[], int const SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "arr1 [" << i << "]  = " << arr1[i] << endl;
	}
}



void Print_obert(int arr1[], int const SIZE)
{
	for (int i = SIZE-1; i >=0; i--)
	{
		cout << "arr1 [" << i << "]  = " << arr1[i] << endl;
	}

}

void Sum(int arr1[], int const SIZE, int *sum)
{
	for (int i = 1; i <SIZE; i++)
	{
		(*sum) += arr1[i];
	}

	
}


