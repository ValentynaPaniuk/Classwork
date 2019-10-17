# include <iostream>
# include <ctime>
# include <string>

using namespace std;

//1. Описати структуру Student(прізвище, назва групи, успішність(масив із 5 int)).
// Написати програму, яка дозволяє :
//2. динамічно змінювати розмір масиву
//3. заповнювати студента інформацією
//4. виводити інформацію про студента
//5. виводить список відмінників(> 75 % відмінних оцінок)
//6. виводить список двієчників(> 50 % оцінок 2 и 3)
//7. Сформувати динамічний масив, заповнити його даними та вивести на екран.
//   Роботу організувати через меню. Пункти меню обовязково є типами перелічуваної константи.



//1. Описати структуру Student(прізвище, назва групи, успішність(масив із 5 int)).
struct Student 
{

	string surname;
	string progress;
	int arr[5];
	
	void shovInfoStudent()
	{
		cout << "Surname: " << surname << endl;

	}
};

struct Group 
{
	string countre;
	string nameGroup;
};





//5. виводить список відмінників(> 75 % відмінних оцінок)
//6. виводить список двієчників(> 50 % оцінок 2 и 3)

void Progress(Student *students, const int studentCounter)
{
	
	for (int i = 0; i < studentCounter; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			students[i].arr[j] = rand() % 5 + 1;
				
		}
		cout << endl;
	}
	cout << endl;


	for (int i = 0; i < studentCounter; i++)
	{
		cout << students[i].surname<<"\t";
		for (int j = 0; j < 5; j++)
		{
			cout<< students[i].arr[j]<<"  ";
		}
		cout << endl;
	}
	
	int counterGoodRating = 0;

	for (int i = 0; i < studentCounter; i++)
	{
		cout << students[i].surname << "\t";
		for (int j = 0; j < 5; j++)
		{
			if (students[i].arr[j] > 3)
			{
				counterGoodRating++;
			}
			
		}
		
		if (counterGoodRating > 3)
		{
			cout << "GOOD STUDENT" << endl;
		}
		else
		{
			cout << "BED STUDENT" << endl;
		}
	}

}


void ShowStudent(Student *students, const int studentCounter)
{
	for (int i = 0; i < studentCounter; i++)
	{
		students[i].shovInfoStudent();
	}
}



//3. заповнювати студента інформацією
void AddNewStudent(Student *students, const int studentCounter)
{
	for (int i = 0; i < studentCounter; i++)
	{
		cout << "Add new student:"<<i+1<< endl;
		cin >> students[i].surname;
	}
}



int main()
{
	srand(unsigned(time(NULL)));
	int studentCounter = 0;
	cout << "How many people do You want to add in group:" << endl;
	cin >> studentCounter;
	Student *students = new Student[studentCounter];

	
	

	AddNewStudent(students, studentCounter);
	ShowStudent(students, studentCounter);

	Progress(students, studentCounter);
	
	system("pause");
	return 0;
}