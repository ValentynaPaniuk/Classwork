# include <iostream>
# include <ctime>
# include <string>
# include <conio.h>
using namespace std;

int main()
{
	srand(unsigned(time(NULL)));

	//char name[5] = { "Bill" };
	//char hello[6] = { "Hello" };
	//char result[255] = {};

	//cout << strlen(hello) << endl; // strlen - функція для вимірювання довжини рядка
	//strcat_s(result, hello); // atrcat - функція конкантинація (об'єднання рядків)
	//strcat_s(result, " ");
	//strcat_s(result, name);
	//cout << result << endl;

	//cout << "Name" << name << endl;

	/*string personName = "Bill";
	string surname = "Gates";
	string hello = "Hello mr. ";

	cout << hello << personName << surname << endl;
	cout << "-------------------------" << endl;
	string res = hello + "\n" + personName + "\n" + surname;

	cout << res << endl;
	cout << "----------------------------" << endl;

	string strArr[4] = {"Bill", "Stive", "Tom", "Jack"};
	for (int i = 0; i < 4; i++)
	{
		cout << strArr[i] << endl;
	}
*/


  /*C++ 
	Задано рядок, що складається із символів. 
	Символи поєднуються в слова. 
	Слова відокремлюються одним або декількома пробілами. 
	Наприкінці тексту ставиться крапка. Текст містить не більш 255 символів.
	
	Написати наступні функції для роботи з переданим рядком:
1. Надрукувати всі слова, що не містять голосних букв.
2. Надрукувати всі слова, що містять цифри.
3. Вибрати у окремий масив усі цифри, відсортувати їх по спаданню.
4. Визначити, яке слово зустрічається в рядку найчастіше.
5. Відсортувати всі слова в алфавітному порядку	*/


	//Задано рядок, що складається із символів. Символи поєднуються в слова. Слова відокремлюються одним або декількома пробілами. Наприкінці тексту ставиться крапка.Текст містить не більш 255 символів.

	char arr[255] = {};
	char name;
	cin >> name;

	char sentence;
	int iterator = 0;
	int counter = 0;

	for (int i = 0; i < 255; i++)
	{
		cin >> sentence;
		if (int(sentence) == 46)
		{
			break;
		}

	}


	system("pause");
	return 0;
}
