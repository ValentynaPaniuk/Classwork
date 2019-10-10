
#include <iostream>
#include <string>

using namespace std;

/* Exercise 1. Реализовать структуру «Стиральная машинка» (фирма, цвет, ширина, длина, высота, мощность, скорость отжима, температура нагрева). 
Создайте экземпляр структуры и проиллюстрируйте работу с ним.
*/

struct washingMachine {
	string firm;
	string color;
	double width;
	double length;
	double height;
	double power;
	double spinSpeed;
	double heatingTemperature;
};

void ShowInfoWashingMachine(washingMachine &washmach)
{
	cout << "Enter manufacturer's company: " << endl;
	cin >> washmach.firm;
	cout << "Enter the color of the washing machine: " << endl;
	cin >> washmach.color;
	cout << "Enter the dimensions of the wachinw machine (width, length, height): " << endl;
	cin >> washmach.width >> washmach.length >> washmach.height;
	cout << "Enter the power of the washine machine: " << endl;
	cin >> washmach.power;
	cout << "Enter the swirl tightness of the washine machine: " << endl;
	cin >> washmach.spinSpeed;
	cout << "Enter the heating temperature of the wating machine: " << endl;
	cin >> washmach.heatingTemperature;
}

//=======================================================================================================================================
/* Exercice 2. Разработать структуру, которая описывает животное (название, класс, кличка). Создать функции для работы с этой структурой:
Заполнение объекта
Вывод на экран данных об объекте
Функция «Подать голос»*/

struct animal {
	string nameAnimal;
	string alias;
	string kindAnimal;
	string subgroup;
	int numberOfSpeciesAnimal;
	string voice;

	void MakeVoice() //Функція в структурі
	{
		cout << nameAnimal << "GAV";
	}

};

void AddAnimal(animal &anim)
{
	cout << "Animal: " << endl;
	cin >> anim.nameAnimal;
	cout << "Alias of animal: " << endl;
	cin >> anim.alias;
	cout << "Kind of animal is: " << endl;
	cin >> anim.kindAnimal;
	cout << "Subgroup of animal is: " << endl;
	cin >> anim.subgroup;
	cout << "The number of animals in the species: " << endl;
	cin >> anim.numberOfSpeciesAnimal;

}
//======================================================================================================================================
/* Exercise 3. Реализовать структуру «Утюг» (фирма, модель, цвет, минимальная температура, максимальная температура, подача пара да/нет, мощность).
	Создайте экземпляр структуры и проиллюстрируйте работу с ним.*/

struct Iron {
	string firmIron;
	string modelIron;
	string colorIron;
	int mintemperature;
	int maxtemperature;
	bool question = false;
	int powerIron;


};



//==========================================================================================================================

struct Book {
	string title;
	string author;
	int pageCount;
	string desc;

	void EditPages(int newPageCount) {
		pageCount = newPageCount;
	}

	void BookDetail() {
		cout << "Book name: " << title << "\nAuthor: " << author << "\nPage count: " << pageCount << "\nDescription: " << desc << endl;
	}
};

struct Library  // Create new Structure
{
	Book book;  // Internal structure
	string name;
	int booksCount;
	string director;
	string address;

	void ShowLibraryInfo() {
		cout << "Library name: " << name << "\nAddress: " << address << "\nDirector: " << director << "\nBooks count: " << booksCount << endl;
	}
};

void CreateLibrary(Library &lib) {
	cout << "Library name?" << endl;
	cin >> lib.name;
	cout << "Books count?" << endl;
	cin >> lib.booksCount;
	cout << "Address" << endl;
	cin >> lib.address;
	cout << "Director" << endl;
	cin >> lib.director;
	lib.ShowLibraryInfo();
}

int main() {

	/*Library lib; //Створення екземпляра структури
	CreateLibrary(lib);
	cout << "Lubrary created! " << endl;
	cout << "Book name?" << endl;
	cin >> lib.book.title;
	cout << "Author?" << endl;
	cin >> lib.book.author;
	cout << "Page count" << endl;
	cin >> lib.book.pageCount;
	cout << "Description" << endl;
	cin >> lib.book.desc;
	lib.book.BookDetail();
	lib.book.EditPages(300);
	lib.book.BookDetail();*/
	//==============================================================================================================================================

	/* Exercise 1. Реализовать структуру «Стиральная машинка» (фирма, цвет, ширина, длина, высота, мощность, скорость отжима, температура нагрева).
	Создайте экземпляр структуры и проиллюстрируйте работу с ним. */
	washingMachine washmach; //Створення екземпляра структури
	ShowInfoWashingMachine(washmach);


	/* Exercice 2. Разработать структуру, которая описывает животное (название, класс, кличка). Создать функции для работы с этой структурой:
	Заполнение объекта
	Вывод на экран данных об объекте
	Функция «Подать голос»*/
	animal anim;//Створення екземпляра структури
	AddAnimal(anim);
	anim.MakeVoice;

	/* Exercise 3. Реализовать структуру «Утюг» (фирма, модель, цвет, минимальная температура, максимальная температура, подача пара да/нет, мощность).
	Создайте экземпляр структуры и проиллюстрируйте работу с ним.*/


	

	//lib.ShowLibraryInfo();

	//cout << "======================" << endl;

	//Library step;
	//CreateLibrary(step);

	//step.name = lib.name;
	//cout << "========================================!!!!!!!!!" << endl;
	//cout << "New Name = > " << step.name << endl;


	//cout << "Test for Sergiy " << endl;
	//step.ShowLibraryInfo();
	//




	system("pause");
	return 0;
}