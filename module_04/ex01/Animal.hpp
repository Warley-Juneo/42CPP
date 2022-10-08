/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:51:36 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/09/07 15:24:10 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
	public:
		Animal();
		Animal(std::string type);
		Animal(Animal const& src);
		Animal &operator=(Animal const& src);
		virtual ~Animal();

		std::string const getType() const;
		virtual void makeSound() const;
	protected:
		std::string	_type;
};

#endif
