/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:49:07 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/09/07 18:35:14 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << "Animal parametric constructor called" << std::endl;
}

Animal::Animal(Animal const& src) {
	if (this != &src) {
		*this = src;
	}
}

Animal &Animal::operator=(Animal const& src) {
	this->_type = src._type;
	return (*this);
}

std::string const Animal::getType() const {
	return (this->_type);
}

void Animal::makeSound() const {
	std::cout << "makeSound animal called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal default destructor called" << std::endl;
}
