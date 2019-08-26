#include <iostream>
# include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	
	/*
	Гра у кості. Гравці(комп’ютер і людина) кидають по 2 кубики. У кого сума на кубиках більша, той заробляє 1 бал. Якщо на кубиках дубль
	(подвоєння, тобто дві четвірки і т.і.), то гравець додатково заробляє 2 бали. Гра закінчується при наборі одним із гравцем N балів.  
	*/
	///////////////////////////////////////////////////////////

		srand(unsigned(time(NULL)));

		char playerName[32];
		char playerAI[] = "Vatson";
		int playerScore = 0;
		int aiScore = 0;
		int playerDiceOne = 0;
		int playerDiceSecond = 0;
		int playerDiceSum = 0;
		int aiDiceOne = 0;
		int aiDiceSecond = 0;
		int aiDiceSum = 0;
		int n = 0;
		bool exit = false;


		cout << "<<<=============================Dice Game===========================>>>" << endl;
		cout << "===                                                              ===" << endl;
		cout << "===                  _______                                    ===" << endl;
		cout << "===                 /______/|                                    ===" << endl;
		cout << "===                |       ||                                    ===" << endl;
		cout << "===           _____|__ *   ||                                    ===" << endl;
		cout << "===          /_______/|_ __|/                                    ===" << endl;
		cout << "===         |   *   | |                                          ===" << endl;
		cout << "===         | *   * | |                                          ===" << endl;
		cout << "===         |_______|/                                           ===" << endl;
		cout << "===                                                              ===" << endl;
		cout << "<<<=============================Dice Game===========================>>>" << endl;

		cout << "Enter your name = = = = >>>" << endl;
		cin >> playerName;
		cout << "Enter scores to win! " << endl;
		cin >> n;
		cout << playerName << " VS " << playerAI << endl;

		cout << "---------------->>>Fight<<<-----------------" << endl;

		while (!exit) {
			cout << playerAI << " $$$$$$ throw ... " << endl;
			system("pause");
			aiDiceOne = rand() % 6 + 1;
			aiDiceSecond = rand() % 6 + 1;
			aiDiceSum = aiDiceOne + aiDiceSecond;
			cout << "First = " << aiDiceOne << " Second = " << aiDiceSecond << " Sum = " << aiDiceSum << endl;

			cout << playerName << " ****** throw ... " << endl;
			system("pause");
			cout << endl;
			cout << playerName << " throw ... " << endl;
			playerDiceOne = rand() % 6 + 1;
			playerDiceSecond = rand() % 6 + 1;
			playerDiceSum = playerDiceOne + playerDiceSecond;
			cout << "First = " << playerDiceOne << " Second = " << playerDiceSecond << " Sum = " << playerDiceSum << endl;

			if (aiDiceOne == aiDiceSecond)
			{
			aiScore += 2;
			}
			else if (playerDiceOne == playerDiceSecond)
			{
				playerScore+=2;
			}
			else if (aiDiceSum > playerDiceSum) 
			{
				aiScore++;
			}

			else if (aiDiceSum < playerDiceSum) 
			{
				playerScore++;
			}

			
			
			else {
				cout << " DRAW " << endl;
			}
			



			cout << "###################Throw result##############" << endl;
			cout << playerAI << " Score = " << aiScore << endl;
			cout << playerName << " Score = " << playerScore << endl;
			cout << "-----------------------------------------------------\n\n";


			if (playerScore == n) {
				exit = true;
			}
			else if (aiScore == n) {
				exit = true;
			}

		}

	////////////////////////////////////////////////////////


	system("pause");
	return 0;
}