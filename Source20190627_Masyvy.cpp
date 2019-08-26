# include <iostream>
# include <ctime>
# include <conio.h>
using namespace std;
int main()
{
	srand( time(NULL));
	/*
	////////////////////////////////////////////////
	int days[7];
	int sum = 0;
	cout << "Address: "<<days<<endl;
	
	cout[0] = 27;
	cout[1] = 28;
	cout[2] = 24;
	cout[3] = 26;
	cout[4] = 21;
	cout[5] = 29;
	cout[6] = 32;
	

	for (int i = 0; i < 7; i++)
	{
		cout << "Enter temperature for day number "<<i<<endl;
		cin >> days[i];
	}
	cout << "---------------------------------------" << endl;
	for (int i = 0; i < 7; i++)
	{
	   sum += days[i];
	}
	cout << "SUM= " << sum << endl;
	sum = sum / 7;
	cout << "Average temperature= " << sum << endl;
	
	//////////////////////////////////////////////////////////////////

	int a[10];
	int dob = 1;
	for (int i = 0; i < 10; i++) {
		cout << "Enter number " << i << endl;
		cin >> a[i];
		cout << "Number="<<a[i] << endl;
		dob *= a[i];
	}
	cout << "DOB= " <<dob<< endl;
	cout << "=============================" << endl;
	cout << endl;
	

	////////////////////////////////////////////////////////////////
	int a1[7], sum_min=0, sum_plus=0;
	for (int i = 0; i < 7; i++) {
		a1[i] = rand() % 10-5;
		cout << "Number "<< i<<" = "<< a1[i] << endl;
		if (a1[i] < 0)
		{
			sum_min++;
		}
		else if (a1[i] > 0)
		{
			sum_plus++;
		}
	}
	cout <<"The number of negative numbers: "<<sum_min<<endl;
	cout <<"The number of positive numbers: "<<sum_plus<<endl;
	cout << "=============================" << endl;
	cout << endl;

	///////////////////////////////////////////////////////////////
	int a2[7], sum_parne = 0;
	for (int i = 0; i < 7; i++) 
	{
		a2[i] = rand() % 10;
		cout << "Number " << i << " = " << a2[i] << endl;
		if (i%2==0)
		{
			sum_parne += a2[i];
		}
		
	}
	cout << "The sum of even numbers: " << sum_parne << endl;
	cout << "=============================" << endl;
	cout << endl;

	////////////////////////////////////////////////////////////

	int a3[7];
	for (int i = 0; i < 7; i++)
	{
		a3[i] = rand() % 10-5;
		cout << "Number " << i << " = " << a3[i] << endl;
		if (a3[i]<0)
		{
			a3[i] *= -1;
		}
		cout << "Modul = " << i << " = " << a3[i] << endl;

	}
	cout << "=============================" << endl;
	cout << endl;
	///////////////////////////////////////////////////////
	*/

	/*Дано одновимірний масив. Знайти найбільший та найменший елементи масиву та поміняти їх у масиві місцями*/

	const int n = 7;
	int a4[n];
	int max, min, imax, imin;
	//-----------вивід масива на екран
	cout << " **** masyv a4[n] ****  " << n << endl;
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		a4[i] = rand() % 10;
		cout << a4[i] << "   ";
	//------------------визначення максимального і мінімального елементів масива і їх індексів
		max = min = a4[0];
		imax = imin = 0;
		for (int i = 1; i < n; i++)
		{
			if (a4[i] > max)
			{
				max = a4[i];
				imax = i;

			}
			else if (a4[i] < min)
			{
				min = a4[i];
				imin = i;
			}
		}
	}
			
	
//------------------------Перестановка max і min елементів
		a4[imin] = max;
		a4[imax] = min;

//----------------------Вивід max, min, imax, imin
	
	cout << "\n \t MAX=  "<<max<<" min= "<< min << endl;
	cout << "\t imax= "<<imax+1<<" imin= "<< imin+1 << endl;
	cout << endl;
//-----------------------------Вивід зміненого масиву a4[n]
	for (int i = 0; i < n; i++)
	{
		cout << a4[i] << "   ";
	}
	cout << "\n**********************************************" << endl;
	cout << endl;
	cout << endl;
	//////////////////////////////////////////////////////////////////////////////////////////////////
/*Дано одновимірний масив. Знайти суму елементів з непарними індексами.*/
	const int k = 7;
	int sum = 0;
	int a5[k];
	//-----------вивід масива на екран
	cout << " **** masyv a5[k] ****  " << k << endl;
	cout << endl;
	for (int i=0; i < k; i++)
	{		a5[i] = rand() % 10;
		cout << a5[i] << "   ";

		if (i % 2 != 0)
		{
			sum += a5[i];
			
		}

	}
	
	cout << "\nAmount of odd items= " << sum << endl;
	cout << "\n**********************************************" << endl;
	cout << endl;

	/* Дано одновимірний масив. Поміняти місцями перший елемент з другим, третій з четвертим, і т.д. Вивести змінений масив на екран. 	*/


	const int j = 8;
	int a6[j];
	//-----------вивід масива на екран
	cout << " **** masyv a5[k] ****  " << j << endl;
	cout << endl;
	for (int i = 0; i < j; i++)
	{
		a6[i] = rand() % 10;
		cout << a6[i] << "   ";
				
	}
	//-----------Поміняти місцями перший елемент з другим
	cout << endl;
	for (int i = 0; i<j; i+=2)
	{
		int temp = a6[i];
		a6[i] = a6[i+1];
		a6[i+1] = temp;
		
	}
	cout << endl;
 //------------Вивести змінений масив на екран.

	for (int i = 0; i < j; i++)
	{
		cout << a6[i] << "   ";
	}
	cout << "\n**********************************************" << endl;
	cout << endl;
	//-----------вивід масива на екран

	system("pause");
	return 0;
}