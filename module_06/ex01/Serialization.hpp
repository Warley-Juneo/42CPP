/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 14:51:44 by wjuneo-f          #+#    #+#             */
/*   Updated: 2023/01/08 15:19:48 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

#ifdef _LP64
typedef unsigned long uintptr_t;
#else
typedef unsigned int uintptr_t;
#endif

struct	Data {
	std::string	no_void;
};

class Serialization
{
	public:
		Serialization();
		Serialization(Serialization const& src);
		Serialization &operator=(Serialization const& src);
		~Serialization();

		uintptr_t	serialize(Data* ptr);
		Data* 		deserialize(uintptr_t raw);
	private:
		/* data */
};

