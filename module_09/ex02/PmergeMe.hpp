#pragma once

#include <iostream>
#include <list>
#include <cstdlib>
#include <deque>

class PmergeMe
{
	public:
		PmergeMe(int len, char* list[]);
		PmergeMe(PmergeMe const& cpy);
		PmergeMe &operator=(PmergeMe const& cpy);
		~PmergeMe();

		void	startMergeList();
		void	mergeSortListList(std::list<int>& list);
		void	mergeListList(std::list<int>& left, std::list<int>& right, std::list<int>& result);

		void	startMergeDeque();
		void	mergeSortListDeque(std::list<int>& list);
		void	mergeListDeque(std::list<int>& left, std::list<int>& right, std::list<int>& result);

		std::list<int>& getListList() {
			return my_list;
		}
		std::deque<int>& getListDeque() {
			return my_deque;
		}

	private:
		std::list<int>	my_list;
		std::deque<int>	my_deque;
};

