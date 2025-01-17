#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
	this->_type = type;
	std::cout << "A new weapon has been created" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "A weapon has been destroyed" << std::endl;
}

const std::string	&Weapon::getType()
{
	return (this->_type);
}

void	Weapon::setType( std::string type )
{
	this->_type = type;
}
