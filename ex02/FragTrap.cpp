#include "FragTrap.hpp"

FragTrap::FragTrap () : ClapTrap("default")
{
_hitPoints = 100;
_energyPoints = 50;
_attackDamage = 20;
	std::cout << "FragTrap" << _name << " default constructed." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "FragTrap " << _name << " constructed." << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) 
{
	std::cout << "FragTrap " << _name << " copy constructed." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    ClapTrap::operator=(other);
	std::cout << "FragTrap " << _name << " assigned." << std::endl;
	return (*this);
}

// void FragTrap::attack(const std::string &target)
// {
// 	if (_hitPoints == 0 || _energyPoints == 0)
// 	{
// 		std::cout << "FragTrap " << _name << " can't attack without energy or if he is already dead." << std::endl;
// 		return ;
// 	}
// 	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
// 	_energyPoints--;
// }

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << _name << " is now in mode high Five Guys." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " destroyed" << std::endl;
}