#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include<iostream>
#include<string.h>

class Zombie
{
private:
	std::string	name;
public:
	Zombie(std::string name);
	~Zombie();
	void	set_name(std::string name);
	void announce( void );
	Zombie* newZombie( std::string name );
	void randomChump( std::string name );
};

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << this->name ;
	std::cout << ": *Sounds of dying again*" << std::endl;
}


#endif