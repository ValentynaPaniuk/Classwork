# include <iostream>
# include <ctime>
using namespace std;
int main()
{
	srand(unsigned(time(NULL)));
	setlocale(LC_ALL, "ru");

	const int COL = 5;
	const int ROW = 4;
	int ARR[ROW][COL];
	int ARR1[ROW][COL];
	int index_i = ROW-1;
	int index_J = COL-1;
	

	/*Даний двухвимірний масив розмірністю 5X4.Заповніть його випадковими числами із інтервалу - 20.. 20: 
	Поміняти перший і останній рядки використовуючи тимчасовий масив*/


	// Даний двухвимірний масив розмірністю 5X4. Заповніть його випадковими числами із інтервалу - 20.. 20:
	
	
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			ARR[i][j] = rand() % 20-20;
		}
	}

	// Вивід масива на екран
	cout << "==================== ARRAY START =======================" << endl;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout<< ARR[i][j]<<"  ";
		}
		cout << endl;
	}
	cout << "==================== ARRAY END =======================" << endl;

	cout << endl;


	// Поміняти перший і останній рядки використовуючи тимчасовий масив*
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (i == 0)
			{
				ARR1[0][j] = ARR[index_i][j];
			}
			else if (i == index_i)
			{
				ARR1[index_i][j] = ARR[0][j];
			}
			else
			{
				ARR1[i][j] = ARR[i][j];
			}

		}

	}
	cout << endl;

	// Вивід зміненого масива на екран

	cout << "==================== ARRAY CHANGED START =======================" << endl;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout << ARR1[i][j] << "  ";
		}
		cout << endl;
	}
	cout << "==================== ARRAY CHANGED END =======================" << endl;
	cout << endl;

	/*1. Написать профамму, которая вычисляет среднее арифметическое последовательности дробных чисел, вводимых с клавиатуры.
		После ввода последнего числа программа должна вывести минимальное и максимальное число.*/

	cout << "*****************************     EXERCISE 1" << endl;
	int const SIZE1 = 5;
	float ARR4[SIZE1], SUMMA1=0, counter1=0, average1=0;
	for (int i = 0; i < SIZE1; i++)
	{
		cin >> ARR4[i];
	}

	for (int i = 0; i < SIZE1; i++)
	{
		cout<<ARR4[i]<<"   ";
		SUMMA1 += ARR4[i];
		counter1++;
		average1 = SUMMA1 / counter1;

	}
	cout << endl;
	cout << "SUMMA: " << SUMMA1 << endl;
	cout << "COUNTER: " << counter1 << endl;
	cout << "AVERAGE: " << average1 << endl;
	
	   	  

