# include <iostream>
# include <ctime>
using namespace std;
int main()
{
	srand(unsigned(time(NULL)));
	int cub_man = 0, cub_comp = 0, cub_man1=0, cub_comp1=0, i = 1, j = 0,k=0,h=0, happy=5;
	char b = ' ';
	system("cls");
	cub_man = rand() % 6;
	cout << "CUB_MAN: " << cub_man << endl;
	cub_comp = rand() % 6;
	cout << "CUB_COMP: " << cub_comp << endl;
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
		if (cub_man < cub_comp)
		{
			cout << "COMP THE BEST" << endl;
			for (i; k < happy && h < happy; i++)
			{
				cout << endl;
				cub_comp1 = rand() % 6;
				cout << "Computer throws the cube: " << i << " number: " << cub_comp1 << endl;
				cout << endl;

				cout << "MAN HAS TO THROW THE CUBE" << endl;
				cout << "Press any key to continue... " << endl;
				cin >> b;
				cout << b << endl;
				cout << endl;
				cout << endl;
				cub_man1 = rand() % 6;
				cout << "Man throws the cube: " << i << " number: " << cub_man1 << endl;


				
				if (cub_comp1 > cub_man1)
				{
					k++;
				}
				else if (cub_comp1 < cub_man1)
				{
					h++;
				}
				
				
				if (k < h)
				{
					cout << endl;
					cout << "*****************************************************************************" << endl;
					cout << "Computer has: " << h << "        Man nas: " << k << endl;
					cout << "THE WINNER IS COMPUTER" << endl;
					cout << "*****************************************************************************" << endl;
				}
				else if (k > h)
				{
					cout << endl;
					cout << "*****************************************************************************" << endl;
					cout << "Computer has: " << h << "       Man nas: " << k << endl;
					cout << "THE WINNER IS MAN" << endl;
					cout << "*****************************************************************************" << endl;
				}
				else if (k == h)
				{
					cout << endl;
					cout << "*****************************************************************************" << endl;
					cout << "Computer has: " << h << "       Man nas: " << k << endl;
					cout << "Throw cub again" << endl;
					cout << "*****************************************************************************" << endl;
				}
				

			}
		}

		
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
		else if (cub_man > cub_comp)
		{
			cout << "MAN THE BEST" << endl;
			for (i; k<happy && h<happy; i++)
			{
				cout << endl;
				cout << "MAN HAS TO THROW THE CUBE" << endl;
				cout << "Press any key to continue... " << endl;
				cin >> b;
				cout << endl;
				cout << b << endl;
				cub_man1 = rand() % 6;
				cout << "Man throws the cube: " << i << " number: " << cub_man1 << endl;
				cout << endl;
				cout << endl;
				cub_comp1 = rand() % 6;
				cout << "Computer throws the cube: " << i << " number " << cub_comp1 << endl;
				if (cub_comp1 > cub_man1)
				{
					k++;

				}
				else if (cub_comp1 < cub_man1)
				{
					h++;
				}

				
				if (k < h)
				{
					cout << endl;
					cout << "*****************************************************************************" << endl;
					cout << "Computer has: " << h << "        Man nas: " << k << endl;
					cout << "THE WINNER IS COMPUTER" << endl;
					cout << "*****************************************************************************" << endl;
				}
				else if (k > h)
				{
					cout << endl;
					cout << "*****************************************************************************" << endl;
					cout << "Computer has: " << h << "       Man nas: " << k << endl;
					cout << "THE WINNER IS MAN" << endl;
					cout << "*****************************************************************************" << endl;
				}
				else if (k == h)
				{
					cout << endl;
					cout << "*****************************************************************************" << endl;
					cout << "Computer has: " << h << "       Man nas: " << k << endl;
					cout << "Throw cub again" << endl;
					cout << "*****************************************************************************" << endl;
				}
				
				
			}
			


		}
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		else if (cub_man == cub_comp)
		{
			cout << "THROW THE CUB AGAIN" << endl;
		}
	
		


		





	system("pause");
	return 0;
}