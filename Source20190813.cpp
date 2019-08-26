# include <iostream>
# include <ctime>
using namespace std;

/*C++ 
Даний масив випадкових чисел в діапазоні від -20 до +20. Необхідно знайти позиції крайніх відємних елементів (самого лівого відємного елемента та самого правого відємного елемента) 
і відсортувати елементи, які знаходяться між ними.  */

void FillArr1(int arr1[], const int SIZE);
void PrintArr1(int arr1[], const int SIZE);
void MINLEFT(int arr1[], const int SIZE, bool flag, int x);
void MINRIGHT(int arr1[], const int SIZE, bool flag, int y);




int main()
{
	int const SIZE = 10;
	int arr1[SIZE];
	bool flag = true;
	int x = 0, y = 0;

	FillArr1(arr1, SIZE);
	PrintArr1(arr1, SIZE);


	MINLEFT(arr1, SIZE, flag, x);
	cout << endl;

	MINRIGHT(arr1, SIZE, flag, y);
	cout << endl;
	

	



	system("pause");
	return 0;
}



void FillArr1(int arr1[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr1[i] = rand() % 40-20;
	}
}



void PrintArr1(int arr1[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout<<"Arr1  ["<<i<<"]   =    "<<arr1[i]<<endl;
	}
}


void MINLEFT(int arr1[], const int SIZE, bool flag, int x)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (flag)
		{
			if (arr1[i] < 0)
			{
				cout << "MIN LEFT i= " << i << " Number =" << arr1[i] << endl;
				x = i;

				flag = false;
			}
		}
	}


}



void MINRIGHT(int arr1[], const int SIZE, bool flag, int y)
{
	for (int i = SIZE-1; i >0; i--)
	{
		if (flag)
		{
			if (arr1[i] < 0)
			{
				cout << "MIN RIGHT i= " << i << " Number =" << arr1[i] << endl;
				y = i;
				flag = false;
			}
		}
			
	}
}

