/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:02:42 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/09/07 21:04:31 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	public:
		Cat();
		Cat(Cat const& src);
		Cat &operator=(Cat const& src);
		~Cat();

		std::string const getType() const;
		void makeSound() const;
		Brain const* getBrain() const;
	private:
		Brain* _brain;
};

#endif
