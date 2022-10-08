/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:06:57 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/09/07 15:23:22 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const& src) : Animal("Cat") {
	if (this != &src) {
		*this = src;
	}
}

Cat Cat::operator=(Cat const& src) {
	this->_type = src._type;
	return (*this);
}

std::string const Cat::getType() const {
	return (this->_type);
}

void Cat::makeSound() const {
	std::cout << "Miaww!" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat default destructor called" << std::endl;
}
