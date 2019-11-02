# include <iostream>
# include <ctime>
using namespace std;
//*******************************************************Exercise 1 ******************************************************************************

/*Rock, Paper, Scissors Game. Write a program that lets the user play the game of Rock, Paper, Scissors against the computer. The program should work as follows.
1. When the program begins, a random number in the range of 1 through 3 is generated. If the number is 1, then the computer has chosen rock. If the number is 2,
then the computer has chosen paper. If the number is 3, then the computer has chosen scissors. (Don’t display the computer’s choice yet.)
2. The user enters his or her choice of rock, paper, or scissors at the keyboard.
(You can use a menu if you prefer.)
3. The computer’s choice is displayed.
4. A winner is selected according to the following rules:

If one player chooses rock and the other player chooses scissors, then rock
wins. (The rock smashes the scissors.)

If one player chooses scissors and the other player chooses paper, then scissors
wins. (Scissors cuts paper.)

If one player chooses paper and the other player chooses rock, then paper wins. (Paper wraps rock.)

If both players make the same choice, the game must be played again to determine the winner.
Be sure to divide the program into functions that perform each major task.
*/

int Menu(int n);
int Choice_comp();
int Choice_user();
void Choice_check(int choice_comp, int choice_user, int comp_score, int user_score, bool exit, int n);

//*********************************************************** Exercise 2 *********************************************************************************

/*Визначити перевантажені функції для обчислення площі трикутника 
- за трьома сторонами
- за висотою та основою.
Перевірити роботу функцій.
Додатково визначити функцію для перевірки існування трикутника за трьома сторонами(кожна сторона трикутника повинна бути менша від суми двох інших сторін). 
Використати функцію перевірки існування трикутника у функції обчислення площі за трьома сторонами.*/

void MENU2(double a, double b, double c);
void Audit_triagle(double a, double b, double c, double S, double p, double SQ);
double ST(double a, double b, double c, double S, double p);
double ST(double S, double a, double h, double t);

//********************************************************** Exercise 3 ****************************************************************************
/*На шоу Пошук Зірок судді кожному учаснику виставляють оцінку від 0 до 10(оцінка може бути дробовим числом). 
Знайти підсумкову оцінку кожного учасника, яка обчислюється як середнє арифметичне, але без врахування найкращої та найгіршої оцінок. 
Виконати задачу з розбиттям на функції.*/

void MENU3(int k, double arr[], const int SIZE, double sum, double average, double max, double min);
void Fill(double arr[], const int SIZE);
void Print(double arr[], const int SIZE);
double MAX(double arr[], const int SIZE, double max);
double MIN(double arr[], const int SIZE, double min);
double Average(int k, double arr[], const int SIZE, double sum, double average, double max, double min);
//**********************************************************************************************************************************************
void main()
{
	//Exercise 1 =========================================================================================
	cout << "\t\t\t EXERCISE 1" << endl;
	srand(unsigned(time(NULL)));
	int choice_comp=0, choice_user=0, n=0, comp_score=0, user_score=0;
	bool exit = false;
	n = Menu(n);
	Choice_check(choice_comp, choice_user, comp_score, user_score, exit, n);
	cout << endl;

	
	// Exercise 2 ==========================================================================================
	cout << "\n \t\t\t EXERCISE 2" << endl;
	double a = 0, b = 0, c = 0, S = 0, p = 0, h = 0, SQ=0;
	const double t = 0.5;

	cout << "==================== Option 1: when three parties are known: " << endl;
	cout << "Enter the length of the sides of the triangle: " << endl;
	cin >> a >> b >> c;
	Audit_triagle(a, b, c, S, p, SQ);
	
	
	cout << "===================== Option 2: " << endl;
	cout << "Enter one of the sides of the triangle and the height down to that side: " << endl;
	cin >> a;
	cin >> h;
	SQ=ST(S, a, h, t);
	cout << "Area of triangle 2 = >>> " << SQ << endl;


	// 3. Exercise 3 =======================================================================================================
	cout << "\n\n\n \t\t\t EXERCISE 3" << endl;
	int k = 0;
	double sum = 0, max=0, min=0, average=0;
	const int SIZE = 10;
	double arr[SIZE];

	MENU3(k, arr, SIZE, sum, average, max, min);
	


	system("pause");

}
//  1.  ************************************************************************************************************

int Menu(int n)
{
	cout << "============   Rock, Paper, Scissors Game  ===============" << endl;
	cout << "Random number in the range of 1 through 3 is generated: \n" << endl;
	cout << "If the number is 1, then the computer has chosen rock" << endl;
	cout << "If the number is 2, then the computer has chosen paper" << endl;
	cout << "If the number is 3, then the computer has chosen scissors" << endl;
	cout << endl;
	cout << "The user enters his or her choice of rock, paper, or scissors at the keyboard" << endl;
	cout << "\n HOW MANY TIMES WILL WE PLAY? " << endl;
	cin >> n;
	cout << " =========================================================================" << endl;
	cout << "A winner is selected according to the following RULES:" << endl;
	cout << "If one player chooses rock and the other player chooses scissors, then rock wins. (The rock smashes the scissors.)" << endl;
	cout << "If one player chooses paper and the other player chooses rock, then paper wins. (Paper wraps rock.)" << endl;
	cout << "If one player chooses scissors and the other player chooses paper, then scissors wins. (Scissors cuts paper.)" << endl;
	cout << "If both players make the same choice, the game must be played again to determine the winner" << endl;
	cout << " ==========================================================================" << endl;

	return n;
}

