# include <iostream>
# include <ctime>
# include <string>
# include "1FirstMenu.h"
# include "2SecondMenu.h"
# include "3Library.h"
# include "4CardBook.h"
# include "5CardClient.h"
# include "6Developer.h"


using namespace std;
// Library

void library:: ShowInfoLibrary()
	{
		cout << "LIBRARY:\t" << name << "\nAddress:\t" << address << "\nworkSchedule\t" << workSchedule << endl;
	}

void library::CreateLibrary(library &lib)
{
	lib.name = "Rivne Regional Universal Scientific Library";
	lib.booksCount = 10;
	lib.director = "Valentyna Petrivna Yaroschuk";
	lib.address = "33028, Rivne, Sq. Korolenko, 6";
	lib.workSchedule = "\t9:00=19:00; \nSunday:\t\t\t9:00 = 18:00;\n\t\t\tDay off is friday. ";
	lib.history = "Rivne Regional Universal Scientific Library was founded in February 1940.";
	lib.ShowInfoLibrary();
}