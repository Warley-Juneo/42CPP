/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:45:34 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/08/22 15:06:42 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name);

int main(void) {
	int		qtd_zombie = 7;
	Zombie *horde = zombieHorde(qtd_zombie, "Ana");

	for (int i = 0; i < qtd_zombie; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}
