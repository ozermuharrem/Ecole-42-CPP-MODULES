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

//DEQU
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

void	PmergeMeDeque::mergeSortDeq(std::deque<int>& deq, int left, int middle, int right)
{
	int n1 = middle - left + 1;
	int n2 = right - middle;

	std::deque<int> L(n1);
	std::deque<int> R(n2);

	for (int i = 0; i < n1; i++)
		L[i] = deq[left + i];
	for (int j = 0; j < n2; j++)
		R[j] = deq[middle + 1 + j];

	int i = 0;
	int j = 0;
	int k = left;

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			deq[k] = L[i];
			i++;
		} else {
			deq[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		deq[k] = L[i];
		i++;
		k++;
	}

	while (j < n2) {
		deq[k] = R[j];
		j++;
		k++;
	}
}

void	PmergeMeDeque::mergeInsertionSortDeq(std::deque<int>& deq, int left, int right)
{
	/*
		Eğer eleman sayısı çiftse, tam olarak orta noktayı elde ederiz.
		Ancak eleman sayısı tekse, 1'e yakın bir değer elde ederiz ve bu da aslında orta noktanın bir adım ilerisine denk gelir.
		Böyle durumlarda, middle + 1 kullanarak, tam olarak orta noktanın bir sonraki elemanını temsil ederiz.
		Yani middle + 1, sağ yarıyı belirtir. Bu şekilde, veri kümesini ikiye bölerken, tam olarak iki eşit yarı elde ederiz ve
		her birini ayrı ayrı sıralarız. Bu işlem Merge Sort algoritmasının doğru çalışması için önemlidir.
	*/
	if (right - left <= 100){ 
		
		insertSortDeq(deq, left, right);
	}
	else
	{
		// std::cout << "RIGHTTTTTT: " << right << " LEFTTTT " << left << std::endl;
		int middle = left + (right - left) / 2;

		mergeInsertionSortDeq(deq, left, middle);
		mergeInsertionSortDeq(deq, middle + 1, right);
		// std::cout << "LEFTTT: " << left << " RIGHTTT:" << right << std::endl;
		mergeSortDeq(deq, left, middle, right);
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

void PmergeMeVec::mergeSortVector(std::vector<int>& vec, int left, int middle, int right) {
	
	int n1 = middle - left + 1;
	int n2 = right - middle;

	std::vector<int> L(n1);
	std::vector<int> R(n2);

	for (int i = 0; i < n1; i++)
		L[i] = vec[left + i];
	for (int j = 0; j < n2; j++)
		R[j] = vec[middle + 1 + j];

	int i = 0;
	int j = 0;
	int k = left;

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			vec[k] = L[i];
			i++;
		} else {
			vec[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		vec[k] = L[i];
		i++;
		k++;
	}

	while (j < n2) {
		vec[k] = R[j];
		j++;
		k++;
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

void	PmergeMeVec::mergeInsertionSortVec(std::vector<int>& vec, int left, int right) {
	/*
		Eğer eleman sayısı çiftse, tam olarak orta noktayı elde ederiz.
		Ancak eleman sayısı tekse, 1'e yakın bir değer elde ederiz ve bu da aslında orta noktanın bir adım ilerisine denk gelir.
		Böyle durumlarda, middle + 1 kullanarak, tam olarak orta noktanın bir sonraki elemanını temsil ederiz.
		Yani middle + 1, sağ yarıyı belirtir. Bu şekilde, veri kümesini ikiye bölerken, tam olarak iki eşit yarı elde ederiz ve
		her birini ayrı ayrı sıralarız. Bu işlem Merge Sort algoritmasının doğru çalışması için önemlidir.
	*/
	if (right - left <= 100){ 
		
		vectorInsertSort(vec, left, right);
	}
	else
	{
		// std::cout << "RIGHTTTTTT: " << right << " LEFTTTT " << left << std::endl;
		int middle = left + (right - left) / 2;

		mergeInsertionSortVec(vec, left, middle);
		mergeInsertionSortVec(vec, middle + 1, right);
		// std::cout << "LEFTTT: " << left << " RIGHTTT:" << right << std::endl;
		mergeSortVector(vec, left, middle, right);
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