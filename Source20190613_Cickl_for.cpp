# include <iostream>
# include <ctime>
using namespace std;
int main()
{
	srand(unsigned(time(NULL)));

	/*

	//int i = 10;
	for (int i = 0; i <= 10; i++)
	{
		cout<<"I= "<<i<<endl;
		if (i == 5)
		{
			cout << "Break!" << endl;
			//break;
			continue;
		}
	}
	///////////////////////////////////////////////////////////////////////////
	int x=0, sum = 0;

	for (int k = 1; k <= 5; k++)
	{
		cout <<"Enter number "<<k<<":"<<endl;
		cin >> x;
		if (x < 50 && x % 4 == 0)
		{
			sum += x;
		}
	}
	cout << "SUMA CHYSEL KRATNYH 4 I MENSHE 50: "<<sum << endl;
	//////////////////////////////////////////////////////////////////////////
	int k1= 1, x1=0,sum1=0;
	while (k1 <= 5)
	{
		cout << "Enter number " << k1 << ":" << endl;
		cin >> x1;
		if (x1 < 50 && x1 % 4 == 0)
		{
			sum1 += x1;
		}
		k1++;
	}
	cout << "SUMA CHYSEL KRATNYH 4 I MENSHE 50: " << sum1 << endl;
	/////////////////////////////////////////////////////////////////////////////

	int k2 = 1, x2 = 0, sum3 = 0;
	do
	{
		cout << "Enter number " << k2 << ":" << endl;
		cin >> x2;
		if (x2 < 50 && x2 % 4 == 0)
		{
			sum3 += x2;
		}
		k2++;

	} while (k2 <= 5);
	cout << "SUMA CHYSEL KRATNYH 4 I MENSHE 50: " << sum3 << endl;

	///////////////////////////////////////////////////////////////////////////////
	*/

	int k3 = 1,  number = 0, sum4 = 0, dob = 1;
	for (k3; k3 <= 10; k3++)
	{
		number = rand() % 17;
		cout << "Number= "<< number << endl;
		sum4 += number;
		if (number != 0)
		{
			dob *= number;
		}
	}
	cout<<"The sum of numbers is equal to: "<<sum4 << endl;
	cout<<"The product of numbers is equal to: " <<dob << endl;
	/////////////////////////////////////////////////////////////////////////////////////////

	int k4 = 0, c = 0;
	for (k4; c != 2; k4++)
	{
		c = rand()%10;

		cout << c << "\t";
	}
	cout <<"\n"<< "2 zyavylosia z: " << k4 <<endl;

	///////////////////////////////////////////////////////////////////////////////////


	system("pause");
	return 0;

}