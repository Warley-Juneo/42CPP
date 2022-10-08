/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:49:31 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/08/29 19:49:08 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_fractionalBits = 8;

Fixed::Fixed() {
	std::cout << "Default constructor called\n";
	_fixPointer = 0;
}

Fixed::Fixed(Fixed const& src) {
	std::cout << "Copy constructor called\n";
	*this = src;
}

Fixed &Fixed::operator=(Fixed const &src) {
	std::cout << "Copy assignment operator called\n";
	if (this != &src)
		this->setRawBits(src.getRawBits());
	return *this;
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called\n";
	return _fixPointer;
}

void Fixed::setRawBits(int const raw) {
	_fixPointer = raw;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called\n";
	return;
}
