#include "player.h"
#include <iostream>

using namespace std;



int main(int argc, char* argv[]) {
	Player player1(argv[1], atoi(argv[2]), atoi(argv[3]));
	Player player2(argv[4], atoi(argv[5]), atoi(argv[6]));

	cout << player1 << player2 << endl;
	int i = 0;
	while (player1.isAlive() && player2.isAlive()) {
		if (i % 2 == 0) {
			player1.atck(player2);
			cout << player1 << player2 << endl;
		}
		else {
			player2.atck(player1);
			cout << player1 << player2 << endl;
		}
		i++;
	}
	if (!player1.isAlive()) {
		cout << player2.getName() << " wins\n";
	}
	else {
		cout << player1.getName() << " wins\n";
	}
	return 0;
}