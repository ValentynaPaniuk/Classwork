# include <iostream>
using namespace std;
int main()
{
	/************************************************************************
	int a, b, c;
	cout << "Enter A: " << endl;
	cin >> a;
	cout << "Enter B: " << endl;
	cin >> b;
	cout << "Enter C: " << endl;
	cin >> c;
	cout << "A+B+C= " << a + b + c << endl;
	//***********************************************************************
	*/

	float a1, b2, ser;
	cout << "Enter number 1" << endl;
	cin >> a1;
	cout << "Enter number 2" << endl;
	cin >> b2;
	ser = (a1 + b2) / 2;
	cout << "Avarage= " <<ser <<endl;

	//**********************************************************************

	float m, km;
	const int I= 1000;
	cout << "Enter km" << endl;
	cin >> km;
	m = I * km;
	cout << "Total yards=" << m <<" yards"<<endl ;

	//*********************************************************************

	int c1, c2, c3, c4, total;
	const float P1 = 10, P2 = 15, P3 = 20, P4 = 25;
	cout << "Enter number of product 1: " << endl;
	cin >> c1;
	cout << "Enter number of product 2: " << endl;
	cin >> c2;
	cout << "Enter number of product 3: " << endl;
	cin >> c3;
	cout << "Enter number of product 4: " << endl;
	cin >> c4;
	total = c1 * P1 + c2 * P2 + c3 * P3 + c4 * P4;
	cout << "It cost = " << total << "grn "<<endl;

	//******************************************************************
	int day;
	const int MINUTE = 1440;
	cout << "Enter the number of days: " << endl;
	cin >> day;
	cout << "Total minutes in days:  " << day * MINUTE << endl;
	//*******************************************************************

	float suma;
	const float KDOL = 26, KEVRO = 29, KRUB = 0.35;
	cout << "****EXCHANGER****" << endl;
	cout << "KURS DOL: " <<KDOL <<endl;
	cout << "KURS EVRO: " <<KEVRO <<endl;
	cout << "KURS RUB: " <<KRUB <<endl;
	cout << "Enter SUMA:" << endl;
	cin >> suma;
	float total1=suma/KDOL, total2=suma/KEVRO, total3=suma/KRUB;
	cout << " Total DOLARS: " << total1 << "\n Total EVRO: " << total2 << "\n Total RUB: " << total3 << endl;

	//******************************************************************
	






	system("pause");
	return 0;
}