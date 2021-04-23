#ifndef Monster_h
#define Monster_h

#include <string>

class Monster
{
private:

	std::string name;
	int health;
	int attack;

public:

	Monster(std::string _name, int _health, int _attack) { name = _name; health = _health; attack = _attack; }
	
	virtual void printInfo() = 0;

	virtual std::string getType() = 0;

	std::string getName() { return name; }

	int getHealth() { return health; }

	int getAttack() { return attack; }

	void setHealth(int _health) { health = _health; }


};


#endif // !Monster_h



