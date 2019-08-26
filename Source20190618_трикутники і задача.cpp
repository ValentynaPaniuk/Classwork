# include <iostream>
using namespace std;
int main()
{
 ////////////////////////////////////////////////////////////////
	/*for (int i = 0; i < 5; i++)
	{
		cout << "*";
		for (int j = 0; j < 5; j++)
		{
			cout << "#";
		}
		cout << endl;
	}
	
	////////////////////////////////////////////////////////////////////



	for (int k = 0; k < 5; k++)
	{
		cout << "@";
		for (int k1=0; k1<5; k1++)
		{
			if (k == 0)
			{
				cout << " ";
			}
			else if (k == 1)
			{
				cout << "*";
			}
			else if (k == 2)
			{
				cout << "**";
			}
			else if (k == 3)
			{
				cout << "***";
			}
			else if (k == 4)
			{
				cout << "****";
			}


		}
		cout << endl;
	}

	/////////////////////////////////////////////////////////



	for (int t = 0; t < 5; t++)
	{
		for (int t1 = 0; t1 < t; t1++)
		{
			cout << "*";
		}
		cout << endl;
	}
/////////////////////////////////////////////////////////////////////////////////
	cout << endl;

	for (int t = 15; t > 0; t--)
	{
		for (int t1 = 0; t1 < t; t1++)
		{
			cout << "*";
		}
		cout << endl;
	}

	//////////////////////////////////////////////////////////////////////////////////////////

	cout << endl;
	*/


	for (int x = 15; x >0; x--)
	{
		for (int x1 = 0; x1 <15; x1++)
		{
			if (x1==0 && x<15)
			{
				cout << " ";
			}

			cout << "+";
		
		}
		
		cout <<"*"<<endl;

	}

/////////////////////////////////////////////////////////////////////////////
	/*

	float money = 0, procent = 0, month, arrived = 0, arrived_procent=0;
	cout << "Enter the amount of money:" << endl;
	cin >> money;
	cout << "Enter procent in the year:" << endl;
	cin >> procent;
	float procent_month = procent / 12;
	cout<<"Procent in the month: "<<procent_month<<endl;
	cout << "Enter the period (in the month): " << endl;
	cin >> month;
	cout << "*******************" << endl;
	
	for (int y = 0; y < month; y++)
	{
		cout << "!";
		arrived = (money * procent_month) / 100;
		cout << "Arrived: " <<arrived<< endl;
		arrived_procent += arrived;
		cout << "Arrived_procent: " << arrived_procent << endl;

	}
	

/////////////////////////////////////////////////////////////////////////////////////

*/












	system("pause");
	return 0;
}