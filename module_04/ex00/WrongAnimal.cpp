/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:28:42 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/09/07 15:29:01 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
	std::cout << "WrongAnimal parametric constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& src) {
	if (this != &src) {
		*this = src;
	}
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const& src) {
	this->_type = src._type;
	return (*this);
}

std::string const WrongAnimal::getType() const {
	return (this->_type);
}

void WrongAnimal::makeSound() const {
	std::cout << "makeSound WrongAnimal called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal default destructor called" << std::endl;
}
