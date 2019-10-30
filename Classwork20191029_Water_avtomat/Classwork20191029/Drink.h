#pragma once
#include <string>

using namespace std;

struct Drink
{
	const int SIZE = 4;
	string name;
	double cost;
	double number;

	void CreateDrinks(Drink drinks[], const int SIZE);


};
