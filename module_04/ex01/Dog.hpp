/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:17:51 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/09/07 21:04:19 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
	public:
		Dog();
		Dog(Dog const& src);
		Dog &operator=(Dog const& src);
		~Dog();

		std::string const getType() const;
		void makeSound() const;
		Brain const* getBrain() const;
	private:
		Brain* _brain;
};

#endif
