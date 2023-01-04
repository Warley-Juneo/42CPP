/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:30:56 by wjuneo-f          #+#    #+#             */
/*   Updated: 2023/01/03 17:31:47 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <cstdlib>
#include <ctime>
#include <stdlib.h>

class PresidentialPardonForm : public AForm {
    public:
        PresidentialPardonForm( std::string target);
        PresidentialPardonForm(PresidentialPardonForm const& src);
        PresidentialPardonForm &operator=(PresidentialPardonForm const& src);
        ~PresidentialPardonForm();

        void            execute(Bureaucrat const& executor) const;
        
        class gradeTooLowException : public std::exception {
            public:
                char const* what() const throw();
        };
        
    private:
        std::string _target;
};

