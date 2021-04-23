#include "Weapon.h"

class Knife :public Weapon
{
public:
	Knife();
	void action(int health, std::string type) override;
};
