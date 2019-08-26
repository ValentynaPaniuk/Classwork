# include <iostream>
# include <ctime>
using namespace std;
int main()
{
	srand(unsigned(time(NULL)));
	setlocale(LC_ALL, "ru");
	

	int const k = 10;
	int Array[k];
	for (int i = 0; i < k; i++)
	{
		Array[i] = rand() % 10;
	}


//================================================================================================


	cout << "BEFORE****************************************************************" << endl;
	cout << "Array= " << endl;
	for (int i = 0; i < k; i++)
		{
			cout << Array[i] << "   ";
		}
	cout << endl;
	cout << "****************************************************************" << endl;

	cout << endl;
	cout << endl;
//=====================================================================================================
	// Алгоритм сортування бульбашкою (З меншого до більшого)
	for (int i = k - 1; i >= 1; i--) {
		for (int j = 0; j < i; j++) 
		{
			if (Array[j] > Array[j + 1]) 
			{
				int tmp = 0;
				tmp = Array[j];
				Array[j] = Array[j + 1];
				Array[j + 1] = tmp;
			}
		}
	}
	//=====================================================================================================
	cout << "AFTER****************************************************************" << endl;
	for (int i = 0; i < k; i++)
	{
		cout << Array[i] << "   ";
	}
	cout << endl;
	cout << "****************************************************************" << endl;
	cout << endl;
	cout << endl;
	//**************************************************************************************************************************
	/*Дано масив А. Скопіювати елементи масиву А у масив В. */

	int const k1 = 10;
	int Array1[k1];
	int Array2[k1];
	
	
	for (int i=0 ; i < k1; i++)
	{
		Array1[i] = rand() % 10;
		Array2[i] = Array1[i];
	}
	

	cout << "Array 1 = " << endl;


	for (int i=0 ; i < k1; i++)
	{
		cout << Array1[i] << "   ";
	}
	cout << endl;
		
	cout << "Array 2 = " << endl;


	for (int i=0; i < k1; i++)
	{
		cout << Array2[i] << "   ";
	}
	cout << endl;
	cout << endl;

	//========================================================================
	cout << "*******************************************************" << endl;
	cout << endl;
	cout << endl;
	/*Дано 2 одновимірних масиви(А і В) по К елементів кожен. Утворити третій масив(С) із К * 2 елементів, 
	переписуючи у нього спочатку всі елементи масиву А по порядку, а потім елементи масиву В.  */

	
	const int k2 = 10, mn = 2;
	int Arr1[k2], Arr2[k2], Arr3[k2*mn];
	
	for (int i = 0; i < k2; i++)
	{
		Arr1[i] = rand() % 10;
	}
	for (int i = 0; i < k2; i++)
	{
		Arr2[i] = rand() % 10;
	}
	cout << "Array 1 => " << endl;
	for (int i = 0; i < k2; i++)
	{
		cout << Arr1[i]<<"   ";

	}
	cout << endl;
	cout << "Array 2 => " << endl;
	for (int i = 0; i < k2; i++)
	{
		cout << Arr2[i] << "   ";

	}

	int iterator = 0;
	for (int i = 0; i < 20; i++)
	{
		if (i < 10)
		{
			Arr3[i] = Arr1[i];
		}
		else 
		{
			Arr3[i] = Arr2[iterator];
			iterator++;
		}
		
	}
	cout << endl;
	cout << endl;

	cout << "Array 3 => " << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << Arr3[i] << "   ";
	}

	for (int i = 20 - 1; i >= 1; i--) {
		for (int j = 0; j < i; j++)
		{
			if (Arr3[j] > Arr3[j + 1])
			{
				int tmp = 0;
				tmp = Arr3[j];
				Arr3[j] = Arr3[j + 1];
				Arr3[j + 1] = tmp;
			}
		}
	}
	cout << endl;
	cout << "Array SORTING 4 => " << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << Arr3[i] << "   ";
	}
	  
	cout << "\n*******************************************************" << endl;
	cout << endl;
	cout << endl;
	cout << endl;

/*Розділити масив на два масива*/

	int const k3 = 10;
	int Arr5[k3], Arr6[k3/2], Arr7[k3/2];
	for (int i = 0; i < k3; i++)
	{
		Arr5[i] = rand() % 10;
	}
	cout << "Array 5 => " << endl;
	for (int i = 0; i < k3; i++)
	{
		cout << Arr5[i] << "  ";
	}

	

	for (int j = 0; j < k3 / 2; j++)
	{
		Arr6[j] = Arr5[j];
		
	}
	cout << endl;

	cout << "Array 6 => " << endl;
	for (int j = 0; j < k3 / 2; j++)
	{
		cout<< Arr6[j]<<"  ";
	}
	cout << endl;


	for (int j = 5; j < k3; j++)
	{

		Arr7[j] = Arr5[j];
	}

	for (int j = 5; j < k3; j++)
	{

		cout << Arr7[j] << "  ";
	}

	cout << "\n*******************************************************" << endl;
	cout << endl;
	cout << endl;
	cout << endl;


	/*Утворити одновимірний масив розміром 30. Заповнити його числами, які є степенями 2: (1, 2, 4, 8, 16, ... ).
	Вивести елементи масиву на екран у прямому і оберненому порядку.  */

	int const k5 = 30;
	int x=2, y=1;
	int Arr8[k5], Arr9[k5];
	int l = 0;
	for (int i = 0; i < k5; i++)
	{
			Arr8[i] = x * y;
			y *= 2;
	}
	
	cout << "Array 8= " << endl;
	for (int i = 0; i < k5; i++)
	{
		cout<< Arr8[i]<<"   ";
	}
	cout << endl;

	for (int i = k5 - 1; i >= 1; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (Arr8[j] > Arr8[j + 1])
			{
				int tmp = 0;
				tmp = Arr8[j];
				Arr9[j] = Arr8[j + 1];
				Arr9[j + 1] = tmp;
			}
		}
	}
	cout << endl;
	cout << "SORTING   \">\"  Array 8= " << endl;
	for (int i = k5 - 1; i >= 1; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (Arr8[j] < Arr8[j + 1])
			{
				int tmp = 0;
				tmp = Arr8[j];
				Arr8[j] = Arr8[j + 1];
				Arr8[j + 1] = tmp;
			}
		}
	}

	cout << endl;
	
	for (int i = 0; i < k5; i++)
	{
		cout << Arr8[i] << "   ";
	}
	   	 
	cout << endl;
	cout << endl;
	cout << endl;
	//*****************************************************************************
	cout << "SORTING \" < \" Array 8= " << endl;
	for (int i = k5 - 1; i >= 1; i--) {
		for (int j = 0; j < i; j++)
		{
			if (Arr8[j] > Arr8[j + 1])
			{
				int tmp = 0;
				tmp = Arr8[j];
				Arr8[j] = Arr8[j + 1];
				Arr8[j + 1] = tmp;
			}
		}
	}

	//********************************************************************************

	for (int i = 0; i < k5; i++)
	{
		cout << Arr8[i] << "   ";
	}

	cout << endl;
	





	system("pause");
	return 0;
}