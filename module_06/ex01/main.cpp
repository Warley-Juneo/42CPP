/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 15:10:35 by wjuneo-f          #+#    #+#             */
/*   Updated: 2023/01/09 14:55:25 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main () {
	Serialization	serialization;
	Data			data;
	uintptr_t		raw;
	Data*			deserialize_data;

	data.no_void = "Hello Word!";

	std::cout << "O endereço de data é: " << std::hex << static_cast<void*>(&data) << std::endl;
	raw = serialization.serialize(&data);
	std::cout << "Data foi serializado em: " << raw << std::endl;
	deserialize_data = serialization.deserialize(raw);
	std::cout << deserialize_data->no_void << std::endl;

	return 0;
}
