/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:51:36 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/09/08 11:34:16 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {
	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(AAnimal const& src);
		AAnimal &operator=(AAnimal const& src);
		virtual ~AAnimal();

		std::string const getType() const;
		virtual void makeSound() const = 0;
	protected:
		std::string	_type;
};

#endif
