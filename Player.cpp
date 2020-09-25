#include "player.h"

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
	cout << Name << " -> " << target.Name << endl;

	if (target.Hp < Dmg) {
		target.Hp = 0;
	}
	else {
		target.Hp -= Dmg;
	}
}

bool Player::isAlive() const {
	return Hp > 0;
}

ostream& operator<<(ostream& os, const Player& obj) {
	return os << obj.getName() << ": HP: " << obj.getHp() << " DMG: " << obj.getDmg() << endl;
}
