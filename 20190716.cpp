# include <iostream>
# include <ctime>
using namespace std;
//=============================================================================

int PRODUCT(int x, int y)
{
	int result = 0;
	for (int i = x; x <= y; x++)
	{
		result += x;
	}
	return result;
}


float COST(int km, int grn)
{
	const float litr = 10;
	const float one_km = 100;
	float total_liters = km / one_km * litr;
	float cost=total_liters*grn;

	return cost;
}


int main()
{
	cout << "Exercise 1" << endl;
	/*Написати функцію, яка отримує в якості параметрів два цілих числа і повертає суму чисел з діапазону між ними.  */
	int x = 0, y = 0;
	cout << "Enter the intervier from x to y:" << endl;
	cout << "Enter x: " << endl;
	cin >> x;
	cout << "Enter y: " << endl;
	cin >> y;
	int result1 = PRODUCT(x, y);
	cout << "Product of numbers: " <<result1<< endl;
	cout << endl;
	cout <<"============================================================="<< endl;
//==========================================================================================
	/*Написати функцію, яка обчислює вартість поїздки на автомобілі на дачу (туди і назад). 
	Вхідними даними є: відстань до дачі (км); кількість бензину, яку споживає автомобіль на 100 км пробігу; 
	ціна одного літру бензину. Дані для розрахунків вводяться користувачем.  */

	
	float km = 0, grn=0;

	cout << "Enter the distance to the cottage: " << endl;
	cin >> km;
	cout << "Enter the cost of one liter of gasoline: " << endl;
	cin >> grn;
	float cost = COST(km, grn);
	cout << "The cost of travel: " << cost << " grn" << endl;
	cout << "=============================================================" << endl;



	system("pause");
	return 0;
}