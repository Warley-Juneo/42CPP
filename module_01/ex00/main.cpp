/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:44:25 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/08/22 14:42:12 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std:: string name);
void	randomChump(std::string name);

int main(void) {
	Zombie*	new_zombie = newZombie("zombie1");

	new_zombie->announce();
	delete new_zombie;

	randomChump("zombie2");
	return (0);
}
