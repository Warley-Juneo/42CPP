/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 20:33:13 by wjuneo-f          #+#    #+#             */
/*   Updated: 2023/01/03 15:53:13 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

char const* AForm::gradeTooLowException::what( void ) const throw() {
    return ("Grade very low, sorry!");
}

AForm::AForm() : _necessaryNote(0), _necessaryNoteExec(0) {
}

AForm::AForm(std::string name, const int necessaryNote, const int necessaryNoteExec) : _name(name), _signed(0), _necessaryNote(necessaryNote), _necessaryNoteExec(necessaryNoteExec) {
    std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(AForm const& src) : _necessaryNote(src._necessaryNote), _necessaryNoteExec(src._necessaryNoteExec) {
    std::cout << "AForm copy constructor default called" << std::endl;
    *this = src;
}

AForm &AForm::operator=(AForm const& src) {
    this->_name = src.getName();
    this->_signed = src.getSigned();

    return (*this);
}

std::string AForm::getName() const {
    return (this->_name);
}

bool AForm::getSigned() const {
    return (this->_signed);
}

const int   AForm::getNecessaryNote() const {
    return (this->_necessaryNote);
}

const int   AForm::getNecessaryNoteExec() const {
    return (this->_necessaryNoteExec);
}

void    AForm::beSigned(Bureaucrat& src) {
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

void    AForm::setSigned(int sig) {
    this->_signed = (bool)sig;
}

std::ostream&	operator<<(std::ostream& out, AForm const& src) {
    out << src.getName() << " ";
    out << src.getSigned() << " ";
    out << src.getNecessaryNote() << " ";
    out << src.getNecessaryNoteExec() << " ";

    return (out);
}

void    AForm::setName( std::string name ) {
    this->_name = name;
}

void    AForm::setSigned( bool sig ) {
    this->_signed = sig;
}

void    AForm::setNecessaryNote( int necessaryNote ) {
    *const_cast<int*>(&this->_necessaryNote) = necessaryNote;
}

void    AForm::setNecessaryNoteExec( int const necessaryNoteExec ) {
    *const_cast<int*>(&this->_necessaryNoteExec) = _necessaryNoteExec;
}


AForm::~AForm() {
    std::cout << "AForm default destructor called" << std::endl;
}