/*	2.  Напишите программу, которая выводит на экран таблицу умножения, например, на число введенное с клавиатуры.*/

	cout << "*****************************     EXERCISE 2" << endl;
	int const SIZE2 = 11;
	int x=0;
	cin >> x;
	cout << endl;
	for (int i = 0; i < SIZE2; i++)
	{
		cout << i << "*" << x <<"= "<<i*x <<endl;;
	}


	/*3. Написать программу, которая вводит с клавиатуры одномерный массив из 5 целых чисел, 
		после чего выводит количество ненулевых элементов.*/
	cout << "*****************************     EXERCISE 3" << endl;
	int const SIZE3 = 5;
	int ARR5[SIZE3], COUNTER1=0;
	for (int i = 0; i < SIZE3; i++)
	{
		cout << "NUMBER " << i << "  ";
		cin >> ARR5[i];
		
	}

	for (int i = 0; i < SIZE3; i++)
	{
		if (ARR5[i] != 0)
		{
			COUNTER1++;
		}
	}
	cout << "COUNTER: " << COUNTER1 << endl;
 	 


	/*4. Написать профамму, которая вычисляет среднее арифметическое ненулевых элементов введенного с клавиатуры массива
		целых чисел.*/
	cout << "*****************************     EXERCISE 4" << endl;
	int const SIZE = 5;
	int ARR2[SIZE];
	int counter = 0, summa = 0, average=0;

	//Вводимо масив з клавіатури
	for (int i = 0; i < SIZE; i++)
	{
		cin >> ARR2[i];
	}

	cout << "==================== ARRAY1 START =======================" << endl;
	// Вивід масива на екран
	for (int i = 0; i < SIZE; i++)
	{
		cout<< ARR2[i]<<"   ";
	}
	cout << endl;
	cout << "==================== ARRAY1 END =======================" << endl;
	//Вычисляем среднее арифметическое ненулевых элементов
	
	for (int i = 0; i < SIZE; i++)
	{
		if (ARR2[i] != 0)
		{
			counter++;
			summa += ARR2[i];
			average = summa / counter;
		}

	}
	cout << "SUMMA: " << summa << endl;
	cout << "COUNTER: " << counter << endl;
	cout << "AVERAGE: " << average << endl;

	cout << endl;
	/*5. Написать программу, которая вычисляет среднее арифметическое элементов массива
	без учета минимального и максимального элементов массива.*/
	cout << "*****************************     EXERCISE 5" << endl;

	int const row = 3;
	int const col = 3;
	int ARR3[row][col], tmp=0, maxI=0, maxJ=0, minI=0, minJ=0, SUMMA=0, COUNTER=0, AVERAGE=0 ;


	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			ARR3[i][j] = rand() % 20;
		}
	}

	cout << "==================== ARRAY 2 START =======================" << endl;
	
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout<< ARR3[i][j]<<"   ";
		}
		cout << endl;
	}
	cout << "==================== ARRAY2 END =======================" << endl;
		for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (tmp < ARR3[i][j])
			{
				tmp = ARR3[i][j];
				maxI = i;
				maxJ = j;
			}
		}
	
	}
	cout << "MAX: " << tmp << "   [" << maxI << "]   " << "[" << maxJ << "]" << endl;
	tmp = 20;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (tmp > ARR3[i][j])
			{
				tmp = ARR3[i][j];
				minI = i;
				minJ = j;
			}
		}
		
	}
	cout << "MIN: " << tmp << "   [" << minI << "]   " << "[" << minJ << "]" << endl;



	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (ARR3[i][j] != ARR3[maxI][maxJ] && ARR3[i][j] != ARR3[minI][minJ])
			{
				
				SUMMA += ARR3[i][j];
				COUNTER++;
				AVERAGE = SUMMA / COUNTER;

			}
			
		}
		cout << endl;
	}
	cout << "SUMMA: " << SUMMA << endl;
	cout << "COUNTER: " << COUNTER << endl;
	cout << "AVERAGE: " << AVERAGE << endl;

	/*6. Написать программу, которая проверяет, находится ли введенное с клавиатуры число в массиве.Массив заполнять через rand().*/
	

	cout << "*****************************     EXERCISE 6" << endl;
	int const SIZE6 = 10;
	int ARR6[SIZE6];
	int y = 0, k=11;
	

	
	for (int i = 0; i < SIZE6; i++)
	{
		ARR6[i] = rand() % 20 + 1;
		
	}
	for (int i = 0; i < SIZE6; i++)
	{
		cout << ARR6[i] << "  ";
	}

	cout << endl;
	cout << "Enter number you want to find: " << endl;
	cin >> y;
	for (int i = 0; i < SIZE6; i++)
	{
		if (y == ARR6[i])
		{
			k = i;
			
		}
		

		
	}
	
	if (k==11)
	{
		cout << "Number is absent" << endl;
	}
	else
	{
		cout << "Number " << y << " is in ARRAY 6 under the number " << k << endl;
		cout << endl;
	}
		

	cout << "*****************************     EXERCISE 7" << endl;
	

	/*7. Написать программу, которая создает масив с 10 случайных элементов.
		Сортировать масив методом "пузырька".
		Отсортированный масив замисать в миссыв sorted.*/


	int const ROW7 = 10;
	
	int ARR7[ROW7];

	for (int i = 0; i < ROW7; i++)
	{
		
			ARR7[i] = rand() % 20 + 1;
		
	}

	for (int i = 0; i < ROW7; i++)
	{
		
			cout << ARR7[i] << "  ";
		
	}

	cout << endl;

	for (int i = ROW7 - 1; i >= 1; i--)
	{
		for (int j = 0; j < i; j++)
		{
			int tmp = ARR7[j];
			if (ARR7[j] > ARR7[j + 1])
			{
				ARR7[j] = ARR7[j + 1];
				ARR7[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < ROW7; i++)
	{
		cout << ARR7[i] << "  ";
	}
	cout << endl;


	cout << "*****************************     EXERCISE 8 " << endl;


	/*8. Написать программу, которая определяет номер строки квадратной матрицы, сумма элементов которой максимальна. */

	int const ROW8 = 10;
	int const COL8 = 10;
	int ARR8[ROW8][COL8], SUMMA8 = 0, SUMMA_MAX = 0, index_max_i=0;

	for (int i = 0; i < ROW8; i++)
	{
		for (int j = 0; j < COL8; j++)
		{
			ARR8[i][j] = rand() % 20 + 1;
			

		}
		
	}


	for (int i = 0; i < ROW8; i++)
	{
		for (int j = 0; j < COL8; j++)
		{
			cout << ARR8[i][j] << "   ";
			SUMMA8 += ARR8[i][j];
			if (SUMMA_MAX < SUMMA8)
			{
				SUMMA_MAX = SUMMA8;
				index_max_i = i;
			}

		}
		cout <<"SUMMA ROW NUMBER"<<i<< "=   "<<SUMMA8 << endl;
		
		SUMMA8 = 0;
	}
	cout << "INDEX MAX ROW: " << index_max_i << " NA SUMMU " << SUMMA_MAX << endl;
	cout << endl;
	cout << "*****************************     EXERCISE 10 " << endl;
	/*10. Написать программу, реализующую игру "угадай число".
	Правила игры следующие.Играют двое.Один задумывает число, второй — угадывает.На каждом шаге угадывающий делает предположение.
		Игра до N очок.*/



	char player1[32], player2[32];
	int summa_player1 = 0, summa_player2 = 0;
	int ai_player1 = 0, ai_player2 = 0;
	int n = 0; 
	bool exit = false;

	cout << "The name of the fierst player is: " << endl;
	cin >> player1;
	cout << "The name of the second player is: " << endl;
	cin >> player2;

	cout << "how many points will we play? " << endl;
	cin >> n;


	while (!exit)
	{
		
		cout << "Player " <<player1<< " throw:" << endl;
		system("pause");
		ai_player1 = rand() % 6 + 1;
		cout << ai_player1 << endl;
		cout << "player "<<player2<< " the number:" << endl;
		cin >> ai_player2;
		cout << endl;
		if (ai_player1 == ai_player2)
		{
			summa_player2++;
		}
		else if (ai_player1 != ai_player2)
		{
			summa_player1++;
		}
		cout << endl;
		cout << "Number of player points 1  =>  " << summa_player1<<endl;
		cout << "Number of player points 2  =>  " << summa_player2 << endl;;

		if (summa_player1 == n)
		{
			exit = true;
			cout << "PLAYER " << player1 << " IS THE BEST" << endl;
		}
		else if (summa_player2 == n)
		{
			exit = true;
			cout << "PLAYER " << player2 << " IS THE BEST" << endl;
		}
	}

	


	system("pause");
	return 0;
}





