#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <iostream>

using namespace std;

class Player
{

public:

	Player(const string, const int, const int);
	string getName() const;
	int getHp() const;
	int getDmg() const;
	void atck(Player& target) const;
	bool isAlive() const;
	friend ostream& operator<<(ostream& os, const Player& obj);
	static Player parseUnit(const string& name);


private:
	const string Name;
	int Hp;
	const int Dmg;

};


#endif