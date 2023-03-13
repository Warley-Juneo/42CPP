#pragma once

#include <iostream>
#include <list>
#include <cstdlib>

class PmergeMe
{
	public:
		PmergeMe(int len, char* list[]);
		PmergeMe(PmergeMe const& cpy);
		PmergeMe &operator=(PmergeMe const& cpy);
		~PmergeMe();

		void	startMerge();
		void	mergeSortList(std::list<int>& list);
		void	mergeList(std::list<int>& left, std::list<int>& right, std::list<int>& result);

		std::list<int>& getList() {
			return my_list;
		}

	private:
		std::list<int>	my_list;
};

