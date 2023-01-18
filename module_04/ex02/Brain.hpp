/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:41:13 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/09/07 17:03:55 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
	public:
		Brain();
		Brain(Brain const& src);
		Brain &operator=(Brain const& src);
		~Brain();

		std::string getIdeia(int idx) const;
	private:
		std::string	_idea[100];
};

std::ostream &operator<<(std::ostream& ofs, Brain const &b);
#endif
