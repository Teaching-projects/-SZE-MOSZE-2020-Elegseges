#include <iostream>
#include <string>
#include "Player.h"
#include "Attack.h"
using namespace std; 

int main() {
	Attack result;
	string name;
	int hp, dmg;

	//Első játékos feltöltése
	cout << "Name: ";
	cin >> name;
	cout << "Hp: ";
	cin >> hp;
	cout << "Dmg: ";
	cin >> dmg;
	Player* a = new Player(name, hp, dmg);
	
	//Második játékos feltöltése
	cout << "Name: ";
	cin >> name;
	cout << "Hp: ";
	cin >> hp;
	cout << "Dmg: ";
	cin >> dmg;
	Player* b = new Player(name, hp, dmg);


	a->print();
	b->print();
	
	result.atck(*a, *b);	
	return 0;
}
