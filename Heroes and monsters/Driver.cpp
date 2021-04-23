#include <vector>
#include <iostream>

#include "Vampire.h"
#include "Werewolf.h"
#include "Zombie.h"
#include "Hero.h"
#include "Bow.h"
#include "Knife.h"
#include "Pistol.h"

using namespace std;

void createMonsters(vector<Monster*>& monsters)
{
	//4 vampires
	monsters.push_back(new Vampire("Fabian"));
	monsters.push_back(new Vampire("Athena"));
	monsters.push_back(new Vampire("Bella"));
	monsters.push_back(new Vampire("Trista"));
	//3 werewolves
	monsters.push_back(new Werewolf("Edward"));
	monsters.push_back(new Werewolf("Gilbert"));
	monsters.push_back(new Werewolf("Vance"));
	//2 zombies
	monsters.push_back(new Zombie("Adam"));
	monsters.push_back(new Zombie("Eve"));

}


int main()
{
	vector<Monster*> monsters;

	createMonsters(monsters);

	Hero hero(200);

	//weapons
	Pistol gun(8);
	Knife knife;
	Bow bow(11);
		
	int counter = 0;

	while (true)
	{
		hero.printInfo(); //prints monster numbers and hero health

		monsters.at(counter)->printInfo(); //prints active monster

		hero.chooseWeapon(gun.getBullets(), bow.getArrows());//Weapon Choice

		if (hero.getWeapon() == 1)//shoot
		{
			if (gun.getBullets() > 0)
				{
					monsters.at(counter)->setHealth(monsters.at(counter)->getHealth() - 10);
					gun.action(monsters.at(counter)->getHealth(), monsters.at(counter)->getType());
				}

			else
				cout << "No bullets left!!\n";

		}

		else if (hero.getWeapon() == 2)//stab
		{
			monsters.at(counter)->setHealth(monsters.at(counter)->getHealth() - 15);
			knife.action(monsters.at(counter)->getHealth(), monsters.at(counter)->getType());
		}

		else if (hero.getWeapon() == 3)//arrow
		{
			if (bow.getArrows() > 0)
				{
					monsters.at(counter)->setHealth(monsters.at(counter)->getHealth() - 20);
					bow.action(monsters.at(counter)->getHealth(), monsters.at(counter)->getType());
				}

			else
				cout << "No arrows left!!\n";

		}

		if (monsters.at(counter)->getHealth() <= 0)//check if monster is dead
		{
			cout << "The " << monsters.at(counter)->getType() << " is dead.\n";
			counter++;
			hero.killEnemies();
		}

		else//if alive then monster attacks hero
		{
			hero.setHealth(hero.getHealth() - monsters.at(counter)->getAttack());
			cout << "The " << monsters.at(counter)->getType() << " attacks the hero(" << hero.getHealth() <<")\n";
		}


		if (hero.endEncounter())//check if hero died or all monsters died
			break;

	}//end of loop




}