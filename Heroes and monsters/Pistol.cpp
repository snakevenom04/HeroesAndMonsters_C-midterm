#include <iostream>

#include "Pistol.h"

using namespace std;

Pistol::Pistol(int _bullets):Weapon(10)
{
	bullets = _bullets;
}

int Pistol::getBullets()
{
	return bullets;
}

void Pistol::action(int health, string type)
{
	cout << "The hero shoots the " << type << "(Hp: " << health << ")\n";
	bullets = bullets - 1;
}