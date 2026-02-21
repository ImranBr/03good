#include "ClapTrap.hpp"


int	main(void)
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
	c.status();

	std::cout << "\n--- energy point test ---\n";

	for (int i = 0; i < 10; i++)
	{
		b.attack("target");
		b.status();
	}
	b.attack("target"); 
	b.beRepaired(5);    
	return 0;
}