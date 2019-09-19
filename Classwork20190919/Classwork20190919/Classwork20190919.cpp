# include <iostream>
# include <ctime>
using namespace std;


//2. Функція заповнення матриці
void Fill_matrix(int &row1, int &col1, int **arr1)
{
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			arr1[i][j] = rand() % 10 + 1;
		}
	}
}

//3. Функція виводу матриці
void Print_matrix(int &row1, int &col1, int **arr1)
{
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			cout<<arr1[i][j]<<"\t";
		}
		cout << endl;
	}
	cout << "*****************************************************************" << endl;
}

//4. Функція доповнення матриці новим рядком

void AddNewRow(int **arr1, int &row1, int &col1)
{
	int k = 1;
	int **arr2 = new int*[row1 + k];

	for (int i = 0; i < row1 + k; i++)
	{
		arr2[i] = new int[col1];
	}

	for (int i = 0; i < row1 + k; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			if (i < row1)
			{
				arr2[i][j] = arr1[i][j];
			}
			else
			{
				arr2[i][j] = k;
			}
			cout << arr2[i][j] << "\t";
		}
		cout << endl;
	}

	for (int i = 0; i < row1; i++)
	{
		delete[] arr2[i];
	}

	delete[] arr2;
}

// Функція видалення з матриці рядка за вказаним номером

void DelRow(int **arr1, int &row1, int &col1)
{
	int del = 0;
	cout << "Enter which row to delete?" << endl;
	cin >> del;
	int **arr2 = new int *[row1 - 1];

	for (int i = 0; i < row1 - 1; i++)
	{
		arr2[i] = new int[col1];
	}



}


int main()
{

	srand(unsigned(time(NULL)));


	int col, row;
	cout << "Enter matrix size: [row fierst] " << endl;
	cin >> row >> col;
// Вказівник на вказівники
	int **arr = new int *[row];
//Вказівник на новий рядок
	for (int i = 0; i < row; i++) {
		{
			arr[i] = new int[col];
		}
	}
//Заповнили матрицю даними
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = rand() % 10 + 1;
		}
	}
	//Вивели матрицю на екран
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << arr[i][j] <<"\t";
		}
		cout << endl;
	}
	// Видалили вказівник на колонки

	for (int i = 0; i < row; i++) {
	
		delete[] arr[i];
	}
	
	// Видалили вказівник на вказівники

	delete[] arr;
	arr = nullptr;

	//====================================================================================================================================================================================
	/*C++
Написати функції для роботи з динамічною матрицею:
1. Функція створення динамічної матриці розміром row x col, де row та col - аргументи функції. Функція повертає адресу створеної матриці (або адреса матриці передається по ссилці).
2. Функція заповнення матриці
3. Функція виводу матриці
4. Функція доповнення матриці новим рядком
5. Функція видалення з матриці рядка за вказаним номером
6. Функція вставки нового рядка за вказаним номером
7. Функція доповнення матриці новим стовпчиком
8. Функція видалення з матриці стовпця за вказаним номером
9. Функція вставки нового стовпця за вказаним номером */


	//1. Функція створення динамічної матриці розміром row x col, де row та col - аргументи функції. Функція повертає адресу створеної матриці (або адреса матриці передається по ссилці).

	int col1=0, row1=0;
	cout << "Enter the number of rows of the matrix: " << endl;
	cin >> row1;
	cout<< "Enter the number of colomns of the matrix: " << endl;
	cin >> col1;
	cout <<"---------------------------------------------------------------------------"<< endl;

	int **arr1 = new int *[row1];

	for (int i = 0; i < row1; i++)
	{
		arr1[i] = new int[col1];
	}
	

	//========================================================================================
	Fill_matrix(row1, col1, arr1);
	Print_matrix(row1, col1, arr1);
	AddNewRow(arr1, row1, col1);


//====================================================================================================

	for (int i = 0; i < row1; i++)
	{
		delete[] arr1[i];
	}
	delete[] arr1;
	arr1 = nullptr;


	system("pause");
	return 0;
}