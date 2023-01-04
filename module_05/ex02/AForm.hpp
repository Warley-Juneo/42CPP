/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 12:30:57 by wjuneo-f          #+#    #+#             */
/*   Updated: 2023/01/03 15:53:22 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <ostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm {
    public:
        AForm();
        AForm(std::string name, const int necessaryNote, const int necessaryNoteExec);
        AForm(AForm const& src);
        AForm &operator=(AForm const& src);
        ~AForm();

        void            beSigned(Bureaucrat& src);
        virtual void    execute(Bureaucrat const& executor) const = 0;
        
        std::string     getName() const;
        bool            getSigned() const;
        const int       getNecessaryNote() const;
        const int       getNecessaryNoteExec() const;

        void            setName( std::string name);
        void            setSigned( bool sig);
        void            setNecessaryNote( const int necessaryNote);
        void            setNecessaryNoteExec( const int necessaryNoteExec);

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

std::ostream&	operator<<(std::ostream& out, AForm const& src);