/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:48:50 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/08/29 17:26:04 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &cpy);
		~Fixed(void);
		Fixed &operator=(Fixed const &src);
		int getRawBits(void) const;
		void setRawBits( int const raw );
	private:
		int	_fixPointer;
		static int const	_fractionalBits;
};



#endif
