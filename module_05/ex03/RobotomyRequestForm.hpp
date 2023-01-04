/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:09:25 by wjuneo-f          #+#    #+#             */
/*   Updated: 2023/01/03 16:24:00 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <cstdlib>
#include <ctime>
#include <stdlib.h>

class RobotomyRequestForm : public AForm {
    public:
        RobotomyRequestForm( std::string target);
        RobotomyRequestForm(RobotomyRequestForm const& src);
        RobotomyRequestForm &operator=(RobotomyRequestForm const& src);
        ~RobotomyRequestForm();

        void            execute(Bureaucrat const& executor) const;
        
        class gradeTooLowException : public std::exception {
            public:
                char const* what() const throw();
        };
        
    private:
        std::string _target;
};

