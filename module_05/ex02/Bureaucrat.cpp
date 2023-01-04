/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 11:34:06 by wjuneo-f          #+#    #+#             */
/*   Updated: 2023/01/03 17:51:43 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	Bureaucrat::verifyException(int grade) {
	try {
		if (grade < 1) {
			throw GradeTooHighException();
		}
		else if (grade > 150) {
			throw GradeTooLowException();
		}
	}
	catch (std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
		if (this->_grade > 150) {
			this->_grade = 150;
		}
		else {
			this->_grade = 1;
		}
	}
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name) {
	std::cout << "Bureaucrat default constructor called" << std::endl;
	this->_grade = grade;
	verifyException(this->_grade);	
}

Bureaucrat::Bureaucrat(Bureaucrat const& src) {
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = src;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const& src) {
	(std::string)this->_name = src.getName();
	this->_grade = src.getGrade();

	return (*this);
}

std::exception	Bureaucrat::GradeTooHighException( void ) {
	throw std::out_of_range("Major grade is 1, grade changed to 1.");
}

std::exception	Bureaucrat::GradeTooLowException( void ) {
	throw std::out_of_range("Minor grade is 150, grade changed to 150.");
}

const std::string	Bureaucrat::getName( void ) const {
	return this->_name;
}

int	Bureaucrat::getGrade( void ) const {
	return this->_grade;
}

void Bureaucrat::upgrade( void ) {
	this->_grade = this->_grade - 1;
	verifyException(this->_grade);
}

void Bureaucrat::downgrade( void ) {
	this->_grade = this->_grade + 1;
	verifyException(this->_grade);
}

void	Bureaucrat::signForm(AForm& src) const {
	if (src.getSigned() == 1) {
		std::cout << this->getName() << " signed " << src << std::endl;
	}
	else {
		std::cout << this->getName() << " couldn't sign " << src << "because " << "low grade" << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form) {
	if (form.getNecessaryNoteExec() >= this->_grade) {
		form.execute(*this);

		std::cout << *this << " executed " << form << std::endl;
	}
	else {
		std::cout << *this << " not executed form. low grade" << std::endl;
	}
}

std::ostream &operator<<(std::ostream& ofs, Bureaucrat const& src) {
	ofs << src.getName() << ", Bureaucrat grade " << src.getGrade();
	return (ofs);
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat default destructor called" << std::endl;
}