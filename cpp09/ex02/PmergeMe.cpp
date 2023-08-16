#include "PmergeMe.hpp"

//isdigit
bool	ft_isdigit(char *arg)
{
	for (int i = 0; arg[i]; i++)
	{
		if (!isdigit(arg[i]) || atoi(arg) < 0)
			return false;
	}
	return true;
}

//DEQUE
PmergeMeDeque::PmergeMeDeque(){}
PmergeMeDeque::~PmergeMeDeque(){dgData.clear();}
PmergeMeDeque::PmergeMeDeque(const PmergeMeDeque &obj){*this = obj;}
PmergeMeDeque &PmergeMeDeque::operator=(const PmergeMeDeque &obj)
{
	(void)obj;
	return(*this);
}

void PmergeMeDeque::insertSortDeq(std::deque<int>& deq, int left, int right){
	for (int i = left + 1; i <= right; i++) 
	{
		int key = deq[i];
		int j = i - 1;

		while (j >= left && deq[j] > key) {
			deq[j + 1] = deq[j];
			j--;
		}

		deq[j + 1] = key;
	}
}

void	PmergeMeDeque::mergeSortDeq(std::deque<int>& deq, int left, int right)
{

	/*
		Eğer eleman sayısı çiftse, tam olarak orta noktayı elde ederiz.
		Ancak eleman sayısı tekse, 1'e yakın bir değer elde ederiz ve bu da aslında orta noktanın bir adım ilerisine denk gelir.
		Böyle durumlarda, middle + 1 kullanarak, tam olarak orta noktanın bir sonraki elemanını temsil ederiz.
		Yani middle + 1, sağ yarıyı belirtir. Bu şekilde, veri kümesini ikiye bölerken, tam olarak iki eşit yarı elde ederiz ve
		her birini ayrı ayrı sıralarız. Bu işlem Merge Sort algoritmasının doğru çalışması için önemlidir.
	*/
	if ((int)deq.size() <= 100){
		insertSortDeq(deq, left, right);
	}
	if (left < right)
	{
		int middle = left + (right - left) / 2;
		mergeSortDeq(deq, left, middle);
		mergeSortDeq(deq, middle + 1, right);
		insertSortDeq(deq, left, right);
	}
}

void PmergeMeDeque::addToDeq(std::deque<int> &con,char **argv)
{
	int i = 1;
	while (argv[i])
	{
		if (ft_isdigit(argv[i]))
			con.push_back(atoi((const char *)argv[i]));
		else
		{
			std::cout << "Error" << std::endl;
			exit(1);
		}
		i++;
	}
}

void	PmergeMeDeque::printDeque(std::deque<int> &pdeque)
{
	std::deque<int>::iterator it;

	it = pdeque.begin();
	while (it != pdeque.end())
	{
		std::cout << *it << " ";
		++it;
	}
}

//!vector

PmergeMeVec::PmergeMeVec(){}
PmergeMeVec::~PmergeMeVec(){vcData.clear();}
PmergeMeVec::PmergeMeVec(const PmergeMeVec &obj){*this = obj;}
PmergeMeVec &PmergeMeVec::operator=(const PmergeMeVec &obj)
{
	(void)obj;
	return(*this);
}

void PmergeMeVec::vectorInsertSort(std::vector<int>& vec, int left, int right){
	for (int i = left + 1; i <= right; i++) 
	{
		int key = vec[i];
		int j = i - 1;

		while (j >= left && vec[j] > key) {
			vec[j + 1] = vec[j];
			j--;
		}

		vec[j + 1] = key;
	}
}

void	PmergeMeVec::mergeSortVector(std::vector<int>& vec, int left, int right) {
	
	if (right - left <= 100){
		vectorInsertSort(vec, left, right);
	}
	if (left < right)
	{
		int middle = left + (right - left) / 2;

		mergeSortVector(vec, left, middle);
		mergeSortVector(vec, middle + 1, right);
		vectorInsertSort(vec, left, right);
	}
}

void PmergeMeVec::addToVector(std::vector<int> &vec,char **arg)
{
	int i = 0;
	while (arg[++i])
	{
		if (ft_isdigit(arg[i]))
		{
			vec.push_back(atoi(arg[i]));
		}
		else
		{
			std::cout << "Error" << std::endl;
			exit(1);
		}
	}
}


void	PmergeMeVec::printVec(std::vector<int> &pvector)
{
	std::vector<int>::iterator it;

	it = pvector.begin();
	while (it != pvector.end())
	{
		std::cout << *it << " ";
		++it;
	}
}