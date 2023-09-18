#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	PmergeMeDeque pmd;
	PmergeMeVec pmv;

	clock_t startDeq,endDeq;
	clock_t startVec, endVec;
	double	timeDeq, timeVec;

	if (argc > 1)
	{
		//DEQUE
		startDeq = clock();
		pmd.addToDeq(pmd.dgData, argv);
		// std::cout << "Before: "; //!
		// pmd.printDeque(pmd.dgData); //!
		// std::cout << std::endl; //!
		// std::cout << "After: "; //!
		pmd.mergeInsertionSortDeq(pmd.dgData, 0, pmd.dgData.size() - 1);
		// pmd.printDeque(pmd.dgData);//!
		endDeq = clock();
		timeDeq = (double)(endDeq - startDeq) / CLOCKS_PER_SEC;

		//vector

	
		startVec = clock();
		pmv.addToVector(pmv.vcData, argv);
		std::cout << "Before: "; //!
		pmv.printVec(pmv.vcData); //!
		pmv.mergeInsertionSortVec(pmv.vcData, 0, pmv.vcData.size() - 1);
		std::cout << std::endl; //!
		std::cout << "After: "; //!
		pmv.printVec(pmv.vcData); //!
		endVec = clock();
		timeVec = (double)(endVec - startVec) / CLOCKS_PER_SEC;
		std::cout << "\nTime to process a range of " << pmd.dgData.size() << " elements with std::[deque] : " << std::fixed << timeDeq << " us" << std::endl;
		std::cout << "Time to process a range of " << pmv.vcData.size() << " elements with std::[ vector ] : " << std::fixed << timeVec << " us" << std::endl;
	}
	else
		std::cout << "Error" << std::endl;
	return 0;
}
