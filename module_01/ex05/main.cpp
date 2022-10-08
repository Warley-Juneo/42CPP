/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 21:04:02 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/08/26 21:07:56 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[]) {
	Harl	harl;

	if (argc != 2) {
		std::cout << "Invalid arguments" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);
	return (0);
}
