#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <cstdlib>
#include <exception>

#define MAX_VALUE 1000

class BitcoinExchange {
	public:
		typedef std::map<std::string, std::string> 						map_type;
		typedef std::map<std::string, std::string>::iterator	it_type;

		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& src);
		BitcoinExchange& operator=(const BitcoinExchange& src);
		~BitcoinExchange();

		void	showResults(std::ifstream& ifs_file);
		int		validadeDate(std::string& date_compare);

	public:
		map_type	_map;
};
