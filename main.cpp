#include "Player.h"
#include <iostream>

using namespace std;



int main(int argc, char* argv[]) {
	try {
		if (argc == 3) {

			Player player1 = Player(Player::parseUnit(argv[1]));
			Player player2 = Player(Player::parseUnit(argv[2]));


			while (player1.isAlive() && player2.isAlive()) {

				player1.atck(player2);
				if (!player2.isAlive()) {
					std::cout << player1.getName() << " wins. " << "Remaining HP: " << player1.getHp() << "." << std::endl;
					break;
				}

				player2.atck(player1);
				if (!player1.isAlive()) {
					std::cout << player2.getName() << " wins. " << "Remaining HP: " << player2.getHp() << "." << std::endl;
					break;
				}
			}
		}
		else {
			std::cout << "Input error" << std::endl;
		}

	}
	catch (std::exception& e) {
		std::cout << "Input error, or the file does not exist" << std::endl;

	}
	return 0;
}
