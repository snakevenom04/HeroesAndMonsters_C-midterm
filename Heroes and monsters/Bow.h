#include "Weapon.h"

class Bow :public Weapon
{
private:
	int arrows;
public:
	Bow(int _arrows);

	int getArrows();

	void action(int health, std::string type) override;
};

