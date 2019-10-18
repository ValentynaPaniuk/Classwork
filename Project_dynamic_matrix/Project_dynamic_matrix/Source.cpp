# include <iostream>
# include <ctime>

using namespace std;

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



// Чистка пам'яті
void Clean(int **&arr1, int &row1);
/*1. Функція створення динамічної матриці розміром row x col, де row та col - аргументи функції.
	Функція повертає адресу створеної матриці (або адреса матриці передається по ссилці).*/
void Create_matrix(int **&arr1, int &row1, int &col1);

//2. Функція заповнення матриці
void Fill_matrix(int **&arr1, int &row1, int &col1);

//3. Функція виводу матриці
void Print_matrix(int **&arr1, int &row1, int &col1);

//4. Функція доповнення матриці новим рядком
void AddLastRow(int **&arr1, int &row1, int &col1);

// 5. Функція видалення з матриці рядка за вказаним номером
void DelRow(int **&arr1, int &row1, int &col1);

//6. Функція вставки нового рядка за вказаним номером
void AddNewRow(int **&arr1, int &row1, int &col1);

// 7. Функція доповнення матриці новим стовпчиком
void AddLastCol(int **&arr1, int &row1, int &col1);

// 8. Функція видалення з матриці стовпця за вказаним номером
void DelCol(int **&arr1, int &row1, int &col1);

// 9. Функція вставки нового стовпця за вказаним номером
void AddNewCol(int **&arr1, int &row1, int &col1);

// Меню

void Menu(int **&arr1, int &row1, int &col1);




int main()
{
	srand(unsigned(time(NULL)));

	int col1 = 0, row1 = 0;
	cout << "Enter the number of rows of the matrix: " << endl;
	cin >> row1;
	cout << "Enter the number of colomns of the matrix: " << endl;
	cin >> col1;
	cout << "---------------------------------------------------------------------------" << endl;

	int **arr1 = new int *[row1];
	//1.
	Create_matrix(arr1, row1, col1);
	//2.
	Fill_matrix(arr1, row1, col1);
	//3.
	Print_matrix(arr1, row1, col1);

	cout << "---------------------------------------------------------------------------" << endl;

	Menu(arr1, row1, col1);



	Clean(arr1, row1);
	arr1 = nullptr;





	system("pause");
	return 0;
}
//------------------------------------------------------------------------------
// 1. Створення динамічної матриці
void Create_matrix(int **&arr1, int &row1, int &col1)
{
	for (int i = 0; i < row1; i++)
	{
		arr1[i] = new int[col1];
	}
}

//Чистка пам'яті матриці
void Clean(int **&arr1, int &row1)
{
	for (int i = 0; i < row1; i++)
	{
		delete[] arr1[i];
	}
	delete[] arr1;
}

//2. Функція заповнення матриці
void Fill_matrix(int **&arr1, int &row1, int &col1)
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
void Print_matrix(int **&arr1, int &row1, int &col1)
{
	cout << "*****************************************************" << endl;
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			cout << arr1[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "******************************************************" << endl;
}

//4. Функція доповнення матриці новим рядком
void AddLastRow(int **&arr1, int &row1, int &col1)
{
	int size = row1 + 1;

	cout << "SIZE: "<<size << endl;
	int **arr2 = new int*[size];
	Create_matrix(arr2, size, col1);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			if (i < row1)
			{
				arr2[i][j] = arr1[i][j];
			}
			else
			{
				arr2[i][j] = 0;
				
			}
			cout << arr2[i][j];
		}
		cout << endl;
	}

	Clean(arr1, row1);
	row1++;

	arr1 = arr2;
	cout << "===Before===" << endl;
	Print_matrix(arr1, row1, col1);
	cout << "===After===" << endl;
}

// 5. Функція видалення з матриці рядка за вказаним номером
void DelRow(int **&arr1, int &row1, int &col1)
{
	int index_del = 0;
	row1--;
	cout << "Enter row's index element delete: ";
	cin >> index_del;
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			if (i >= index_del)
			{
				arr1[i][j] = arr1[i + 1][j];
			}
		}
	}
}

