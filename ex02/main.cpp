#include "FragTrap.hpp"

int main()
{
	FragTrap a("A");

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
	a.highFivesGuys();

	std::cout << "\n--- copy constructor test ---\n";
	FragTrap b(a);
	
    b.attack("C");
	b.status();

	std::cout << "\n--- assignment operator test ---\n";
	FragTrap c("C");
	
    c = a;
	c.attack("D");
	a.status();

	return 0;
}