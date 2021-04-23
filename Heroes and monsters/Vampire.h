#include "Monster.h"


class Vampire :public Monster
{
public:
	Vampire(std::string _name);

	void printInfo() override;

	std::string getType() override;

};

