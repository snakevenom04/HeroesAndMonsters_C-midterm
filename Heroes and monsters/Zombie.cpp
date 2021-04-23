#include <iostream>

#include "Zombie.h"

using namespace std;

Zombie::Zombie(string _name) : Monster{ _name, 30, 30 } {}

void Zombie::printInfo()
{
	cout << "Zombie " << getName() << " (Hp: " << getHealth() << ") (Dmg: " << getAttack() << ") is attacking the hero!" << endl;
}

string Zombie::getType()
{
	return "Zombie";
}
