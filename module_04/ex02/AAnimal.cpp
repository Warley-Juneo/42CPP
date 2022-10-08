/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:49:07 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/09/08 11:33:30 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type) {
	std::cout << "AAnimal parametric constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const& src) {
	if (this != &src) {
		*this = src;
	}
}

AAnimal &AAnimal::operator=(AAnimal const& src) {
	this->_type = src._type;
	return (*this);
}

std::string const AAnimal::getType() const {
	return (this->_type);
}

void AAnimal::makeSound() const {
	std::cout << "makeSound AAnimal called" << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal default destructor called" << std::endl;
}
