#include <iostream>

#include "Bow.h"

using namespace std;

Bow::Bow(int _arrows):Weapon{20}
{
	arrows = _arrows;
}

int Bow::getArrows()
{
	return arrows;
}

void Bow::action(int health, string type)
{
	cout << "The hero releases the arrow and hits the " << type << "(Hp: " << health << ")\n";
	arrows = arrows - 1;
}