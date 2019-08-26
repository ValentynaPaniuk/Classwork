# include <iostream>
using namespace std;
int main()
{

	int a, b;
	cin >> a >> b;
	
	if (a > b)
	{
		cout << "Number" << a << ">" << "Number" << b << endl;
	}
	else if (a < b)
	{
		cout << "Number"<<a <<"<"<<"Number"<<b << endl;
	}
	else if (a == b)
	{
		cout << "Number" << a << "=" << "Number" << b << endl;
	}

	   	  

	system("pause");
	return 0;
}