#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	PmergeMeDeque pmd;
	PmergeMeVec pmv;

	clock_t startdeq,enddeq;
	clock_t startmap, endmap;
	double	timedeq, timemap;

	if (argc > 1)
	{
		//DEQUE
		startdeq = clock();
		pmd.addToDeq(pmd.dgData, argv);
		std::cout << "Before: "; //!
		pmd.printDeque(pmd.dgData); //!
		std::cout << std::endl; //!
		std::cout << "After: "; //!
		pmd.mergeSortDeq(pmd.dgData, 0, pmd.dgData.size() - 1);
		pmd.printDeque(pmd.dgData);//!
		enddeq = clock();
		timedeq = (double)(enddeq - startdeq) / CLOCKS_PER_SEC;

		//vector

	
		startmap = clock();
		pmv.addToVector(pmv.vcData, argv);
		//std::cout << "Before: "; //!
		//pmv.printVec(pmv.vcData); //!
		pmv.mergeSortVector(pmv.vcData, 0, pmv.vcData.size() - 1);
		//std::cout << std::endl; //!
		//std::cout << "After: "; //!
		//pmv.printVec(pmv.vcData); //!
		endmap = clock();
		timemap = (double)(endmap - startmap) / CLOCKS_PER_SEC;
		std::cout << "\nTime to process a range of " << pmd.dgData.size() << " elements with std::[deque] : " << std::fixed << timedeq << " us" << std::endl;
		std::cout << "Time to process a range of " << pmv.vcData.size() << " elements with std::[ vector ] : " << std::fixed << timemap << " us" << std::endl;
	}
	else
		std::cout << "Error" << std::endl;
	return 0;
}
