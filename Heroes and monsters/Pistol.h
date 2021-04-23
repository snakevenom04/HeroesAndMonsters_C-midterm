#include "Weapon.h"

class Pistol :public Weapon
{
private:
	int bullets;
public:
	Pistol(int _bullets);

	int getBullets();

	void action(int health, std::string type) override;
};

