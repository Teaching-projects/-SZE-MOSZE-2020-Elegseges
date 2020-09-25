#include <iostream>
#include <string>
#include <fstream>
#include "Player.h"

Player::Player(string name, int HP, int DMG) : Name(name), Hp(HP), Dmg(DMG) {}

string Player::getName() const
{
	return Name;
}
int Player::getHp() const
{
	return Hp;
}
int Player::getDmg() const
{
	return Dmg;
}

void Player::atck(Player& target) const {
	if (target.Hp < this->Dmg) {
		target.Hp = 0;
	}
	else {
		target.Hp -= this->Dmg;
	}
}

bool Player::isAlive() const {
	return this->Hp > 0;
}

ostream& operator<<(ostream& os, const Player& obj) {
	return os << obj.getName() << ": HP: " << obj.getHp() << " DMG: " << obj.getDmg() << endl;
}

Player Player::parseUnit(const string& name) {
	string playerName;
	ifstream file;
	file.open(name);
	if (file.fail()) cout << "Open failed";
	else
	{
		string separator = " : ";
		string playerHp, playerDmg, row, part;
		while (getline(file, row)) {
			if (row.find("name") != string::npos) {
				playerName = row.substr(row.find(separator) + 1);
				playerName = playerName.substr(playerName.find('"') + 1, playerName.find_last_of('"') - 3);
			}
			else if (row.find("hp") != string::npos) {
				part = row.substr(row.find(separator) + 3);
				playerHp = part.substr(0, part.find(","));
			}
			else if (row.find("dmg") != string::npos) {
				playerDmg = row.substr(row.find(separator) + 3);
			}

		}
		file.close();
		return Player(playerName, stoi(playerHp), stoi(playerDmg));
	}
}
