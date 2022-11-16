#include"Zombie.hpp"

void	Zombie::announce()
{
	std::cout <<  this->name ;
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void randomChump(std::string name )
{
	Zombie	z = Zombie(name);

	z.announce();
	return ;
}

Zombie* newZombie(std::string name)
{
	Zombie		*z;

	z = new Zombie(name);

	return(z);
}

int	main()
{
	Zombie	*Zombie;
	std::string	name;
	std::cout << "Creating the first Zombie, \"khalid\", using the function"
		" newZombie"<< std::endl;
	{
		Zombie = newZombie("khalid");
		Zombie->announce();
		delete Zombie;
	}
	std::cout << "Creating the second Zombie, \"sami\", using the function"
			" randomChump"<< std::endl;
	randomChump("sami");
	return(0);
}
