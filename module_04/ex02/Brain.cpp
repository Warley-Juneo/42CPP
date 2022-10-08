/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:51:03 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/09/07 20:55:47 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	for (int i = 0; i < 100; i++) {
		this->_idea[i] = "My idea: ";
	}
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const& src) {
	if (this != &src) {
		*this = src;
	}
}

Brain Brain::operator=(Brain const& src) {
	for (int i = 0; i < 100; i++) {
		this->_idea[i] = src.getIdeia(i);
	}
	return (*this);
}

std::string Brain::getIdeia(int idx) const{
	return (this->_idea[idx]);
}

std::ostream &operator<<(std::ostream& ofs, Brain const& b) {
	for (int i = 0; i < 100; i++) {
		ofs << b.getIdeia(i);
	}
	return (ofs);
}

Brain::~Brain() {
	std::cout << "Brain default destructor called" << std::endl;
}
