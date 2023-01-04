/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:49:08 by wjuneo-f          #+#    #+#             */
/*   Updated: 2023/01/02 15:12:18 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main () {
    std::cout << "\n==== Create Bureaucrat | test values ====\n\n";
    Bureaucrat bureaucrat1 = Bureaucrat("vbureaucrat", 50);
    std::cout << bureaucrat1 << std::endl;

    std::cout << "\n==== Testing bureaucrat invalid ====\n\n";
    Bureaucrat bureaucrat2 = Bureaucrat("ibureaucrat", 200);
    Bureaucrat bureaucrat3 = Bureaucrat("ibureaucrat", -50);
    std::cout << bureaucrat2 << std::endl;
    std::cout << bureaucrat3 << std::endl;

    std::cout << "\n==== Testing bureaucrat increment/decrement ====\n\n";
    Bureaucrat bureaucrat4 = Bureaucrat("bureaucrat", 100);
    std::cout << "Current: " << bureaucrat4.getGrade() << " ";
    bureaucrat4.upgrade();
    std::cout << "Increment: " << bureaucrat4.getGrade() << " ";
    bureaucrat4.downgrade();
    std::cout << "Decrement: " << bureaucrat4.getGrade() << std::endl;

    std::cout << "\n==== Testing function increment/Decrement in max values ====\n\n";
    Bureaucrat bureaucrat5 = Bureaucrat("bureaucrat", 150);
    Bureaucrat bureaucrat6 = Bureaucrat("bureaucrat", 1);

    std::cout << "First bureaucrat value: " << bureaucrat5.getGrade() << std::endl;
    bureaucrat5.downgrade();
    std::cout << "First bureaucrat value: " << bureaucrat5.getGrade() << std::endl;

    std::cout << "Second bureaucrat value: " << bureaucrat6.getGrade() << std::endl;
    bureaucrat6.upgrade();
    std::cout << "Second bureaucrat value: " << bureaucrat6.getGrade() << std::endl;
}