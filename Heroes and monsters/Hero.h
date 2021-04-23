#pragma once
class Hero
{
private:
	int health;
	int vamp;
	int were;
	int zom;
	int weapon;

public:
	Hero(int _health);

	int getHealth();

	int getWeapon();

	void killEnemies();

	bool endEncounter();

	void setHealth(int _health);

	void printInfo();

	void chooseWeapon(int bullets, int arrows);

};

