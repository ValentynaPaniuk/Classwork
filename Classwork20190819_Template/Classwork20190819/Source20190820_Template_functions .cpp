# include <iostream>
# include <ctime>

using namespace std;


const int ROW3 = 3, COLL4=4;
const int ROW5 = 5, COLL7=7;

void Fill_rand(int arr[], int const SIZE);
void Fill_keyboard(double arr[], int const SIZE);

template <typename T1>
void Print(T1 arr[], int const SIZE);

template <typename T1>
void Min(T1 arr[], const int SIZE, int k);

template <typename T1>
T1 Average(T1 arr[], const int SIZE, double sum);


template <typename T1>
T1 Max(T1 arr[], const int SIZE);



void Fill(int arr[ROW3][COLL4]);
void Print(int arr[ROW3][COLL4]);

void Fill(int arr[ROW5][COLL7]);
void Print(int arr[ROW5][COLL7]);

template <typename T>
T Sum(T a, T b);




int main()
{
	srand(unsigned(time(NULL)));
	//cout << "Summa negativ elements:  " << Sum(5, 8) << endl;

	
	int const SIZE10 = 10;
	int arr10[SIZE10];
	int const SIZE7 = 7;
	double arr7[SIZE7];
	int k = 0;
	double sum = 0;
	
	int arr[ROW3][COLL4];
	int arr1[ROW5][COLL7];
	
	

	cout << "=====   ARRIVE 10  ==========" << endl;
	Fill_rand(arr10, SIZE10);
	Print(arr10, SIZE10);
	Min(arr10, SIZE10, k);
	Average(arr10, SIZE10, sum);
	int max10 = Max(arr10, SIZE10);

	cout << "=====   ARRIVE 7  ==========" << endl;
	Fill_keyboard(arr7, SIZE7);
	Print(arr7, SIZE7);
	Min(arr7, SIZE7, k);
	Average(arr7, SIZE7, sum);
	double max7=Max(arr7, SIZE7);


	cout << "=====   ARRIVE 3*4  ==========" << endl;
	Fill(arr);
	Print(arr);
	cout << "=====   ARRIVE 5*7  ==========" << endl;
	Fill(arr1);
	Print(arr1);


	system("pause");
	return 0;
}

template <typename T>
T Sum(T a, T b) 
{
	return a + b;
}

void Fill_rand(int arr[], int const SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 20 - 12;
	}

}

void Fill_keyboard(double arr[], int const SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cin>>arr[i];
	}
}

template <typename T1>
void Print (T1 arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "arr [" << i << "]  =" << arr[i] << endl;
	}
}

template <typename T1>
void Min(T1 arr[], const int SIZE, int k)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < 0)
		{
			k++;
		}
	}
	cout << "The number of negative array elements: "<<k << endl;
}

template <typename T1>
T1 Average(T1 arr[], const int SIZE, double sum )
{
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
		
	}
	
	cout << "Average: " << sum / SIZE << endl;
	return sum / SIZE;
}

template <typename T1>
T1 Max(T1 arr[], const int SIZE)
{
	T1 max = arr[0];
	
	for (int i = 1; i < SIZE; i++)
	{
		if (max < arr[i + 1])
		{
			max = arr[i + 1];
		}
	}
	cout << "Max element: "<<max<<endl;
	return max;
}


void Fill(int arr[ROW3][COLL4])
{
	for (int i = 0; i < ROW3; i++)
	{
		for (int j = 0; j < COLL4; j++)
		{
			arr[i][j] = rand() % 10 - 5;
		}
		cout << endl;
	}
}

void Print(int arr[ROW3][COLL4])
{
	for (int i = 0; i < ROW3; i++)
	{
		for (int j = 0; j < COLL4; j++)
		{
			cout<<"arr ["<<i<<"]"<<"["<<j<<"]  =   "<<arr[i][j]<<"\t";
		}
		cout << endl;
	}
}

void Fill(int arr1[ROW5][COLL7])
{
	for (int i = 0; i < ROW5; i++)
	{
		for (int j = 0; j < COLL7; j++)
		{
			arr1[i][j] = rand() % 10 - 5;
		}
		cout << endl;
	}
}

void Print(int arr1[ROW5][COLL7])
{
	for (int i = 0; i < ROW5; i++)
	{
		for (int j = 0; j < COLL7; j++)
		{
			cout << "arr [" << i << "]" << "[" << j << "]  =   " << arr1[i][j] << "\t";
		}
		cout << endl;
	}
}