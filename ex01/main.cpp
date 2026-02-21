#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("A");

	std::cout << "\n--- attack test ---\n";
	a.attack("B");
	a.status();

	std::cout << "\n--- takeDamage test ---\n";
	a.takeDamage(30);
	a.status();

	std::cout << "\n--- beRepaired test ---\n";
	a.beRepaired(20);
	a.status();

	std::cout << "\n--- guardGate test ---\n";
	a.guardGate();

	std::cout << "\n--- copy constructor test ---\n";
	ScavTrap b(a);
	
    b.attack("C");
	b.status();

	std::cout << "\n--- assignment operator test ---\n";
	ScavTrap c("C");
	
    c = a;
	c.attack("D");
	a.status();

	return 0;
}