int Choice_comp()
{
	int choice_comp;
	choice_comp = rand() % 3 + 1;
	cout << "The computer made its choice." << endl;
	cout << endl;
	return choice_comp;
}

int Choice_user()
{
	int choice_user;
	cout << "Make your choice: 1 - rock; 2 - paper; 3 - scissors; " << endl;
	cin >> choice_user;
	return choice_user;
}

void Choice_check(int choice_comp, int choice_user, int comp_score, int user_score, bool exit, int n)
{

	while (!exit)

	{
		choice_comp = Choice_comp();
		cout << endl;
		choice_user = Choice_user();
		cout << endl;
		cout << "COMPUTER  => " << choice_comp << "    USER  =>" << choice_user << endl;
		cout << endl;

		if (choice_comp == 1 && choice_user == 1 || choice_comp == 2 && choice_user == 2 || choice_comp == 3 && choice_user == 3)
		{
			cout << "A draw.We start the game again...\n\n\n" << endl;
			system("pause");
		}
		else if (choice_comp == 1 && choice_user == 2 || choice_comp == 1 && choice_user == 3 || choice_comp == 3 && choice_user == 2)
		{
			cout << "\n\n The winner is comp\n" << endl;
			comp_score++;

		}
		else if (choice_comp == 2 && choice_user == 1 || choice_comp == 3 && choice_user == 1 || choice_comp == 2 && choice_user == 3)
		{
			cout << "\n\n The winner is user\n" << endl;
			user_score++;

		}
		cout << "================================================" << endl;
		if (user_score == n)
		{
				cout << "\n\n ********   THE WINNER IS USER. CONGRATULATIONS! **************" << endl;
			exit = true;

		}
		else if (comp_score == n)
		{
			cout << "\n\n ********    THE WINNER IS COMPUTER. CONGRATULATIONS!    ************" << endl;
			exit = true;

		}
		cout << "===========================================================" << endl;
	}

}
//    2.  *****************************************************************************




double ST(double a, double b, double c, double S, double p)
{
	p = (a + b + c) / 2;
	S = sqrt(p * (p - a)*(p - b)*(p - c));
	
	return S;
}

double ST(double S, double a, double h, double t)
{
	S = t * a * h;
	return S;
}

void Audit_triagle(double a, double b, double c, double S, double p, double SQ)
{
	if (a < b + c)
	{
		cout << "Its triagle" << endl;
		SQ = ST(a, b, c, S, p);
		cout << "Area of triangle (  S=sqrt(p * (p - a)*(p - b)*(p - c)) ): = >>> " << SQ << endl;
	}
	else if (a + b < c)
	{
		cout << "Its triagle" << endl;
		SQ = ST(a, b, c, S, p);
		cout << "Area of triangle (  S=sqrt(p * (p - a)*(p - b)*(p - c)) ): = >>> " << SQ << endl;
	}
	else if (a + c < b)
	{
		cout << "Its triagle" << endl;
		SQ = ST(a, b, c, S, p);
		cout << "Area of triangle (  S=sqrt(p * (p - a)*(p - b)*(p - c)) ): = >>> " << SQ << endl;
	}
	else
	{
		cout << "Its not triagle" << endl;
	}
}

// 3 . *************************************************************************************************

void MENU3(int k, double arr[], const int SIZE, double sum, double average, double max, double min)
{
	cout << "\t\t ============ SEARCH FOR STARS =======================" << endl;
	cout << "Enter the number of participants: " << endl;
	cin >> k;

	for (int i = 1; i <= k; i++)
	{
		cout << " Participant ratings " << i << endl;
		Fill(arr, SIZE);
		Print(arr, SIZE);
		Average(k, arr, SIZE, sum, average, max, min);
	}

}

void Fill(double arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10 + 1.0;
	}
}

void Print(double arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "   ";
	}
	cout << endl;
}

double MAX(double arr[], const int SIZE, double max)
{
	max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			
		}
	}
	cout << "Max: " << max << endl;
	return max;
}

double MIN(double arr[], const int SIZE, double min)
{
	min = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}

	}
	cout << "Min: " << min << endl;
	return min;
}

double Average(int k, double arr[], const int SIZE, double sum, double average, double max, double min)
{
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	
	max = MAX(arr, SIZE, max);
	min = MIN(arr, SIZE, min);
	
	average = (sum-max-min) / (SIZE-2);
	cout << "Average : " << average << endl;

	return average;
}
