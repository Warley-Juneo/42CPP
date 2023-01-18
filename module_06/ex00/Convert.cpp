/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:24:54 by wjuneo-f          #+#    #+#             */
/*   Updated: 2023/01/06 22:53:10 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert() {
    std::cout << "Convert default constructor called" << std::endl;
}

Convert::Convert(Convert const& src) {
	std::cout << "Convert copy constructor called" << std::endl;
	if (this != &src) {
		*this = src;
	}
}

Convert &Convert::operator=(Convert const& src) {
	return *this = src;
}

bool	Convert::firstValidations( char *param, long value, char* endValue) {
	if (value == 0) {
		std::cout << "impossible" << std::endl;
		return false;
	}
	return true;
}

bool	Convert::validPosPointer(std::string pos) {
	int	x;

	x = 0;
	if (pos[x + 1] == '\0' || pos[x + 1] == 'f') {
		return false;
	}

	while (pos[++x]) {
		if (pos[x] >= '0' && pos[x] <= '9') {
			continue ;
		}
		if ((pos[x] == 'f' || pos[x] == 'F' )&& pos[x + 1] == '\0') {
			continue ;
		}
		else {
			return false;
		}
	}
	return true;
}

void Convert::stringConvert( char* param) {
	int		value;
	char*	endValue;
	std::string valid = (std::string)param;

	value = std::strtol(param, &endValue, 10);
	if (*param == '0') {
		std::cout << "not displayable" << std::endl;
		return ;
	}
	if (!firstValidations(param, value, endValue)) {
		return;
	}

	if (*endValue == '\0') {
		std::cout << (char)value << std::endl;
		return ;
	}

	if (*endValue == '.') {
		if (validPosPointer(valid.substr(valid.find('.'), valid.length()))) {
			if (value >= 32 && value <= 126) {
				std::cout << (char)value << std::endl;
			}
			else {
				std::cout << "not displayable" << std::endl;
			}
			return;
		}
		else {
			std::cout << "impossible" << std::endl;
			return;
		}
	}
	else {
		std::cout << "impossible" << std::endl;
	}
}

void	Convert::intConvert( char* param ) {
	int		value;
	char*	endValue;
	std::string valid = (std::string)param;

	value = std::strtol(param, &endValue, 10);
	if (*param == '0') {
		std::cout << value << std::endl;
		return ;
	}
	if (!firstValidations(param, value, endValue)) {
		return;
	}
	if (*endValue == '\0') {
		std::cout << value << std::endl;
		return ;
	}
	if (*endValue == '.') {
		if (validPosPointer(valid.substr(valid.find('.'), valid.length()))) {
			std::cout << value << std::endl;
		}
		else {
			std::cout << "impossible" << std::endl;
		}
		return ;
	}
	else {
		std::cout << "impossible" << std::endl;
	}
}

void	Convert::floatConvert( char* param ) {
	int		value;
	float	fvalue;
	char*	endValue;
	std::string valid = (std::string)param;

	value = std::strtod(param, &endValue);
	fvalue = std::strtod(param, &endValue);

	if (*param == '0') {
		std::cout << fvalue << ".0f" << std::endl;
		return ;
	}
	if (!firstValidations(param, value, endValue)) {
		return;
	}
	if (std::isnan(fvalue)) {
		std::cout << "nanf" << std::endl;
		return;
	}
	if (std::isinf(fvalue)) {
		std::cout << "inff" << std::endl;
		return;
	}
	if (*endValue == '\0' && *(endValue - 1) != '.') {
		if (fvalue == value) {
			std::cout << fvalue << ".0f" << std::endl;
		}
		else {
			std::cout << fvalue << "f" << std::endl;
		}
		return ;
	}
	if (*endValue == 'f') {
		if (validPosPointer(valid.substr(valid.find('.'), valid.length()))) {
			if (fvalue == value) {
				std::cout << fvalue << ".0f" << std::endl;
			}
			else {
				std::cout << fvalue << "f" << std::endl;
			}
			return ;
		}
	}
	std::cout << "impossible" << std::endl;
}

void	Convert::doubleConvert( char* param) {
		int		value;
	float	fvalue;
	char*	endValue;
	std::string valid = (std::string)param;

	value = std::strtod(param, &endValue);
	fvalue = std::strtod(param, &endValue);

	if (*param == '0') {
		std::cout << fvalue << ".0" << std::endl;
		return ;
	}
	if (!firstValidations(param, value, endValue)) {
		return;
	}
	if (std::isnan(fvalue)) {
		std::cout << "nan" << std::endl;
		return;
	}
	if (std::isinf(fvalue)) {
		std::cout << "inf" << std::endl;
		return;
	}
	if (*endValue == '\0' && *(endValue - 1) != '.') {
		if (fvalue == value) {
			std::cout << fvalue << ".0" << std::endl;
		}
		else {
			std::cout << fvalue << std::endl;
		}
		return ;
	}
	if (*endValue == 'f') {
		if (validPosPointer(valid.substr(valid.find('.'), valid.length()))) {
			if (fvalue == value) {
				std::cout << fvalue << ".0" << std::endl;
			}
			else {
				std::cout << fvalue << std::endl;
			}
			return ;
		}
	}
	std::cout << "impossible" << std::endl;
}

Convert::~Convert() {
	std::cout << "Convert default destructor called" << std::endl;
}
