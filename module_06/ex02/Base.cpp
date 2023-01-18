/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:44:41 by wjuneo-f          #+#    #+#             */
/*   Updated: 2023/01/10 11:57:25 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base*	generate( void ) {
	srand(time(NULL));
	int	x;

	x = rand() % 3;
	if (x == 1) {
		return (new A);
	}
	if (x == 2) {
		return(new B);
	}
	return (new C);
}

void	indentify(Base* p) {
	if (dynamic_cast<A*>(p) != NULL) {
		std::cout << "ptr base indentify type = A" << std::endl;
	}
	else if (dynamic_cast<B*>(p) != NULL) {
		std::cout << "ptr base indentify type = B" << std::endl;
	}
	else if (dynamic_cast<C*>(p) != NULL) {
		std::cout << "ptr base indentify type = C" << std::endl;
	}
	return ;
}

void	indentify(Base& r) {
	try {
		A a = dynamic_cast<A&>(r);
		std::cout << "ref base indentify type = A" << std::endl;
	} catch (std::exception e) {
		try {
			B b = dynamic_cast<B&>(r);
			std::cout << "ref base indentify type = B" << std::endl;
		} catch (std::exception e) {
			try {
				C c = dynamic_cast<C&>(r);
				std::cout << "ref base indentify type = C" << std::endl;
			} catch (std::exception e) {
				std::cout << "ref not found !" << std::endl;
			}
		}
	}
}
