#include <iostream>

#include "Werewolf.h"

using namespace std;

Werewolf::Werewolf(string _name) : Monster{ _name, 20, 20 } {}

void Werewolf::printInfo()
{
	cout << "Werewolf " << getName() << " (Hp: " << getHealth() << ") (Dmg: " << getAttack() << ") is attacking the hero!" << endl;
}

string Werewolf::getType()
{
	return "Werewolf";
}
