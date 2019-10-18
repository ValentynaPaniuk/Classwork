# include <iostream> 
# include <ctime>
# include <string>
//# define DEBUG 5  define - директива препроцесора
# define SIZE 5

using namespace std;

/*Написати програму, яка знаходить суму елементів масиву. 
Розмір масиву є константою, яка оголошена на рівні препроцесора  */
int main()
{

//#ifdef DEBUG
//	cout << "a > b Works!" << endl;
//#endif
//
//#if DEBUG > 20
//	cout << DEBUG << endl;
//#elif DEBUG < 20
//	cout << " ELIF" << endl;
//#else
//	cout << DEBUG << " ELSE" << endl;
//#endif

	srand(unsigned(time(NULL)));
	
	int arr[SIZE];
	int suma = 0;
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10 + 1;
		suma += arr[i];
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout<< "ARR["<<i<<"] = "<<arr[i] <<endl;
	}
	cout << endl;
	cout << "SUMA elements: "<<suma << endl;

	system("pause");
	return 0;
}