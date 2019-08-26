# include <iostream>
using namespace std;
int main()
{
	/*
	double a = 65.777;
	cout << "a=" << (int)a << endl; // Yavne pryvedennia danyh

	int b=200,c;
	c = a;
	cout << "c=" << c << endl; // Neyavne pryvedennia danyh

	cout << "bool=" << (bool)a << endl;
	cout << "char=" << (char)a << endl;
	cout << "char=" << (char)65<< endl;
	cout << "char=" << (char)66<< endl;
	cout << "char=" << (char)67<< endl;
	cout << a/b<< endl;
	
	//************************************************************************

	float km, km_m;
	const int m = 100, h = 0;
	
	cout << "Enter the number of kilometers: " << endl;
	cin >> km;
	if (km > h)
	{
		km_m = km * m;
		cout << "Together meters is equal to: " << km_m << " meters" << endl;
	}
	else
	{
		cout << "Not right introduced kilometers" << endl;
	}
	//***********************************************************************
	
	float k;
	cout<<"Enter number"<<endl;
	cin >> k;
	cout <<"Square number of: "<< k * k <<endl;
	//************************************************************
	 
	float price, minute, cost;
	cout << "Enter talk time:" << endl;
	cin >> minute;
	if (minute > 0)
	{
		cout << "Enter price of one minute:" << endl;
		cin >> price;
		if (price > 0)
		{

			cost = price * minute;
			cout << "The cost of conversation is: " << cost << " grn" << endl;
		}
		else
		{
			cout << "Not right introduced price" << endl;
		}
	}
	
	else
		{
		cout << "Not right introduced minute" << endl;
		}
	//*************************************************************

	float height, width, length, pl_s, pl_p, pr1, pr2, pr3;
	const int KL = 2;
	cout << "Enter height,width,length of the room: " << endl;
	cin >> height;
	cout << endl;
	cin >> width;
	cout << endl;
	cin >> length;
	cout << endl;
	pl_s = (length * width * KL) + (height*width*KL);
	pl_p = width * length;
	
	if (height > 0 || width > 0 || length > 0)
	{
		cout << "Enter the value of work: " << endl;
		cout << "Enter price meter square ceiling: " << endl;
		cin >> pr1;
		cout << "Enter price meter square wall: " << endl;
		cin >> pr2;
		cout << "Enter price meter square floor: " << endl;
		cin >> pr3;

		cout << "The cost of work is egual to: " << pl_s * pr2 + pl_p * pr1 + pl_p * pr3<<" grn"<<endl;

	}
	else
	{
		cout << "Not right introduced data" << endl;
	}
	//**************************************************************
	
	int x, y, z;
	cout << "Enter X =";
	cin >> x;
	cout << endl;
	cout << "Enter Y =";
	cin >> y;
	cout << endl;
	if (x != y)
	{
		z = x;
		x = y;
		y = z;
		cout << "X="<<x<<""<<"\t Y="<<y<< endl;
	}
	else
	{
		cout << "Number is the same" << endl;
	}

	//****************************************************

	float time;
	const float N = 18, N1=24, N2=0, M=6, D=10;
	cout << "Enter time: " << endl;
	cin >> time;
	if (time > M && time < D)
	{
		cout << "GOOD MORNING" << endl;
	}
	else if (time > D && time < N)
	{
		cout << "GOOD DAY" << endl;
	}
	else if (time>N && time<=N1 || time>N2 && time<M)
	{
		cout << "GOOD NIGHT" << endl;
	}
	else
	{
		cout << "Not correct enter time" << endl;
	}

	//*************************************************************************************
	float temp, od, temp_c=1, temp_f=2;
	cout << "Select a unit of measurement temperature:" << endl;
	cout << "1 - Celsius" << endl;
	cout << "2 - Fahrenheit" << endl;
	cin >> od;
	if (od == temp_c || od == temp_f)
	{
		cout << "Enter temperature:" << endl;
		cin >> temp;
		if (od == temp_c)
		{
			cout << "TF=TC*1.8+32=  " <<temp*1.8+32<< endl;
		}
		else if (od==temp_f)
		{
			cout << "TC=TF-32/1.8=  "<<(temp-32)/1.8<<endl;
		}
	}
	else
	{
		cout << "Not right made unit of measurement" << endl;
	}
	//*******************************************************************
	
	int x1, x2, x3,x4;
	cin >> x1 >> x2 >> x3;
	cout << "X1=   "<<x1<<"  X2=  "<<x2<<"  X3= " <<x3<< endl;
	if (x1 > x3) 
	{
		x4 = x3;
		x3 = x2;
		x2 = x1;
		x1 = x4;
		cout << "X1_=" << x1 <<"   X2_=" << x2 <<"   X3_ =" << x3 << endl;
	}
	else
	{
		cout << "X1<=X3" << endl;
	}
	*/




	system("pause");
	return 0;

}
