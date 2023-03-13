#include "RPN.hpp"

RPN::RPN(std::string equation, std::stack<int> operands) : _equation(equation), _operands(operands) {
}

RPN::RPN(RPN const& cpy) {
	*this = cpy;
}

RPN &RPN::operator=(RPN const& cpy) {
	if (this != &cpy) {
		this->_equation = cpy._equation;
		this->_operands = cpy._operands;
	}

	return *this;
}

bool RPN::RPNValidadeCharacters() {

	bool expecting_space = false;

	for (int i = 1; _equation[i] != '\0'; i++) {
		if (isdigit(_equation[i]) && expecting_space == false) {
			expecting_space = true;
		}
		else if (strchr("+-*/", _equation[i]) && expecting_space == false) {
			expecting_space = true;
		}
		else if (expecting_space) {
			if (_equation[i] == ' ') {
				expecting_space = false;
			}
		}
		else {
			return false;
		}
	}
	return true;
}

int	RPN::RPNCalculator() {

	int i = -1;
	while (_equation[++i]) {
		if (_equation[i] == ' ') {
			;
		}
		else if (isdigit(_equation[i])) {
			_operands.push(_equation[i] - '0');
		}
		else if (strchr("+-*/", _equation[i])) {
			if (_operands.size() < 2) {
				std::cerr << "Error: insufficient operands for operator " << _equation[i] << std::endl;
				return 1;
			}
			int operand2 = _operands.top(); _operands.pop();
			int operand1 = _operands.top(); _operands.pop();
			int result = ExecOperation(_equation[i], operand1, operand2);
			_operands.push(result);
		}
		else {
			std::cerr << "Error: invalid token " << _equation << std::endl;
			return 1;
		}
	}

	if (_operands.size() != 1) {
		std::cerr << "Error: invalid RPN expression" << std::endl;
		return 1;
	}

	std::cout << _operands.top() << std::endl;
	return 0;
}

int RPN::ExecOperation(char op, int operand1, int operand2) {
	switch (op) {
	case '+':
		return operand1 + operand2;
	case '-':
		return operand1 - operand2;
	case '*':
		return operand1 * operand2;
	case '/':
		if (operand2 == 0) {
			std::cerr << "Error: Division by zero" << std::endl;
			exit(1);
		}
		return operand1 / operand2;
	default:
		std::cerr << "Error: invalid operator" << std::endl;
		exit(1);
	}
}

RPN::~RPN() {
}
