/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 20:08:09 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/08/26 21:08:37 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

#define DEBUG_MSG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-\
ketchup burger. I really do!"

#define INFO_MSG "I cannot believe adding extra bacon costs more money. You didn’t put\
enough bacon in my burger! If you did, I wouldn’t be asking for more!"

#define WARNING_MSG "I think I deserve to have some extra bacon for free. I’ve been coming for\
years whereas you started working here since last month."

#define ERROR_MSG "This is unacceptable! I want to speak to the manager now."

class Harl {
	public:
		Harl();
		~Harl();
		void complain( std::string level );
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};

#endif
