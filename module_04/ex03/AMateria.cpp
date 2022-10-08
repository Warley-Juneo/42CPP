/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:44:41 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/09/11 13:32:46 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const& type) : _type(type) {
	std::cout << "AMateria parametric constructor called" << std::endl;
}

AMateria::AMateria(AMateria const& src) {
	*this = src;
}

AMateria &AMateria::operator=(AMateria const& src) {
	if (this != &src) {
		this->_type = src.getType();
	}
	return (*this);
}

AMateria::~AMateria() {
	std::cout << "AMateria default destructor called" << std::endl;
}

std::string const& AMateria::getType() const {
	return (this->_type);
}

void AMateria::use(ICharacter& target) {
}
