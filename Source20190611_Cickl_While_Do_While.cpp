#include <iostream>
using namespace std;
int main()
{
/*///////////////////////////////////////////////////////////////////////////////////////////////////////
	
int i=0;
while (i<10) 
	{

		cout << "While I-> "<<i<< endl;
		i++;//increment
	}
////////////////////////////////////////////////////////////////////////////////////////////////////////

int b=0;
do 
{
cout<<"Do B-> "<<b<<endl;
b++;
}
while (b<10);

////////////////////////////////////////////////////////////////////////////////////////////////////////

int k=1;
while (k<100)
{
cout<<k<<endl;
k++;
}
//////////////////////////////////////////////////////////////////////////////////

int d=0;
while (d>0 && d<200)
{
if (d%2==0)
	{
		cout<<d<<endl;
	}
d++;
}

////////////////////////////////////////////////////////////

int count=5, t=0, c, sum=0;
while (t<count)
{
cout << "Enter number= " << endl;
cin>>c;
t++;
	if (c % 2 == 0)
	{
		sum += c;
	}
}
cout << "SUMMA= " << sum << endl;
//////////////////////////////////////////////////////////////

int counter = 10, l = 1, r = 0, summa = 0;
float average=0;
while (l <= counter)
{
	cout << "Enter number= "<< l << endl;
	cin >> r;
	l++;
	summa += r;
	average = summa / l;
}

cout << "SUMMA= " <<summa<< endl;
cout << "AVERAGE=" <<average<< endl;
///////////////////////////////////////////////////////////////



int a = 1, a1=0, count1 =0, kvadr=1, summa_kvadr=0, p=0;
cout << "Enter " << endl;
cin >> count1;
do 
{
	cout << "Enter number"<<a<<":"<< endl;
	cin >> a1;
	a++;
	
	if (a1 % 2 != 0)
	{
		cout <<"A1="<< a1 << endl;
		kvadr = a1 * a1;
		cout <<"Kvadr= "<< kvadr << endl;
		summa_kvadr += kvadr;
	}
	
} 
while (a <= count1);

cout << "SUMMA KVADRATIV NEPARHYH CHYSEL: "<< summa_kvadr << endl;
cout << endl;

///////////////////////////////////////////////////////////////////////////////////

int d1 = 100, d2 = 0;
do 
{
	cout << d1 << "\t";
	d1--;
} 
while (d1 > d2);
cout << endl;

////////////////////////////////////////////////////////////////////////////////////
int number1 = 1, number2 = 7, sum2=0, number3;
do 
{
	cout << "Enter number" << number1 <<":"<<endl;
	cin >> number3;
	number1++;
	sum2 += number3;

} while (number1 <= number2);
cout << "SUMMA= "<<sum2<<endl;

//////////////////////////////////////////////////////////////////////////////////////
cout << endl;
*/

int sum3 = 0, x2 = 0, w=0, c1=1;
cout << "Enter the permissible weight: " << endl;
cin >> x2;

while (sum3<x2)
{
	cout << "Enter the weight of the body: " << endl;
	cin >> w;
	sum3 += w;
	c1++;
}
cout << "Will suffer:" <<c1<< endl;
////////////////////////////////////////////////////////////////////////////////

	system("pause");
	return 0;
}