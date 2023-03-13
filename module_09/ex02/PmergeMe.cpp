#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int len, char *list[]) {
	for (int i = 1; i < len; i++) {
		this->my_list.push_back(std::atoi(list[i]));
	}
}

PmergeMe::PmergeMe(PmergeMe const& cpy) {
	*this = cpy;
}

PmergeMe &PmergeMe::operator=(PmergeMe const& cpy) {
	if (this != &cpy) {
			this->my_list = cpy.my_list;
	}
	return *this;
}

PmergeMe::~PmergeMe() {

}

void PmergeMe::startMerge() {
	mergeSortList(this->my_list);
}

void PmergeMe::mergeSortList(std::list<int>& list) {
	if (list.size() <= 1) {
		return;
	}

	std::list<int> left, rigth;
	int middle = list.size() / 2;
	for (int i = 0; i < middle; i++) {
		left.push_back(list.front());
		list.pop_front();
	}
	while (!list.empty()) {
	 rigth.push_back(list.front());
	 list.pop_front();
	}

	mergeSortList(left);
	mergeSortList(rigth);

	mergeList(left, rigth, list);
}

void PmergeMe::mergeList(std::list<int>& left, std::list<int>& right, std::list<int>& result) {
	while (!left.empty() && !right.empty()) {
		if (left.front() <= right.front()) {
			result.push_back(left.front());
			left.pop_front();
		}
		else {
			result.push_back(right.front());
			right.pop_front();
		}
	}

	while (!left.empty()) {
		result.push_back(left.front());
		left.pop_front();
	}

	while (!right.empty()) {
		result.push_back(right.front());
		right.pop_front();
	}
}

