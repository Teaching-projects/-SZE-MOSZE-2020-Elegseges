#ifndef ATTACK_H
#define ATTACK_H
#include "Player.h"

class Attack{
public:
	Attack();
	~Attack();
	void atck(Player, Player);
	void won(Player, Player);
	

private:
	Player* playerList;
};
#endif // !ATTACK_H
