/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:25:18 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/09/11 13:00:25 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef MATERIASOURCE
# define MATERIASOURCE

#include "IMateriaSource.hpp"
class IMateriaSource;

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource();
		MateriaSource(MateriaSource const& src);
		MateriaSource &operator=(MateriaSource const& src);
		~MateriaSource();

		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const& type);
		AMateria const* getSubjectLearn(int idx) const;
	private:
		AMateria* _subjects_learned[4];
};

#endif
