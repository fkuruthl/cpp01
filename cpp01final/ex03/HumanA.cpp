#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon )
{
	this->_name = name;
	this->_weapon = &weapon;
	std::cout << this->_name << " has joined the battle!" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << this->_name << " has left the battle!" << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}