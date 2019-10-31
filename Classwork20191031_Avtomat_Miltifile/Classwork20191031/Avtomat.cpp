# include <iostream>
# include <string>
# include "Avtomat.h"

using namespace std;

void avtomat:: ShowInfo()
{

		if (number >= 1)
		{
			cout << "Name:\t" << name << "\tprice:\t" << cost << "\tNumber of glasses:\t" << number << endl;
		}
		else if (number < 1)
		{
			system("cls");
			cout << "================        The water is over!!!!!!!!!!!!!!" << endl;
		}

}
void avtomat :: Counting()
	{
		if (number > 0)
		{
			number--;
		}
	}

void avtomat :: Rest()
{
	if (number >= 1)
	{
		cout << "Make money in the vending machine: " << endl;
		cin >> money;
		if (money > cost)
		{

			reshta = money - cost;
			cout << "Don't forget to pick up the rest: " << reshta << endl;
		}
		else if (money == cost)
		{
			cout << "Money was entered correctly! Thank's! " << endl;
		}
		else if (money < cost)
		{
			reshta = cost - money;
			cout << "There is not enough money for a drink: You must add: " << reshta << endl;
		}
	}

}

void avtomat :: Profit()
	{
	if (number > 0)
	{
		summa += cost;
		cout << "Our profit is: " << summa << endl;
	}

	}



