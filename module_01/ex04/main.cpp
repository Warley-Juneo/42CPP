/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 22:30:54 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/08/26 17:25:58 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace_file.hpp"

int main(int argc, char *argv[]) {

	ReplaceFile		obj;
	std::ifstream	ifs_file;

	if (argc != 4)
		std::cout << "Invalid parameters" << std::endl;
	ifs_file.open(argv[1]);
	if (!ifs_file.is_open())
		std::cout << "Invalid file !";

	obj.Rfile(ifs_file, argv[2], argv[3]);
	return 0;
}
