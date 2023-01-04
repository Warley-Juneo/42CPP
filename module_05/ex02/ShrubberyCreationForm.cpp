/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 12:52:15 by wjuneo-f          #+#    #+#             */
/*   Updated: 2023/01/03 15:56:29 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

const char* ShrubberyCreationForm::gradeTooLowException::what() const throw() {
    return ("Execute failed!");
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : AForm("Shrubbery Creation Form", 145, 137) {
    this->_target = target;
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const& src ) {
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
    if (this != &src) {
        *this = src;
    }
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=( ShrubberyCreationForm const& src) {
    this->setName(src.getName());
    this->setSigned(src.getSigned());
    this->setNecessaryNote(src.getNecessaryNote());
    this->setNecessaryNoteExec(src.getNecessaryNoteExec());
    this->_target = src._target;

    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
    std::string archiveName = this->_target;
    archiveName = archiveName + "_shurubbery";
    try {
        if ( AForm::getSigned() && (executor.getGrade() <= AForm::getNecessaryNoteExec()) ) {
            std::ofstream file(archiveName.c_str());
            if (file.is_open()) {
                file << "          _-_" << std::endl;
                file << "        /   ,,)" << std::endl;
                file << "       ;-.-' o )" << std::endl;
                file << "      /|   '._\\" << std::endl;
                file << "     ; |      \\" << std::endl;
                file << "     | :       L" << std::endl;
                file << "     |  \\      |" << std::endl;
                file << "     ;   '-.   /" << std::endl;
                file << "    /      )  /" << std::endl;
                file << "   /       | /" << std::endl;
                file << "   L       |]" << std::endl;
                file << "   L      /'" << std::endl;
                file << "   \\    /" << std::endl;
                file << "   '-./" << std::endl;
                file << std::endl;
                file.close();
            }
            else {
                std::cout << "Failed open archive!" << std::endl;
            }
        }
        else {
            throw   gradeTooLowException();
        }
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm default destructor called" << std::endl;
}