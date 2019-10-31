# include <iostream>
# include "developer.h"
//Developer

using namespace std;
void developer :: ShowInfoDev ()
{
	
		cout << "    Developer: \t" << devel << "\nAddress: \t" << address << "e-mail: \t" << email << endl;
		cout << "                           All rights reserved." << endl;
		cout << "     Support phone: +3(8)096-599-13-35 (paid from all Ukrainian networks)." << endl;
	
};

void developer :: CreateDev(developer dev)
{

	dev.devel = "Paniuk Valentyna";
	dev.address = "str. Haidamatska, buil. 41, apt. 78, Rivne, 33000";
	dev.email = "valentyna.paniuk@gmail.com";
	dev.ShowInfoDev();
}
