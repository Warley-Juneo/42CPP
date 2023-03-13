#include "PmergeMe.hpp"
#include <set>
#include <sys/time.h>
#include <sstream>
#include <iomanip>

int validade_arguments(int argc, char* argument[]) {
	if (argc < 3) {
		return false;
	}

	std::set<int> numbers;
	for (int i = 1; i < argc; i++) {
		int value = std::atoi(argument[i]);
		if (value <= 0) {
			return false;
		}
		numbers.insert(value);
	}

	if ((int)numbers.size() != argc - 1)
		return false;

	return true;
}

int main(int argc, char* argv[]) {
	if (!validade_arguments(argc, argv)) {
		std::cout << "Error" << std::endl;
		return 1;
	}

	PmergeMe list(argc, argv);

	std::cout << "Before:   ";
	for (std::list<int>::iterator it = list.getList().begin(); it != list.getList().end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	struct timeval start, end;
	gettimeofday(&start, NULL);
	list.startMerge();
	gettimeofday(&end, NULL);
	double duration = (end.tv_sec - start.tv_sec) * 1000000.0 + (end.tv_usec - start.tv_usec);

	std::cout << "After:    ";
	for (std::list<int>::iterator it = list.getList().begin(); it != list.getList().end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	std::ostringstream out;
	out << std::fixed << std::setprecision(5) << duration;
	std::cout << "Time to process a range of " << list.getList().size() << " elements with std::list : " << out.str() << " us" << std::endl;
	return 0;
}
