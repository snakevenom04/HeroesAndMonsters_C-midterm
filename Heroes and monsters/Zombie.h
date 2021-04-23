#include "Monster.h"


class Zombie :public Monster
{

public:
	Zombie(std::string _name);

	void printInfo() override;

	std::string getType() override;

};

