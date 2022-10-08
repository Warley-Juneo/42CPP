/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:48:02 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/08/22 22:20:21 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {
}

HumanB::~HumanB() {
}

void	HumanB::attack() {
	if (_weapon != NULL) {
		std::cout << _name << " " << "attacks with their" \
		<< " " << _weapon->getType() << std::endl;
	}
	else {
		std::cout << "Not weapon" << std::endl;
	}
}

void	HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}
