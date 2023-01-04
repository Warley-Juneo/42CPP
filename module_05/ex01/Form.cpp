/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 20:33:13 by wjuneo-f          #+#    #+#             */
/*   Updated: 2023/01/03 12:20:02 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

char const* Form::gradeTooLowException::what( void ) const throw() {
    return ("Grade very low, sorry!");
}

Form::Form(std::string name, const int necessaryNote, const int necessaryNoteExec) : _name(name), _signed(0), _necessaryNote(necessaryNote), _necessaryNoteExec(necessaryNoteExec) {
    std::cout << "Form default constructor called" << std::endl;
}

Form::Form(Form const& src) : _necessaryNote(src._necessaryNote), _necessaryNoteExec(src._necessaryNoteExec) {
    std::cout << "Form copy constructor default called" << std::endl;
    *this = src;
}

Form &Form::operator=(Form const& src) {
    this->_name = src.getName();
    this->_signed = src.getSigned();

    return (*this);
}

std::string Form::getName() const {
    return (this->_name);
}

bool Form::getSigned() const {
    return (this->_signed);
}

const int   Form::getNecessaryNote() const {
    return (this->_necessaryNote);
}

const int   Form::getNecessaryNoteExec() const {
    return (this->_necessaryNoteExec);
}

void    Form::beSigned(Bureaucrat& src) {
    try {
        if (src.getGrade() <= this->_necessaryNote) {
        this->setSigned(1);
    }
    else {
        throw gradeTooLowException();
    }
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
}

void    Form::setSigned(int sig) {
    this->_signed = (bool)sig;
}

std::ostream&	operator<<(std::ostream& out, Form const& src) {
    out << src.getName() << " ";
    out << src.getSigned() << " ";
    out << src.getNecessaryNote() << " ";
    out << src.getNecessaryNoteExec() << " ";

    return (out);
}

Form::~Form() {
    std::cout << "Form default destructor called" << std::endl;
}