#include "BitcoinExchange.hpp"

int main (int argc, char* argv[]) {
	if (argc != 2) {
		std::cout << "Error: could not open file." << std::endl;
		return 1;
	}

	std::ifstream ifs_file;
	ifs_file.open(argv[1]);

	if (!ifs_file.is_open()) {
		std::cout << "Error: file not found" << std::endl;
		return 1;
	}

	BitcoinExchange result;
	result.showResults(ifs_file);
	return 0;
}
