/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:11:55 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/09/11 12:54:11 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(Ice const& src) : AMateria("ice") {
	std::cout << "Ice copy constructor called" << std::endl;
	*this = src;
}

Ice &Ice::operator=(Ice const& src) {
	this->_type = src.getType();
	return (*this);
}

Ice::~Ice() {
	std::cout << "Ice default destructor called" << std::endl;
}

AMateria* Ice::clone() const {
	return (new Ice);
}

void Ice::use(ICharacter& target) {
	std::cout << "Ice: '* shoots an ice bolt at " << target.getName() << " *'"
	<< std::endl;
}
