/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 19:52:41 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/08/26 21:11:34 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

void	Harl::complain(std::string level) {
	void (Harl::*func_ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	for(int i = 0; i < 4; i++) {
		if (levels[i] == level) {
			(this->*func_ptr[i])();
			return ;
		}
	}
	std::cout << "Argument not found, insert DEBUG, INFO, WARNING or ERROR" << std::endl;
}

void	Harl::debug(void) {
	std::cout << "DEBUG" << std::endl;
	std::cout << DEBUG_MSG << std::endl;
}

void	Harl::info(void) {
	std::cout << "INFO" << std::endl;
	std::cout << INFO_MSG << std::endl;
}


void	Harl::warning(void) {
	std::cout << "WARNING" << std::endl;
	std::cout << WARNING_MSG << std::endl;
}

void	Harl::error(void) {
	std::cout << "ERROR" << std::endl;
	std::cout << ERROR_MSG << std::endl;
}
