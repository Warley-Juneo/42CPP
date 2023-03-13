#include "RPN.hpp"

int main(int argc, char* argv[]) {
	std::stack<int>		my_stack;
	std::string 			operation;

	for (int i = 1; i < argc; i++) {
		operation += argv[i];
		if (i != argc - 1) {
			operation += ' ';
		}
	}

	RPN result(operation, my_stack);
	result.RPNValidadeCharacters();
	result.RPNCalculator();
}
