/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:42:58 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/09/07 21:07:04 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
	const Animal* animals[4];

	std::cout << "==========Create Dogs==========\n\n";
	for (int i = 0; i < 2; i++) {
		animals[i] = new Dog;
	}
	std::cout << "\n==========Create Cats==========\n\n";
	for (int i = 2; i < 4; i++) {
		animals[i] = new Cat;
	}

	std::cout << "\n==========Test sound============\n\n";
	for (int i = 0; i < 4; i++) {
		animals[i]->makeSound();
	}

	std::cout << "\n==========Delete Dogs==========\n\n";
	for (int i = 0; i < 2; i++) {
		delete animals[i];
	}

	std::cout << "\n==========Create Cats==========\n\n";
	for (int i = 2; i < 4; i++) {
		delete animals[i];
	}

	std::cout << "\n=========Test deepCopy============\n";
	const Dog* animal_1 = new Dog;
	const Dog* animal_2 = new Dog(*animal_1);


	// std::cout << "\n========Delete Animal_1===========\n";
	// std::cout << *animal_2->getBrain() << std::endl;

	delete animal_1;
	// delete animal_2;
}
