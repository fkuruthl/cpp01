#include "HumanB.hpp"

HumanB::HumanB( std::string name )
{
	this->_name = name;
	this->_weapon = NULL;
	std::cout << this->_name << " has joined the battle!" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << this->_name << " has left the battle!" << std::endl;
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon &weapon )
{
	this->_weapon = &weapon;
}