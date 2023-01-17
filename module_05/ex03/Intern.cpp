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
        {"shrubbery creation", &Intern::createShrubberyCreationForm},
    };
	this->_dictionary = dictionary;

    std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(Intern const& src) {
    std::cout << "Intern copy constructor called" << std::endl;
    if (this != &src) {
        *this = src;
    }
}

Intern Intern::operator=(Intern const& src) {
    *this->_dictionary = *src._dictionary;
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

char const*	Intern::formNotFound::what( void ) const throw() {
	return ("Form not found !!");
}

AForm* Intern::makeForm( std::string formName, std::string target ) {
    try {
        for (int i = 0; i < 3; ++i) {
            if (_dictionary[i].key == formName) {
                return (this->*_dictionary[i].value)(target);
            }
        }
        throw formNotFound();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return NULL;
}

Intern::~Intern() {
    std::cout << "Intern default destructor called" << std::endl;
}