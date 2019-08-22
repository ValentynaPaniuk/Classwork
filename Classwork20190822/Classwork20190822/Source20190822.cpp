# include <iostream>
# include <ctime>

using namespace std;

//**********************************************************
//Написати функцію, яка рекурсивно обчислює суму чисел в переданому діапазоні  
int SUM(int a, int b, int sum)
{
	
	sum += a;
	
	if (a==b)
	{
		return sum;
	}
	a++;
SUM(a, b, sum);
}
//***********************************************************

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

//Написати рекурсивну функцію, яка отримує масив і повертає найбільший його елемент.
int MAX(int arr[], int SIZE, int max, int i)
{
	
	if (arr[i] > max)
	{
		max = arr[i];
	}
	if (i == SIZE)
	{
		return max;
	}
	i++;
	MAX(arr, SIZE, max, i);
	
}


int SUM_Char(char arr[], int const SIZE, int sum_char, int k)
{
	if (arr[k] == '1' || arr[k] == '2' || arr[k] == '3' || arr[k] == '4' || arr[k] == '5' || arr[k] == '6' || arr[k] == '7' || arr[k] == '8' || arr[k] == '9')
	{
		sum_char++;
		
	}

	if (k == SIZE)
	{
		return sum_char;
	}
	k++;
	SUM_Char(arr, SIZE, sum_char, k);
}


int main()
{
	srand(unsigned(time(NULL)));
	//*************************************************************************************
	int sum = 0, a=3, b=5, sum1=0;
	sum = SUM(a, b, sum);
	cout << "SUMMA ELEMENTS: " << sum<<endl;
	int c = 0, d = 0;
	cout << "Enter two numbers: " << endl;
	cin >> c;
	cin >> d;
	cout<<"c+d= "<<SUM(c, d, sum1)<<endl;
	//***************************************************************************************

	int max = 0;
	int const SIZE = 10;
	int arr[SIZE];
	int i = 0;

	FILL(arr, SIZE);
	PRINT(arr, SIZE);

	cout << "MAX = >  " << MAX(arr, SIZE, max, i) << endl;
	//*************************************************************************************

	const int SIZE6 = 6;
	char arr_char[SIZE];
	int sum_char = 0;
	int k = 0;

	cin >> arr_char;
	cout << "SUMMA CHAR: " << SUM_Char(arr_char, SIZE6, sum_char, k)<<endl;

	system("pause");
	return 0;
}