/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 18:00:12 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/08/29 19:48:16 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_fractionalBits = 8;

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->_fixPointer = 0;
}

Fixed::Fixed(const int& value) {;
	std::cout << "Int constructor called" << std::endl;
	this->_fixPointer = (value << _fractionalBits);
}

Fixed::Fixed(const float& value) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixPointer = roundf(value * (float)(1 << _fractionalBits));
}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(Fixed const &src) {
	std::cout << "Copy assignment operator called\n";
	if (this != &src)
		this->setRawBits(src.getRawBits());
	return *this;
}

int Fixed::getRawBits(void) const{
	return _fixPointer;
}

void Fixed::setRawBits(int const raw) {
	_fixPointer = raw;
}

int Fixed::toInt(void) const {
	return ((this->_fixPointer >> _fractionalBits));
}

float Fixed::toFloat( void ) const{
	return ((float)_fixPointer / (float)(1 << _fractionalBits));
}

std::ostream &operator<<(std::ostream &ofs, Fixed const &value) {
	ofs << value.toFloat();
	return (ofs);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}
