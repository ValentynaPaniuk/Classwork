# include <iostream>
# include <ctime>
using namespace std;


/*C++
Даний масив чисел.Написати функцію, яка сортує масив по зростанню або по спаданню, в залежності від третього параметра функції.Якщо він рівний 0, 
сортування йде по спаданню, якщо 1, тоді по зростанню.Перші 2 параметра функції - це масив і його розмір, третій параметр по замовчуванню рівний 1
*/

void MENU(bool type, int arr[], int const SIZE);

void FillArr(int arr[], const int SIZE, int start, int end);
void PrintArr(int arr[], const int SIZE);
void SortArr1(int arr[], const int SIZE);
void PrintSortArr1(int arr[], const int SIZE);
void SortArr2(int arr[], const int SIZE);
void PrintSortArr2(int arr[], const int SIZE);

int main()
{
	const int SIZE = 10;
	int arr[SIZE];
	int unsigned start = 0, end = 0;
	bool type = 1;

	cout << "Enter Start: " << endl;
	cin >> start;
	cout << "Enter End: " << endl;
	cin >> end;

	srand(unsigned(time(NULL)));

	
	FillArr(arr, SIZE, start, end);
	cout << "========    Arrive    ============" << endl;



	PrintArr(arr, SIZE);

	cout << "========    Arrive MIN for MAX   ============" << endl;
	SortArr1(arr, SIZE);
	PrintSortArr1(arr, SIZE);

	cout << "========    Arrive MAX for MIN   ============" << endl;
	SortArr2(arr, SIZE);
	PrintSortArr2(arr, SIZE);



	MENU(type, arr, SIZE);


	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

void MENU(bool type, int arr[], int const SIZE)
{
	cout << "Select the sort method:" << endl;
	cout << "1 - Min=>Max" << endl;
	cout << "0 - Max=>Min" << endl;
	cin >> type;
	if (type==true)
	{
		SortArr1(arr, SIZE);
		PrintSortArr1(arr, SIZE);

	}
	else if(type!=true)
	{
		SortArr2(arr, SIZE);
		PrintSortArr2(arr, SIZE);
	}

}



void FillArr(int arr[], const int SIZE, int start, int end)
{
	for (int i = 0; i < SIZE; i++)
	{
		
		arr[i] = rand() % end + start;
	}
}

void PrintArr(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "ARR  [" << i << "]  =  " << arr[i] << endl;
		
	}
}

void SortArr1(int arr[], const int SIZE)
{
	for (int i = SIZE - 1; i >= 1; i--)
	{
		for (int j = 0; j < i; j++)
		{	
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

}

void PrintSortArr1(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "ARR  [" << i << "]  =  " << arr[i] << endl;

	}
}


void SortArr2(int arr[], const int SIZE)
{
	for (int i = SIZE - 1; i >= 1; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

}

void PrintSortArr2(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "ARR  [" << i << "]  =  " << arr[i] << endl;

	}
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////