#include "Monster.h"

class Werewolf : public Monster
{
public:
	Werewolf(std::string _name);

	void printInfo() override;

	std::string getType() override;

};

