/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:28:18 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/08/22 22:02:31 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) : _name(name), _weapon(weapon) {
}

HumanA::~HumanA() {
}

void	HumanA::attack() {
	std::cout << _name << " " << "attacks with their" \
	<< " " << _weapon.getType() << std::endl;
}

// const std::string HumanA::getName(void) {
// 	return (_name);
// }
