#include <iostream>

#include "Hero.h"

using namespace std;

Hero::Hero(int _health)
{
	health = _health;
	vamp = 4;
	were = 3;
	zom = 2;
	weapon = 2;
}

void Hero::killEnemies()
{
	if (vamp == 0)
	{
		if (were == 0)
			zom = zom - 1;
		else
			were = were - 1;
	}
	else
		vamp = vamp - 1;
}

bool Hero::endEncounter()
{
	if (vamp == 0 && were == 0 && zom == 0)
	{
		cout << "======================================================================================\n";
		cout << "======================================================================================\n";
		cout << "Victory!! All monsters are dead! You survived with " << health << "Hp left." << endl;

		return true;
	}

	if (health <= 0)
	{
		cout << "======================================================================================\n";
		cout << "======================================================================================\n";
		cout << "GAME OVER!! The hero is dead" << endl;

		return true;
	}

	else
		return false;

}

int Hero::getHealth()
{
	return health;
}

int Hero::getWeapon()
{
	return weapon;
}

void Hero::setHealth(int _health)
{
	health = _health;
}

void Hero::printInfo()
{
	cout << "======================================================================================\n";
		cout << "You are surrounded by ";
		if (vamp != 0)
			cout << vamp << " vampires, " << were << " werewolves, and " << zom << " zombies." << endl;
		else if (were != 0)
			cout << were << " werewolves and " << zom << " zombies." << endl;
		else
			cout << zom << " zombies." << endl;


		cout << "The hero's Health is: " << health << endl;
	
}

void Hero::chooseWeapon(int bullets, int arrows)
{

	cout << "What weapon does the hero want to use:\n1. Pistol(" << bullets << 
		" bullets left)\n2. Knife\n3. Bow(" << arrows << " arrows left)\n";

	cout << "Choice: ";
	cin >> weapon;
	cout << "\n";
}