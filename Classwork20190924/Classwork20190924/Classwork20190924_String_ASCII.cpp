# include <iostream>
# include <ctime>
using namespace std;

int main()
{
	//================================================================================

	for (int i = 0; i < 255; i++)
	{
		cout << "key " << i << " value " << char(i) << endl;
	}
	//================================================================================
	// C++	Вводиться рядок.Яких букв у рядку більше ’а’ чи ’о’ ?
	cout << "Enter text: (Press \".\" for EXIT)" << endl;
	char a;
	int a_index = 0;
	int o_index = 0;
	bool exit0 = false;

	while(!exit0)
	{
		cin >> a;
		if (a == '.')
		{
			exit0 = true;
		}
		if (int (a) == 65 || int (a)==97)
		{
			a_index++;
		}
		if (int(a) == 79 || int(a) == 111)
		{
			o_index++;
		}

	}

	if (a_index > o_index)
	{
		cout << "A index = " << a_index << endl;
		cout << "O index = " << o_index << endl;
		cout << "A - THE BEST!!!!!!" << endl;

	}
	else
	{
		cout << "Index A = " << a_index << endl;
		cout << "Index O = " << o_index << endl;
		cout << "O - THE BEST!!!!!!" << endl;
	}


	//======================================================================================================
	//*C++ Вводиться рядок. Порахувати кількість латинських букв, цифр та розділових знаків у рядку.  
	bool exit = false;
	char text;
	int letter = 0;
	int sing = 0;
	int number = 0;
	int x = 0;

	cout << "Enter text: (Press \".\" for EXIT)" << endl;
	while (!exit)
	{
		cin >> text;
		x++;
		if (text == '.')
		{
			exit = true;
		}
		if (int(text) >= 48 && int(text) <= 57)
		{
			number++;
		}
		else if (int(text) >= 65 && int(text) <= 90 || int(text) >= 97 && int(text) <= 122)
		{
			letter++;
		}
		else if (int(text) >= 32 && int(text) <= 47 || int(text) >= 58 && int(text) <= 64 || int(text) >= 123 && int(text) <= 127)
		{
			sing++;
		}
	}
	cout << "All text: " << x << endl;
	cout << "Letter: " <<letter<< endl;
	cout << "Sing: " <<sing<< endl;
	cout << "Number: " <<number<< endl;
	

	//=====================================================================================================================
	//C++ 	Дано рядок.Замінити у рядку всі великі букви на малі і навпаки.
	bool exit1 = false;
	char Text;
	cout << "Enter text: (Press \".\" for EXIT)" << endl;
	while (!exit1)
	{
		cin >> Text;
				
		if (Text == '.')
		{
			exit1 = true;
		}
		if (int(Text) >= 65 && int(Text) <= 90)
		{
			cout << char(int(Text) + 32)<<"  ";
		}
		if (int(Text) >=97 && int(Text) <= 122)
		{
			cout << char(int(Text) - 32) <<"  ";
		}

	}
	cout << endl;
	//=======================================================================================================================
	/*C++ Розробити програму, яка зчитує з екрану рядок, а потім видає статистику: 
	кількість пробільних символів (whitespaces), голосних, приголосних, знаків пунктуації. Введення передбачається англомовним. */
	bool exit3 = false;
	char s;
	int r = 0;
	int white=0;
	int o=0;
	int b=0;
	int sing1 = 0;

	cout << "Enter text: (Press \".\" for EXIT)" << endl;
	while (!exit3)
	{
		cin >> s;
		r++;

		if (s== '.')
		{
			exit3 = true;
		}

	if(int(s)==65||int(s)==69||int(s)==73||int(s)==79||int(s)==85||int(s)==89||int(s)==97||int(s)==101||int(s)==105||int(s)==111||int(s)==117||int(s)==121)
	{
		o++;
	}
	else if (int(s) >= 65 && int(s) <= 90 || int(s) >= 97 && int(s) <= 122 && int(s) != 65 && int(s) != 69 && int(s) != 73 && int(s) != 79 && int(s) != 85 && int(s) != 89 && int(s) != 97 && int(s) != 101 && int(s) != 105 && int(s) != 111 && int(s) != 117 && int(s) != 121)
	{
		b++;
	}
	else if (int(s) < 65 && int(s>32))
	{
		sing1++;
	}
	else if (int(s) == 32)
	{
		white++;
	}

	}
	cout << "All text: " << r << endl;
	cout << "Golosni: " << o << endl;
	cout << "Prygolosni: " << b << endl;
	cout << "Znaky: " << sing1 << endl;
	cout << "Whitespace:  " << white << endl; //не працює підрахунок пробілів

	// ===================================================================================================



	system("pause");
	return 0;
}