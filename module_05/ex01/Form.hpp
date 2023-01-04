/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 20:33:11 by wjuneo-f          #+#    #+#             */
/*   Updated: 2023/01/03 12:14:38 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <ostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form {
    public:
        Form(std::string name, const int necessaryNote, const int necessaryNoteExec);
        Form(Form const& src);
        Form &operator=(Form const& src);
        ~Form();

        void    beSigned(Bureaucrat& src);
    
        std::string     getName() const;
        bool            getSigned() const;
        const int       getNecessaryNote() const;
        const int       getNecessaryNoteExec() const;

        void            setSigned(int sig);

        class gradeTooLowException : public std::exception {
            public:
                char const* what() const throw();
        };

    private:
        std::string _name;
        bool        _signed;
        const int   _necessaryNote;
        const int   _necessaryNoteExec;
};

std::ostream&	operator<<(std::ostream& out, Form const& src);