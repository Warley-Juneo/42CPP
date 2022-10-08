/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:17:24 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/09/07 15:23:30 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const& src) : Animal("Cat"){
	if (this != &src) {
		*this = src;
	}
}

Dog Dog::operator=(Dog const& src) {
	this->_type = src._type;
	return (*this);
}

std::string const Dog::getType() const {
	return (this->_type);
}

void Dog::makeSound() const {
	std::cout << "AuAu!" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog default destructor called" << std::endl;
}
