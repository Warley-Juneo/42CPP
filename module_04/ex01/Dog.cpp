/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:17:24 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/09/07 21:12:42 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog default constructor called" << std::endl;
	this->_brain = new Brain;
}

Dog::Dog(Dog const& src) : Animal("Dog"){
	if (this != &src) {
		this->_brain = new Brain();
		*this = src;
	}
}

Dog &Dog::operator=(Dog const& src) {
	this->_type = src._type;
	*this->_brain = *src.getBrain();
	return (*this);
}

std::string const Dog::getType() const {
	return (this->_type);
}

void Dog::makeSound() const {
	std::cout << "AuAu!" << std::endl;
}

Brain const* Dog::getBrain() const {
	return (this->_brain);
}

Dog::~Dog() {
	delete this->_brain;
	std::cout << "Dog default destructor called" << std::endl;
}