//6. Функція вставки нового рядка за вказаним номером
void AddNewRow(int **&arr1, int &row1, int &col1)
{
	int number = 0;
	int size = row1 + 1;
	int **arr2 = new int *[size];
	Create_matrix(arr2, size, col1);
	cout << "Enter the number of row do You want to add: " << endl;
	cin >> number;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			if (i == number)
			{
				arr2[i][j] = 0;
			}
			else if (i < number)
			{
				arr2[i][j] = arr1[i][j];
			}
			else if (i > number)
			{
				arr2[i][j] = arr1[i - 1][j];
			}
		}
	}
	Clean(arr1, row1);
	row1++;
	arr1 = arr2;
}

// 7. Функція доповнення матриці новим стовпчиком
void AddLastCol(int **&arr1, int &row1, int &col1)
{
	int size = col1 + 1;
	int **arr2 = new int*[size];
	Create_matrix(arr2, row1, size);

	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (j < col1)
			{
				arr2[i][j] = arr1[i][j];
			}
			else
			{
				arr2[i][j] = 0;
			}
		}

	}

	Clean(arr1, row1);
	col1++;
	arr1 = arr2;

}

// 8. Функція видалення з матриці стовпця за вказаним номером
void DelCol(int **&arr1, int &row1, int &col1)
{
	int index_del = 0;
	col1--;
	cout << "Enter column's index element delete: ";
	cin >> index_del;
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			if (j >= index_del)
			{
				arr1[i][j] = arr1[i][j + 1];
			}
		}
	}
}

// 9. Функція вставки нового стовпця за вказаним номером
void AddNewCol(int **&arr1, int &row1, int &col1)
{
	int number = 0;
	int size = col1 + 1;
	int **arr2 = new int *[size];
	Create_matrix(arr2, size, col1);
	cout << "Enter the number of column do You want to add: " << endl;
	cin >> number;
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (j == number)
			{
				arr2[i][j] = 0;
			}
			else if (j < number)
			{
				arr2[i][j] = arr1[i][j];
			}
			else if (j > number)
			{
				arr2[i][j] = arr1[i][j - 1];
			}
		}
	}
	Clean(arr1, row1);
	row1++;
	arr1 = arr2;
}

void  Menu(int **&arr1, int &row1, int &col1)
{

	int choice = 0;
	bool exit = false;
	while (!exit)

	{
		cout << "What are You going to do with matrix:" << endl;
		cout << "1 - add last row:" << endl;
		cout << "2 - delete row:" << endl;
		cout << "3 - add new row:" << endl;
		cout << "4 - add last column:" << endl;
		cout << "5 - delete column:" << endl;
		cout << "6 - add new column:" << endl;
		cout << "0 - exit" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0:
		{
			cout << "EXIT. GOOD BUY, MY FRIEND. DINAMIX MATRIX - THE BEST!!!!!!!!!!!!!" << endl;
			exit = true;
			break;
		}
		case 1:
		{
			//4.
			cout << "ADD LAST ROW: " << endl;
			AddLastRow(arr1, row1, col1);
			Print_matrix(arr1, row1, col1);
			break;
		}
		case 2:
		{
			//5.
			cout << "DELETE ROW: " << endl;
			DelRow(arr1, row1, col1);
			Print_matrix(arr1, row1, col1);
			break;
		}
		case 3:
		{
			//6.
			cout << "ADD NEW ROW: " << endl;
			AddNewRow(arr1, row1, col1);
			Print_matrix(arr1, row1, col1);
			break;

		}
		case 4:
		{
			//7.
			cout << "ADD LAST COLUMN: " << endl;
			AddLastCol(arr1, row1, col1);
			Print_matrix(arr1, row1, col1);
			break;

		}

		case 5:
		{
			//8.
			cout << "DELETE COLUMN: " << endl;
			DelCol(arr1, row1, col1);
			Print_matrix(arr1, row1, col1);
			break;

		}
		case 6:
		{
			//9.
			AddNewCol(arr1, row1, col1);
			Print_matrix(arr1, row1, col1);
			break;

		}

		default:
			break;
		}


	}





}