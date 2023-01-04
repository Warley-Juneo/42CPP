/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 12:52:15 by wjuneo-f          #+#    #+#             */
/*   Updated: 2023/01/03 17:56:05 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

const char* RobotomyRequestForm::gradeTooLowException::what() const throw() {
    return ("Execute failed!");
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : AForm("Robotomy Request Form", 72, 45) {
    this->_target = target;
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const& src ) {
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
    if (this != &src) {
        *this = src;
    }
}

RobotomyRequestForm &RobotomyRequestForm::operator=( RobotomyRequestForm const& src) {
    this->setName(src.getName());
    this->setSigned(src.getSigned());
    this->setNecessaryNote(src.getNecessaryNote());
    this->setNecessaryNoteExec(src.getNecessaryNoteExec());
    this->_target = src._target;

    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const {
    try {
        if ( AForm::getSigned() && (executor.getGrade() <= AForm::getNecessaryNoteExec()) )
        {
            srand(time(NULL));
            std::cout << "Sshhhhzzz shhzzz...";
            int randNum = rand() % 2;
            
            if (randNum == 1) {
                std::cout << this->_target << " has been robotmized" << std::endl;
            }
            else {
                std::cout << "robotomy failed" << std::endl;
            }
        }
        else {
            throw gradeTooLowException();
        }     
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm default destructor called" << std::endl;
}