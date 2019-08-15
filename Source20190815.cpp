# include <iostream>
# include <ctime>

using namespace std;

int MENU();

int SUM(int a, int b);
double SUM(double a, int b);
double SUM(double a, double b);
double SUM(int a, double b);

int SUB(int a, int b);
double SUB(double a, int b);
double SUB(double a, double b);
double SUB(int a, double b);

int MUL(int a, int b);
double MUL(double a, int b);
double MUL(double a, double b);
double MUL(int a, double b);

int DIV(int a, int b);
double DIV(double a, int b);
double DIV(double a, double b);
double DIV(int a, double b);


int main()
{
	double a = 0, b = 0;
	int type = 0;
	double result = 0;
	cout << "Enter two digits: " << endl;
	cin >> a >> b;

	type = MENU();

	switch (type)
	{
	case 1:
		SUM(a, b);
		result = SUM(a, b);

		cout << "Addition:" << result<<endl;
		break;

	case 2:
		SUB(a, b);
		result= SUB(a, b);
		cout << "Subtraction:" << result<<endl;
		break;

	case 3:
		MUL(a, b);
		result= MUL(a, b);
		cout << "Multiplication:" << result<<endl;
		break;

	case 4:
		DIV(a, b);
		result= DIV(a, b);
		cout << "Division:" << result<<endl;
		break;
	}



	system("pause");
	return 0;
}

 int MENU()
{
	int type = 0;
	cout << "CALCULATION" << endl;
	cout << "Make your choice: " << endl;
	cout << "1=>    + " << endl;
	cout << "2=>    / " << endl;
	cout << "3=>    *" << endl;
	cout << "4=>   -" << endl;
	cin >> type;
	return type;

}


// Addition
int SUM(int a, int b)
{
	return a + b;

}
double SUM(double a, int b)
{
	return a + b;

}
double SUM(double a, double b)
{
	return a + b;
}
double SUM(int a, double b)
{
	return a + b;
}

//Subtraction

int SUB(int a, int b)
{
	return a - b;

}
double SUB(double a, int b)
{
	return a - b;

}
double SUB(double a, double b)
{
	return a - b;
}
double SUB(int a, double b)
{
	return a - b;
}

//Multiplication
int MUL(int a, int b)
{
	return a * b;

}
double MUL(double a, int b)
{
	return a * b;

}
double MUL(double a, double b)
{
	return a * b;
}
double MUL(int a, double b)
{
	return a * b;
}

//Division
int DIV(int a, int b)
{
	return a / b;

}
double DIV(double a, int b)
{
	return a / b;

}
double DIV(double a, double b)
{
	return a / b;
}
double DIV(int a, double b)
{
	if (b == 0)
	{
		cout << "Cannot be divisible by zero" << endl;
		return 0;
	}
	else
	{
		return a / b;
	}
}




