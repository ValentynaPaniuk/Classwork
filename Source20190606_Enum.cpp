# include <iostream>
using namespace std;
int main()
{
	/*////////////////////////////////////////////////////////////////////////////////////////
	enum days { Monday=1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
	
	cout << days::Monday << endl;
	cout << days::Tuesday << endl;
	cout << days::Wednesday << endl;
	cout << days::Thursday << endl;
	cout << days::Friday << endl;
	cout << days::Saturday << endl;
	cout << days::Sunday << endl;
	
	////////////////////////////////////////////////////////////////////////////////////////
	
	int choice = 0;
	cout << "Enter day of week: " << endl;
	cin >> choice;

	switch (choice)
	{
		case days::Monday:
		//case Monday:
		{
			cout << "Monday is day number 1" << endl;
			break;
		}
		case days::Tuesday:
		{
			cout << "Tuesday is day number 2" << endl;
			break;
		}
		case days::Wednesday:
		{
			cout << "Wednesday is day number 3" << endl;
			break;
		}
		case days::Thursday:
		{
			cout << "Thursday is day number 4" << endl;
			break;
		}
		case days::Friday:
		{
			cout << "Friday is day number 5" << endl;
			break;
		}
		case days::Saturday:
		{
			cout << "Saturday is day number 6" << endl;
			break;
		}
		case days::Sunday:
		{
			cout << "Sunday is day number 7" << endl;
			break;
		}
		default:
		{
			cout << "Enter correct day " << endl;
			break;
		}
	}
	/////////////////////////////////////////////////////////////////////////////////////////
	float a=0, b=0, d=0, k=0;
	int c = 0;
	enum action { Addition=1, Subtraction, Multiplication, Division };
	cout << "Enter number 1: " << endl;
	cin >> a;
	cout << "Please request to choose an action:" << endl;
	cout << " 1 - Addition, \n 2 - Subtraction \n 3 - Multiplication \n 4 - Division " << endl;
	cin >> c;
	cout << c <<endl;
	cout << "Enter number 2: " << endl;
	cin >> b;
	cout << b << endl;
	switch (c)
	{
	case action::Addition:
		{
			d = a + b;
			cout << a << "+" << b << "=" << d << endl;
			break;
		}
	case action::Subtraction:
	{
		d = a - b;
		cout << a << "-" << b << "=" << d << endl;
		break;
	}
	case action::Multiplication:
	{
		d = a * b;
		cout << a << "*" << b << "=" << d << endl;
		break;
	}
	case action::Division:
	{
		if (b > k || b < k)
		{
		d = a / b;
		cout << a << "/" << b << "=" << d << endl;
		}
		else
		{
			cout << "You can not divide by zero" << endl;
		}
		break;
	}
	default:
	{
		cout << "Enter correct action" << endl;
	}

	}
	//////////////////////////////////////////////////////////////////////////////////////*/


	

	

	system("pause");
	return 0;
}