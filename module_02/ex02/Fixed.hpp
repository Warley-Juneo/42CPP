/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 19:53:15 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/08/31 13:09:50 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed(/* args */);
		Fixed(const int& value);
		Fixed(const float& value);
		Fixed(Fixed const &src);
		Fixed &operator=(Fixed const &src);
		~Fixed();

		int getRawBits( void ) const;
		void setRawBits(int const raw);
		float toFloat ( void ) const;
		int toInt( void ) const;

		// comparison operator //
		bool operator>(Fixed const &src) const;
		bool operator<(Fixed const &src) const;
		bool operator>=(Fixed const &src) const;
		bool operator<=(Fixed const &src) const;
		bool operator==(Fixed const &src) const;
		bool operator!=(Fixed const &src) const;
		////////////////////////

		// arithmetic operator //
		Fixed operator+(Fixed const &src) const;
		Fixed operator-(Fixed const &src) const;
		Fixed operator*(Fixed const &src) const;
		Fixed operator/(Fixed const &src) const;
		/////////////////////////

		// Increment/Decrement operators //
		Fixed& operator++();
		Fixed& operator--();
		Fixed operator++(int);
		Fixed operator--(int);
		//////////////////////////////////

		static Fixed	&min(Fixed& n1, Fixed& n2);
		static Fixed	const &min(const Fixed& n1, const Fixed& n2);
		static Fixed	&max(Fixed& n1, Fixed& n2);
		static Fixed	const &max(const Fixed& n1, const Fixed& n2);

	private:
		int					_fixPointer;
		static const int	_fractionalBits;
};

std::ostream& operator<<(std::ostream& stream, const Fixed& fixed);


#endif
