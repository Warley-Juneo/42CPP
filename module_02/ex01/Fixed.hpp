/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:57:32 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/08/30 14:10:51 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const int& value);
		Fixed(const float& value);
		Fixed(Fixed const &src);
		~Fixed();

		Fixed &operator=(Fixed const &src);
		int getRawBits(void) const;
		void setRawBits( int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
	private:
		int	_fixPointer;
		static int const	_fractionalBits;
};

std::ostream &operator<<(std::ostream &ofs, Fixed const &value);

#endif
