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
{	string surname;
	string progress;
	int arr[5];
	
	void shovInfoStudent()
	{
		cout << "Surname: " << surname << endl;
	}
};

struct Group 
{
	string country;
	string nameGroup;
	short groupSize;

	void ShowInfoGroup()
	{
		cout << "Country: " << country << "\nnameGroup\t" << nameGroup << endl;
	}
	void SetgroupSize(short newName)
	{
		groupSize = newName;
	}
	short GetgroupSize()
	{
		return groupSize;
	}

	void GetMemory() 
	{
		student = new Student[groupSize];
	}

	Student *student = nullptr;

};


//5. виводить список відмінників(> 75 % відмінних оцінок)
//6. виводить список двієчників(> 50 % оцінок 2 и 3)
void Progress(Student *students, const int groupSize)
{

	for (int i = 0; i < groupSize; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			students[i].arr[j] = rand() % 5 + 1;

		}
		cout << endl;
	}
	cout << endl;


	for (int i = 0; i < groupSize; i++)
	{
		cout << students[i].surname << "\t";
		for (int j = 0; j < 5; j++)
		{
			cout << students[i].arr[j] << "  ";
		}
		cout << endl;
	}

	int counterGoodRating = 0;

	for (int i = 0; i < groupSize; i++)
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




//5. виводить список відмінників(> 75 % відмінних оцінок)
//6. виводить список двієчників(> 50 % оцінок 2 и 3)
//7. Сформувати динамічний масив, заповнити його даними та вивести на екран.



//4. виводити інформацію про студента

void ShowStudent(Student *student, const int groupSize)
{
	for (int i = 0; i < groupSize; i++)
	{
		student[i].shovInfoStudent();
	}
}



//3. заповнювати студента інформацією
void AddNewStudent(Student *student, const int groupSize)
{
	for (int i = 0; i < groupSize; i++)
	{
		cout << "Add new student:"<<i+1<< endl;
		cin >> student[i].surname;
	}
}



int main()
{
	srand(unsigned(time(NULL)));
	int groupSize = 0;
	
	//2. динамічно змінювати розмір масиву
	cout << "How many people do You want to add in group:" << endl;
	cin >> groupSize;

	Group Programmers;

	Programmers.country = "Ukraine";
	Programmers.nameGroup = "34C9-1PA";
	Programmers.SetgroupSize(groupSize);
	Programmers.GetMemory();
	Programmers.ShowInfoGroup();

	AddNewStudent(Programmers.student, Programmers.GetgroupSize());
	ShowStudent(Programmers.student, Programmers.GetgroupSize());
	Progress(Programmers.student, Programmers.GetgroupSize());




	
	//Student *students = new Student[groupSize];

	
	

	/*AddNewStudent(Programmers.students, groupSize);
	ShowStudent(Programmers.students, groupSize);
	Progress(Programmers.students, groupSize);*/

	
	system("pause");
	return 0;
}