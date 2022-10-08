/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 20:02:08 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/08/31 13:42:21 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_fractionalBits = 8;

Fixed::Fixed() {
	this->_fixPointer = 0;
}

Fixed::Fixed(const int& value) {;
	this->_fixPointer = (value << _fractionalBits);
}

Fixed::Fixed(const float& value) {
	this->_fixPointer = roundf(value * (float)(1 << _fractionalBits));
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

float Fixed::toFloat( void ) const {
	float float_nbr = ((float)_fixPointer / (float)(1 << _fractionalBits));
	return float_nbr;
}

Fixed &Fixed::operator=(Fixed const &src) {
	if (this != &src)
		this->setRawBits(src.getRawBits());
	return *this;
}

////////////////////Comparison Operator////////////////////
bool Fixed::operator>(const Fixed& src) const {
	return (this->_fixPointer > src._fixPointer);
}

bool Fixed::operator<(const Fixed& src) const {
	return (this->_fixPointer < src._fixPointer);
}

bool Fixed::operator>=(const Fixed& src) const {
	return (this->_fixPointer >= src._fixPointer);
}

bool Fixed::operator<=(const Fixed& src) const {
	return (this->_fixPointer <= src._fixPointer);
}

bool Fixed::operator==(const Fixed& src) const {
	return (this->_fixPointer == src._fixPointer);
}

bool Fixed::operator!=(const Fixed& src) const {
	return (this->_fixPointer != src._fixPointer);
}
///////////////////////////////////////////////////////////

////////////////////Arithmetic operator////////////////////
Fixed Fixed::operator+(Fixed const &src) const{
	Fixed temp (toFloat() + src.toFloat());

	return (temp);
}

Fixed Fixed::operator-(Fixed const &src) const{
	Fixed temp (toFloat() - src.toFloat());

	return (temp);
}

Fixed Fixed::operator*(Fixed const &src) const{
	Fixed temp (toFloat() * src.toFloat());

	return (temp);
}

Fixed Fixed::operator/(Fixed const &src) const{
	Fixed temp (toFloat() / src.toFloat());

	return (temp);
}
////////////////////////////////////////////////////////////

//////////////////// Increment/Decrement operator ///////////////////
Fixed &Fixed::operator++() {
	this->_fixPointer++;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed temp;

	temp = *this;
	this->_fixPointer++;
	return (temp);
}

Fixed &Fixed::operator--() {
	this->_fixPointer--;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed temp;

	temp = *this;
	this->_fixPointer--;
	return (temp);
}

////////////////////////////////////////////////////////////
/////////////////////Others/////////////////////////////////

//static Fixed	&min(Fixed& n1, Fixed& n2);

Fixed &Fixed::min(Fixed& n1, Fixed& n2) {
	return n1 < n2 ? n1 : n2;
}

Fixed const &Fixed::min(const Fixed& n1, const Fixed& n2) {
	return n1 < n2 ? n1 : n2;
}

Fixed &Fixed::max(Fixed& n1, Fixed& n2) {
	return n1 > n2 ? n1 : n2;
}

Fixed const &Fixed::max(const Fixed& n1, const Fixed& n2) {
	return n1 > n2 ? n1 : n2;
}

////////////////////////////////////////////////////////////
std::ostream &operator<<(std::ostream &o, Fixed const &i) {
	return (o << i.toFloat());
}

Fixed::~Fixed() {
}
