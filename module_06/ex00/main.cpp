/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:26:35 by wjuneo-f          #+#    #+#             */
/*   Updated: 2023/01/06 22:40:06 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char* argv[]) {

    if (argc != 2) {
        std::cout << "Invalid number of arguments!" << std::endl;
        return (0);
    }
    Convert obj;

    obj.stringConvert(argv[1]);
    obj.intConvert(argv[1]);
    obj.floatConvert(argv[1]);
    obj.doubleConvert(argv[1]);
}
