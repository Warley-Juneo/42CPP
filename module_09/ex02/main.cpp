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
	{
		PmergeMe list(argc, argv);

		std::cout << "Before:   ";
		for (std::list<int>::iterator it = list.getListList().begin(); it != list.getListList().end(); it++) {
			std::cout << *it << " ";
		}
		std::cout << std::endl;

		struct timeval start, end;
		gettimeofday(&start, NULL);
		list.startMergeList();
		gettimeofday(&end, NULL);
		double duration = (end.tv_sec - start.tv_sec) * 1000000.0 + (end.tv_usec - start.tv_usec);

		struct timeval start2, end2;
		gettimeofday(&start2, NULL);
		list.startMergeList();
		gettimeofday(&end2, NULL);
		double duration2 = (end2.tv_sec - start2.tv_sec) * 1000000.0 + (end2.tv_usec - start2.tv_usec);

		std::cout << "After:    ";
		for (std::list<int>::iterator it = list.getListList().begin(); it != list.getListList().end(); it++) {
			std::cout << *it << " ";
		}
		std::cout << std::endl;

		std::ostringstream out;
		out << std::fixed << std::setprecision(5) << duration;
		std::cout << "Time to process a range of " << list.getListList().size() << " elements with std::list : " << out.str() << " us" << std::endl;

		std::ostringstream out2;
		out2 << std::fixed << std::setprecision(5) << duration2;
		std::cout << "Time to process a range of " << list.getListDeque().size() << " elements with std::list : " << out2.str() << " us" << std::endl;
	}
}

