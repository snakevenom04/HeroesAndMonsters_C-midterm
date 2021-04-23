#include <iostream>

#include "Vampire.h"

using namespace std;

Vampire::Vampire(string _name) : Monster{ _name, 15, 15 }{}

void Vampire::printInfo()
{
	cout << "Vampire " << getName() << " (Hp: " << getHealth() << ") (Dmg: " << getAttack() << ") is attacking the hero!" << endl;
}

string Vampire::getType()
{
	return "Vampire";
}
