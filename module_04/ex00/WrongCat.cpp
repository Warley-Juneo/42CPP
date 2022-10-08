#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const& src) : WrongAnimal("WrongCat") {
	if (this != &src) {
		*this = src;
	}
}

WrongCat WrongCat::operator=(WrongCat const& src) {
	this->_type = src._type;
	return (*this);
}

std::string const WrongCat::getType() const {
	return (this->_type);
}

void WrongCat::makeSound() const {
	std::cout << "Miaww!" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat default destructor called" << std::endl;
}
