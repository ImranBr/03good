#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
_name("default"),
_hitPoints (10),
_energyPoints (10),
_attackDamage (0)
{
	std::cout << "ClapTrap " << _name << " default constructed" << std::endl;

}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap " << _name << " constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : _name(other._name),
	_hitPoints(other._hitPoints), _energyPoints(other._energyPoints),
	_attackDamage(other._attackDamage)
{
	std::cout << "ClapTrap " << _name << " copy constructed" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << "ClapTrap " << _name << " assigned" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destroyed" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (_hitPoints == 0 || _energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " can't attack without energy or if he is already dead." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead." << std::endl;
		return ;
	}
	if (amount >= (unsigned)_hitPoints)
	{
		_hitPoints = 0;
		std::cout << "ClapTrap " << _name << " dies" << std::endl;
		return ;
	}
	else
	{
		_hitPoints -= amount;
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage." << std::endl;
		return ;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints == 0 || _hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " cant be repaired without energy or if he is already dead." << std::endl;
		return ;
	}
	_hitPoints += amount;
	if (_hitPoints > 10)
		_hitPoints = 10;
	std::cout << "ClapTrap " << _name << " has been repaired for " << amount << " hit points." << std::endl;
	_energyPoints--;
}

void ClapTrap::status() const
{
	std::cout << "ClapTrap " << _name << " HP: " << _hitPoints << " EP:" << _energyPoints << std::endl;
}