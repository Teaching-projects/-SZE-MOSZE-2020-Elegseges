#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>

using namespace std;

class Player{
public:
	Player(string name, int hp, int dmg);
	~Player();
	string getName()const;
	int getHp() const;
	int getDmg() const;
	void print() const;
	void setHp(int h);
	Player* getKovetkezo() const;
	void setKovetkezo(Player* kovetkezo);

private:
	string name;
	int hp, dmg;
	Player* kovetkezo;
};


#endif // !ATTACK_H
