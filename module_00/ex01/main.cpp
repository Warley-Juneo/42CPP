/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:25:01 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/08/17 20:37:08 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

int main(void) {
	PhoneBook	phonebook;
	std::string	comand;

	for (;;) {
		std::cout << "Select a comand <ADD>, <SEARCH> or <EXIT>" << std::endl;
		std::cin >> comand;

		if (comand == "ADD") {
			phonebook.AddContact();
		} else if (comand == "SEARCH") {
			phonebook.GetContact();
		} else if (comand == "EXIT") {
			return (0);
		} else {
			std::cout << "Invalid comand" << std::endl;
		}
	}
}
