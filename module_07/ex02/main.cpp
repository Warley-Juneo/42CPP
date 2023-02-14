/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:15:29 by wjuneo-f          #+#    #+#             */
/*   Updated: 2023/01/10 15:15:06 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main() {
	std::cout << "Testing no params constructorr" << std::endl;
	Array<int> emptyArray;
	std::cout << "emptyArray size: " << emptyArray.size() << std::endl;

	std::cout << "\n\nTesting params constructor" << std::endl;
	Array<int> intArray(5);
	std::cout << "intArray size: " << intArray.size() << std::endl;
	std::cout << "Filling intArray with values" << std::endl;
	for (unsigned int i = 0; i < intArray.size(); i++) {
		intArray[i] = i;
	}

	std::cout << "\n\nTesting copy operator" << std::endl;
	Array<int> copyArray(intArray);
	std::cout << "copyArray size: " << copyArray.size() << std::endl;
	std::cout << "Printing copyArray: ";
	for (unsigned int i = 0; i < copyArray.size(); i++) {
		std::cout << copyArray[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "\n\nTesting '=' operator" << std::endl;
	Array<int> assignArray;
	assignArray = intArray;
	std::cout << "assignArray size: " << assignArray.size() << std::endl;
	std::cout << "Printing assignArray: ";
	for (unsigned int i = 0; i < assignArray.size(); i++) {
		std::cout << assignArray[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "\n\nTesting memory out for range" << std::endl;
	try {
		int outOfRange = assignArray[assignArray.size()];
		if (outOfRange) {
			std::cout << outOfRange << std::endl;
		}
	} catch (std::exception& e) {
		std::cout << "Caught exception while accessing out of bounds memory" << std::endl;
	}
}
