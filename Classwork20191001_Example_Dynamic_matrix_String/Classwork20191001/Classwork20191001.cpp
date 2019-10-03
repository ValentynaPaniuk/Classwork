# include <iostream>
# include <ctime>
using namespace std;

//void CreatArr(int **&arr, int row, int col) 
//{
//	arr = new int *[row];
//	for (int i = 0; i < row; i++)
//	{
//		arr[i] = new int [col];
//	}
//}
//
//void DeleteArr(int **arr, int row)
//{
//	for (int i = 0; i < row; i++)
//	{
//		delete arr[i];
//	}
//	delete[] arr;
//}
//
//void FillArr(int **&arr, int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			arr[i][j] = rand() % 10 + 1;
//		}
//	}
//}
//
//void PrintArr(int **&arr, int row, int col)
//{
//	cout << "================================================" << endl;
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			cout<< arr[i][j]<<"\t";
//		}
//		cout << endl;
//	}
//	cout << "================================================" << endl;
//}

int main()
{
	srand(unsigned(time(NULL)));

	/*int **matrix = NULL;
	int col = 0, row = 0;
	cout << "Enter row and col: " << endl;
	cin >> row >> col;

	CreatArr(matrix, row, col);

	FillArr(matrix, row, col);
	PrintArr(matrix, row, col);

	DeleteArr(matrix, row);
*/

/*1. Перевірка паролів. Уявіть, що ви розробляєте програмний пакет, який вимагає від користувачів введення власних паролів. Програмне забезпечення вимагає, щоб паролі користувачів відповідали наступним критеріям:
а. Пароль повинен бути не менше шести символів.
б. Пароль повинен містити принаймні одну велику і малу літери.
c. Пароль повинен мати принаймні одну цифру.
Напишіть програму, яка запитує пароль, а потім перевіряє, чи відповідає вона зазначеним критеріям. Якщо це не так, програма повинна відображати повідомлення, яке повідомляє користувачеві чому*/

	char password[255] = {};
	char true_password[] = { 'u','s','e','r','1','2','3','A','!'};
	cout << "Enter password: " << endl;
	cin >> password;
	bool exit = false;
	int counter_symbol = 0;
	int counter_capital_letter = 0;
	int counter_number = 0;
	int size_password = 0;
	int counter_lowercase_letter = 0;
	
		for (int i = 0; i < strlen(password); i++)
		{

			if (int(password[i]) >= 32 && int(password[i]) <= 47 || int(password[i]) >= 58 && int(password[i]) <= 64 || int(password[i]) >= 123 && int(password[i]) <= 127 && counter_symbol==1 )
			{
				counter_symbol++;
				if (counter_symbol == 0)
				{
					cout << "Password contains no characters " << endl;
					
				}
				else
				{
					cout << "Password have symbols " << endl;
					
				}
				
			}


		
			if (int(password[i]) >= 48 && int(password[i]) <= 57 && counter_number==1 && counter_number==1)
			{
				counter_number++;
				if (counter_number == 0)
				{
					cout << "Password contains no numbers " << endl;

				}
				else
				{
					cout << "Password have numbers  " << endl;
					
				}
				
			}



			if (int(password[i]) >= 65 && int(password[i]) <= 90 && counter_capital_letter == 1)
			{
				counter_capital_letter++;
				if (counter_capital_letter == 0)
				{
					cout << "Password contains no capital letters " << endl;
					
				}
				else
				{
					cout << "Password have capital letters " << endl;
					
				}
				
			}


			if (int(password[i]) >= 97 && int(password[i]) <= 122 && counter_lowercase_letter==1)
			{
				counter_lowercase_letter++;
				if (counter_lowercase_letter == 0)
				{
					cout << "Password contains no lowercase letter " << endl;
					
				}
				else
				{
					cout << "Password have lowercase letter " << endl;
					
				}
				
			}
					   

			if (strlen(password) > 6 && password[i] == true_password[i])
			{
				cout << "Password contains more than six characters " << endl;
					
			}
			else
			{
				cout << "Password is less than six characters long " << endl;
							}


		}
	
	
	while (!exit)
	{
		for (int i = 0; i < strlen(password); i++)
		{
			if (password[i] == true_password[i])
			{
				cout << "PASSWORD IS CORRECT" << endl;
				exit = true;
			}
			else
			{
				cout << "PASSWORD IS NOT CORRECT. TRY AGAIN" << endl;

			}

			
		}

	}
	
	

	

	
	
	
	   	
	
	

	system("pause");
	return 0;
}