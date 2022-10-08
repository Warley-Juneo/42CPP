/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:03:02 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/09/11 12:53:59 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure const& src) : AMateria("cure") {
	std::cout << "Cure copy constructor called" << std::endl;
	*this = src;
}

Cure &Cure::operator=(Cure const& src) {
	this->_type = src.getType();
	return (*this);
}

Cure::~Cure() {
	std::cout << "Cure default destructor called" << std::endl;
}

AMateria* Cure::clone() const {
	return (new Cure);
}

void Cure::use(ICharacter& target) {
	std::cout << "Cure: '* heals " << target.getName() << " wounds *" << std::endl;
}
