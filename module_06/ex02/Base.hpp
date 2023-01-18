/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:08:05 by wjuneo-f          #+#    #+#             */
/*   Updated: 2023/01/10 11:53:44 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE
#define BASE

#include <iostream>
#include <cstdlib>
#include <exception>

class Base
{
	public:
		virtual ~Base( void ) {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base*	generate(void);
void	indentify(Base* p);
void	indentify(Base& e);

#endif
