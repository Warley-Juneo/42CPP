/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:29:36 by wjuneo-f          #+#    #+#             */
/*   Updated: 2023/01/10 13:52:16 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Iter.hpp"

void	printDouble(int x) {
	std::cout << x + x << " ";
}

void	upAlphabet(char c) {
	std::cout <<(char)(c + 1) << " ";
}

int	main( void ) {
	int iarr[] = {1, 2, 3, 4, 5};
	int ilength = sizeof(iarr) / sizeof(iarr[0]);
	iter(iarr, ilength, printDouble);
	std::cout << std::endl;

	char carr[] = {'a', 'b', 'c', 'd', 'e'};
	int clength = sizeof(carr) / sizeof(carr[0]);
	iter(carr, clength, upAlphabet);
	std::cout << std::endl;
	return 0;
}
