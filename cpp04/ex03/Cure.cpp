#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure( const Cure & other ) : AMateria(other) {}

Cure &Cure::operator=(const Cure &other)
{
	this->AMateria::operator=(other);
	return (*this);
}

Cure::~Cure() {}

AMateria * Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use()
{
	std::cout << "* heals wounds *" << std::endl;
}