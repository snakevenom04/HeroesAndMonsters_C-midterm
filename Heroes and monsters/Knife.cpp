#include <iostream>


#include "Knife.h"

using namespace std;

Knife::Knife():Weapon(15){}


void Knife::action(int health, string type)
{
	cout << "The hero stabs the " << type << "(Hp: " << health << ")\n";

}