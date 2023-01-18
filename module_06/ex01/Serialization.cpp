/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 14:58:42 by wjuneo-f          #+#    #+#             */
/*   Updated: 2023/01/09 14:59:53 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Serialization::Serialization() {
	std::cout << "Serialization default constructor called" << std::endl;
}

Serialization::Serialization(Serialization const& src) {
	std::cout << "Serialization copy constructor called" << std::endl;
	if (this != &src) {
		*this = src;
	}
}

Serialization &Serialization::operator=(Serialization const& src) {
	return *this;
}

uintptr_t	Serialization::serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	Serialization::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

Serialization::~Serialization() {
	std::cout << "Serialization default destructor called" << std::endl;
}
