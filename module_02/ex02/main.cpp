/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 19:52:24 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/08/31 14:58:54 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"



int main( void ) {
	Fixed a (5);
	Fixed const b( Fixed( 2 ));

	std::cout << "Arithimatic Operators" << std::endl;
	std::cout << a + b << std::endl;
	std::cout << a - b << std::endl;
	std::cout << a * b << std::endl;
	std::cout << a / b << std::endl;

	Fixed x (3);
	std::cout << "-----------------------------" << std::endl;
	std::cout << "Increment/Decrement Operators" << std::endl;
	std::cout << "-----------------------------" << std::endl;
	std::cout << x << std::endl;
	std::cout << ++x << std::endl;
	std::cout << x << std::endl;
	std::cout << x++ << std::endl;
	std::cout << x << std::endl;


	std::cout << "-----------------------------" << std::endl;
	std::cout << "   Compairson Operators" << std::endl;
	std::cout << "-----------------------------" << std::endl;
	std::cout << (a < x) << std::endl;
	std::cout << (a > x) << std::endl;
	std::cout << (a <= x) << std::endl;
	std::cout << (a >= x) << std::endl;
	std::cout << (a != x) << std::endl;
	std::cout << (a == x) << std::endl;

	Fixed const	teste1(10);
	Fixed const	teste2(20);
	std::cout << "-----------------------------" << std::endl;
	std::cout << "           Min/Max"           << std::endl;
	std::cout << "-----------------------------" << std::endl;
	std::cout << a  << " | " << x << " = " << Fixed::min(a, x) << std::endl;
	std::cout << a  << " | " << x << " = " << Fixed::max(a, x) << std::endl;
	std::cout << a  << " | " << x << " = " << Fixed::min(teste1, teste2) << std::endl;
	std::cout << a  << " | " << x << " = " << Fixed::max(teste1, teste2) << std::endl;
	return 0;
}
