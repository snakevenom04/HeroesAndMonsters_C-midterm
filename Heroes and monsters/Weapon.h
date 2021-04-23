#ifndef weapon_h
#define weapon_h

#include <string>

class Weapon
{
private:
	int damage;
public:
	Weapon(int _damage) { damage = _damage; }
	virtual void action(int health, std::string type) = 0;


};



#endif // !weapon_h

