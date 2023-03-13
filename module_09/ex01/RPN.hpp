#pragma once

#include <iostream>
#include <stack>
#include <cstring>
#include <string>
#include <cstdlib>

class RPN {
	public:
		RPN(std::string equation, std::stack<int> operands);
		RPN(RPN const &cpy);
		RPN &operator=(RPN const &cpy);
		~RPN();


		bool	RPNValidadeCharacters();
		int		RPNCalculator();

		// auxiliares
		int		ExecOperation(char op, int operand1, int operand2);

	private:
		std::string				_equation;
		std::stack<int>		_operands;
};
