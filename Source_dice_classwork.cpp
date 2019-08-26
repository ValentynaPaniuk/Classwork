#include <iostream>
#include <ctime>

using namespace std;

int main() {
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
	cout << "===                                                                 ===" << endl;
	cout << "===                                                                 ===" << endl;
	cout << "===                                                                 ===" << endl;
	cout << "===                                                                 ===" << endl;
	cout << "===                                                                 ===" << endl;
	cout << "===                                                                 ===" << endl;
	cout << "<<<=============================Dice Game===========================>>>" << endl;

	cout << "Enter your name = = = = >>>" << endl;
	cin >> playerName;
	cout << "Enter scores to win! " << endl;
	cin >> n;
	cout << playerName << " VS " << playerAI << endl;

	cout << "---------------->>>Fight<<<-----------------" << endl;

	while(!exit){
		cout << playerAI << " $$$$$$ throw ... " << endl;
		system("pause");
		aiDiceOne = rand() % 6 + 1;
		aiDiceSecond = rand() % 6 + 1;
		aiDiceSum = aiDiceOne + aiDiceSecond;
		cout << "First = " << aiDiceOne << " Second = " << aiDiceSecond << " Sum = " << aiDiceSum << endl;

		cout << playerName << " ****** throw ... " << endl;
		system("pause");

		cout << playerName << " throw ... " << endl;
		playerDiceOne = rand() % 6 + 1;
		playerDiceSecond = rand() % 6 + 1;
		playerDiceSum = playerDiceOne + playerDiceSecond;
		cout << "First = " << playerDiceOne << " Second = " << playerDiceSecond << " Sum = " << playerDiceSum << endl;

		if (aiDiceSum > playerDiceSum) {
			aiScore++;
		}
		else if (aiDiceSum < playerDiceSum) {
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

	system("pause");
	return 0;
}