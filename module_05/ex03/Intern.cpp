/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 18:16:54 by wjuneo-f          #+#    #+#             */
/*   Updated: 2023/01/04 12:25:13 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
    static t_entry dictionary[] = {
        {"presidential pardon", &Intern::createPresidentialPardonForm},
        {"robotomy request", &Intern::createRobotomyRequestForm},
        {"shrubbery creation", &Intern::createShrubberyCreationForm}
     };
    _dictionary = new t_entry[3];
    memmove(_dictionary, dictionary, sizeof(t_entry) * 3);
    std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(Intern const& src) {
    std::cout << "Intern copy constructor called" << std::endl;
    if (this != &src) {
        *this = src;
    }
}

Intern Intern::operator=(Intern const& src) {
    return (*this);
}

AForm*   Intern::createPresidentialPardonForm( std::string target ) {
    return new PresidentialPardonForm(target);
}

AForm*  Intern::createRobotomyRequestForm( std::string target ) {
    return new RobotomyRequestForm(target);
}

AForm*  Intern::createShrubberyCreationForm( std::string target ) {
    return new ShrubberyCreationForm(target);
}

AForm* Intern::makeForm( std::string formName, std::string target ) {
    for (int i = 0; i < 2; ++i) {
        if (_dictionary[i].key == formName) {
            Intern* intern = this;
            return (intern->*_dictionary[i].function)(target);
        }
    }
    return NULL;
}

Intern::~Intern() {
    delete[] _dictionary;
    std::cout << "Intern default destructor called" << std::endl;
}