/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:18:07 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/09/11 13:58:36 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

int Character::_nbDrops = 0;

Character::Character() {
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->_bag[i] = NULL;
		this->_drops[i] = NULL;
	}
}

Character::Character(std::string name) : _name(name) {
	std::cout << "Character parametric constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->_bag[i] = NULL;
		this->_drops[i] = NULL;
	}
}

Character::Character(Character const& src) {
	std::cout << "Character copy constructor called" << std::endl;
	*this = src;
}

Character &Character::operator=(Character const& src) {
	if (this != &src) {
		this->_name = src.getName();
		for (int i = 0; i < 4; i++) {
			if (this->_bag[i])
				delete this->_bag[i];
			if (src._bag[i])
				this->_bag[i] = src._bag[i]->clone();
		}
	}
	return (*this);
}

Character::~Character() {
	std::cout << "Character default destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_bag[i])
			delete this->_bag[i];
		if (this->_drops[i])
			delete this->_drops[i];
	}
}

std::string const& Character::getName() const {
	return (this->_name);
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (!this->_bag[i]) {
			this->_bag[i] = m;
			std::cout << "successfully equipped" << std::endl;
			return;
		}
	}
	std::cout << "unequipped material" << std::endl;
}

void Character::unequip(int idx) {
	if (this->_bag[idx]) {
		this->_drops[_nbDrops] = this->_bag[idx];
		this->_bag[idx] = NULL;
		_nbDrops++;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (this->_bag[idx]) {
		this->_bag[idx]->use(target);
	}
}
