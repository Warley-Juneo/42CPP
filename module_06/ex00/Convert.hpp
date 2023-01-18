/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:22:55 by wjuneo-f          #+#    #+#             */
/*   Updated: 2023/01/06 12:55:25 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <cmath>

class Convert
{
	public:
		Convert();
		Convert(Convert const& src);
		Convert &operator=(Convert const& src);
		~Convert();

		void		stringConvert( char* param );
		void		intConvert( char* param );
		void		floatConvert( char* param );
		void		doubleConvert( char* param );

		bool		firstValidations( char* param, long value, char* endValue);
		bool		validationPosPointer( std::string value );
		bool		validPosPointer(std::string value);
	private:
		/* data */
};

