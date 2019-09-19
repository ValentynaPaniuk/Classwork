#include <iostream>
#include <ctime>
using namespace std;

template <typename T1>
void Fill(T1 arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10 + 20;
	}
	cout << endl;
}

template <typename T1>
void Print(T1 arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout<<arr[i]<<"   ";
	}
	cout << endl;
}

template <typename T1>
void Association(T1 arr1[], T1 arr2[], T1 arr3[], const int SIZE1, const int SIZE2, const int SIZE3 )
{
	int index = 0;
	for (int i = 0; i <SIZE3; i++)
	{
		if (i < SIZE1)
		{
			arr3[i] = arr1[i];
		}
		else
		{
			arr3[i] = arr2[index];
			index++;
		}
	}
	cout << endl;
}

template <typename T1>
void CommonElements(T1 arr1[], T1 arr2[], const int SIZE1, const int SIZE2, int counter, bool flag)
{
	
	{

		for (int i = 0; i < SIZE1; i++)
		{
			for (int j = 0; j < SIZE1; j++)
			{
				if (arr1[i] == arr2[j])
				{
					
					{
						counter++;
						
						
					}
								
				}
			}

		}
	}
	cout << "  Numbers of elements: " << counter << endl;

}



int main()

{	srand(unsigned(time(NULL)));

const int SIZE1 = 5;
const int SIZE2 = 5;
const int SIZE3 = SIZE1 + SIZE2;

int arr1[SIZE1];
int arr2[SIZE2];
int arr3[SIZE3];
int counter = 0;
int *pcounter = &counter;

bool flag = true;



Fill(arr1, SIZE1);
Print(arr1, SIZE1);
Fill(arr2, SIZE2);
Print(arr2, SIZE2);
Association(arr1, arr2, arr3, SIZE1, SIZE2, SIZE3);
Print(arr3, SIZE3);
CommonElements(arr1, arr2, SIZE1, SIZE2, counter, flag);




	system("pause");
	return 0;

}