# include <iostream>
# include <string>
# include "Avtomat.h"
# include "Menu.h"

using namespace std;


int main()
{
	avtomat drink1;
	drink1.name = "Pepsi";
	drink1.cost = 1;
	drink1.number = 2;
	drink1.ShowInfo();

	avtomat drink2;
	drink2.name = "Fanta";
	drink2.cost = 1.5;
	drink2.number = 5;
	drink2.ShowInfo();

	avtomat drink3;
	drink3.name = "Sprite";
	drink3.cost = 2;
	drink3.number = 15;
	drink3.ShowInfo();

	avtomat drink4;
	drink4.name = "Bonaqua";
	drink4.cost = 1.25;
	drink4.number = 20;
	drink4.ShowInfo();



	Menu(drink1, drink2, drink3, drink4);
	  


	system("pause");
	return 0;
}