#include "player.h"
#include <iostream>

using namespace std;



int main(int argc, char* argv[]) {
	Player player1(argv[1], stoi(argv[2]), stoi(argv[3]));
	Player player2(argv[4], stoi(argv[5]), stoi(argv[6]));

	cout << player1 << player2 << endl;
	while (player1.isAlive() && player2.isAlive()) {

		player1.atck(player2);
		cout << player1 << player2 << endl;
		if (!player2.isAlive()) {
			cout << player2.getName() << " died. " << player1.getName() << " wins." << endl;
			break;
		}

		player2.atck(player1);
		cout << player1 << player2 << endl;
		if (!player1.isAlive()) {
			cout << player1.getName() << " died. " << player2.getName() << " wins." << endl;
			break;
		}

	}
	return 0;
}