#pragma once
#include <string>

using namespace std;

struct Menu
{
	int choice;
	bool exit = false;
	void MakeChoice();
	void ShowChoice();

}