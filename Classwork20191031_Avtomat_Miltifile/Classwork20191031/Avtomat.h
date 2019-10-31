#pragma once
# include <string>


using namespace std;


struct avtomat
{
	string name;
	double cost;
	double money;
	double reshta;

	double summa = 0;
	int number;
	
	void ShowInfo();
	void Counting();
	void Rest();
	void Profit();
};