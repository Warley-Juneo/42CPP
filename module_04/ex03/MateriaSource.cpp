/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:29:41 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/09/11 13:33:43 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->_subjects_learned[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const& src) {
	std::cout << "MateriaSource copy contructor called" << std::endl;
	*this = src;
}

MateriaSource &MateriaSource::operator=(MateriaSource const& src) {
	if (this != &src) {
		for (int i = 0; i < 4; i++) {
			if (this->_subjects_learned[i]) {
				delete this->_subjects_learned[i];
			}
			if (src._subjects_learned[i]) {
				this->_subjects_learned[i] = src.getSubjectLearn(i)->clone();
			}
		}
	}
	return (*this);
}

AMateria const* MateriaSource::getSubjectLearn(int idx) const{
	return (this->_subjects_learned[idx]);
}

void MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (!_subjects_learned[i]) {
			this->_subjects_learned[i] = m;
			std::cout << "learn Materia completed" << std::endl;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const& type) {
	for (int i = 0; i < 4; i++) {
		if (this->_subjects_learned[i] && this->_subjects_learned[i]->getType() == type) {
			return (this->_subjects_learned[i]->clone());
			std::cout << "AMateria created!" << std::endl;
		}
	}
	std::cout << "AMateria not created!";
	return (0);
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource default destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		delete this->_subjects_learned[i];
	}
}
