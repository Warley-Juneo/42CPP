/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 18:10:03 by wjuneo-f          #+#    #+#             */
/*   Updated: 2023/01/04 11:49:53 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ostream"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <string.h>

class Intern;

typedef AForm*(Intern::*value)( std::string );

typedef struct s_entry {
    std::string key;
    value       function;
} t_entry;

class Intern {
    public:
        Intern();
        Intern(Intern const& src);
        Intern operator=(Intern const& src);
        ~Intern();
     
        AForm*   makeForm( std::string formName, std::string target );

        AForm*   createPresidentialPardonForm( std::string target );
        AForm*   createRobotomyRequestForm( std::string target );
        AForm*   createShrubberyCreationForm( std::string target );
    private:
        t_entry* _dictionary;
    
};

