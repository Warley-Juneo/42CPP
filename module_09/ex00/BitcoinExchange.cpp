#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	std::ifstream ifs_file;
	ifs_file.open("data.csv");

	if (!ifs_file.is_open()) {
		std::cout << "Error: file not found" << std::endl;
		exit(1);
	}

	std::string line;
	std::getline(ifs_file, line);

	while (std::getline(ifs_file, line)) {
		this->_map[line.substr(0, line.find(','))] = line.substr(line.find(',') + 1);
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& src) {
	*this = src;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& src) {
	if (this != &src) {
		this->_map = src._map;
	}
	return *this;
}

void BitcoinExchange::showResults(std::ifstream& ifs_file) {
	std::string line;
	std::getline(ifs_file, line);

	std::string first_validade = line.substr(0, line.find('|') - 1);
	std::string second_validade = line.substr(line.find('|') + 2);
	if (first_validade != "date" || second_validade != "value") {
		return ;
	}
	std::string date_compare;
	float value;

	while (std::getline(ifs_file, line)) {
		date_compare = line.substr(0, line.find('|') - 1);
		if (validadeDate(date_compare)) {
			std::cout << "Error: Bad input => " << date_compare << std::endl;
			continue;
		}
		value = atof(line.substr(line.find('|') + 1).c_str());
		if (value < 0) {
			std::cout << "Error: not a positive number" << std::endl;
			continue;
		}
		if ((long)value > MAX_VALUE) {
			std::cout << "Error: too large a number" << std::endl;
			continue;
		}
		if (this->_map.find(date_compare) == this->_map.end()) {
			it_type itLow = this->_map.lower_bound(date_compare);
			if (itLow == this->_map.begin() && itLow->first != date_compare) {
					std::cout << "Error: Bad input => " << date_compare << std::endl;
					continue;
			}
			else {
				float bitcoin_price = atof(this->_map[itLow->first].c_str()) * value;
				std::cout << itLow->first << " => " << value << " = " << bitcoin_price << std::endl;
			}
		}
		else {
			float bitcoin_price = atof(this->_map[date_compare].c_str()) * value;
			std::cout << date_compare << " => " << value << " = " << bitcoin_price << std::endl;
		}
	}
}

int BitcoinExchange::validadeDate(std::string &date_compare) {
	try {
		int year = atoi(date_compare.substr(0, 4).c_str());
		int month = atoi(date_compare.substr(5, 2).c_str());
		int day = atoi(date_compare.substr(8, 2).c_str());

		if (year < 2009 || year > 2022 || month < 1 || month > 12 || day < 1) {
		return 1;
	}

	if (month == 2 && day > 29) {
		return 1;
	}

	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
		return 1;
	}

	if (month == 2 && day == 29 && (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0))) {
		return 1;
	}
	}
	catch (std::out_of_range& e) {
		return 1;
	}

	return 0;
}

BitcoinExchange::~BitcoinExchange() {
}
