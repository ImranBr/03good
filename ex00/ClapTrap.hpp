#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
  private:
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;
	ClapTrap();
	
	public:
	ClapTrap(std::string name);
	ClapTrap &operator=(const ClapTrap &other);
	ClapTrap(const ClapTrap& other);
	~ClapTrap();

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif