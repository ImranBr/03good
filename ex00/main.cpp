#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("A");

	std::cout << "\n--- attack test ---\n";
	a.attack("B");

	std::cout << "\n--- takeDamage test ---\n";
	a.takeDamage(3);

	std::cout << "\n--- beRepaired test ---\n";
	a.beRepaired(2);

	std::cout << "\n--- copy constructor test ---\n";
	ClapTrap b(a);
	b.attack("C");

	std::cout << "\n--- assignment operator test ---\n";
	ClapTrap c("C");
	c = a;
	c.attack("D");

	return 0;
}