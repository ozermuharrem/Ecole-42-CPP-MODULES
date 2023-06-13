#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat a("Mozer", 149);
		std::cout << a;
		a.gradeDown();
		std::cout << a;
		a.gradeUp();
		std::cout << a;
        a.gradeUp();
		std::cout << a;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what();
	}
}
