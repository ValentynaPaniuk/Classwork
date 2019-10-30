
#include <iostream>
#include "Drink.h"
using namespace std;

Drink drinks[];
void CreateDrinks(Drink drinks[], const int SIZE) {

	

	drinks[0].name = "Coca-Cola";
	drinks[0].cost = 3;
	drinks[0].number = 100;
	drinks[1].name = "Cool tea";
	drinks[1].cost = 2.5;
	drinks[1].number = 100;
	drinks[2].name = "Lemon lime";
	drinks[2].cost = 2.5;
	drinks[2].number = 100;
	drinks[3].name = "Grape juice";
	drinks[3].cost = 1;
	drinks[3].number = 100;
	drinks[4].name = "Soda cream";
	drinks[4].cost = 2;
	drinks[4].number = 100;

}

void ShowDrinks(Drink drinks[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Name: "<<drinks->name << endl;
	}
}