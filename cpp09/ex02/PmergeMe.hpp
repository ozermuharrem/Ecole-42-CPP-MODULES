#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cctype>

class PmergeMeDeque
{
	public:
		PmergeMeDeque();
		~PmergeMeDeque();
		PmergeMeDeque(const PmergeMeDeque &obj);
		PmergeMeDeque &operator=(const PmergeMeDeque &obj);
		std::deque<int> dgData;
		void	addToDeq(std::deque<int> &dataDQ,char **argv);
		void	mergeDeq(std::deque<int>& deq, int left, int middle, int right);
		void	mergeSortDeq(std::deque<int>& deq, int left, int middle, int right);
		void	mergeInsertionSortDeq(std::deque<int>& deq, int left, int right);
		void	insertSortDeq(std::deque<int>& deq, int left, int right);
		void	printDeque(std::deque<int> &pdeque);

};

class PmergeMeVec
{
	public:
		PmergeMeVec();
		~PmergeMeVec();
		PmergeMeVec(const PmergeMeVec &obj);
		PmergeMeVec &operator=(const PmergeMeVec &obj);
		std::vector<int> vcData;
		void	addToVector(std::vector<int> & vec,char **arg);
		void	mergeSortVector(std::vector<int>& vec, int left, int middle, int right);
		void    vectorInsertSort(std::vector<int>& vec, int left, int right);
		void	mergeInsertionSortVec(std::vector<int>& vec, int left, int right);

		void	printVec(std::vector<int> &pvector);
};

bool ft_isdigit(char *arg);
