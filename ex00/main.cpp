#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("A");

	std::cout << "\n--- attack test ---\n";
	a.attack("B");
	a.status();

	std::cout << "\n--- takeDamage test ---\n";
	a.takeDamage(5);
	a.status();

	std::cout << "\n--- beRepaired test ---\n";
	a.beRepaired(6);
	a.status();

	std::cout << "\n--- copy constructor test ---\n";
	ClapTrap b(a);
	b.attack("C");
	b.status();

	std::cout << "\n--- assignment operator test ---\n";
	ClapTrap c("C");
	c = a;
	c.attack("D");
	a.status();
	return 0;
}