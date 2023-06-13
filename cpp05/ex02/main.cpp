#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	// {
	// 	std::cout << std::endl << "-----------Test 1-----------" << std::endl;
	// 	try
	// 	{
	// 		Bureaucrat	b;
	// 		Bureaucrat	b2("Bro", 100);
	// 		std::cout << b << b2;
	// 		ShrubberyCreationForm a("Ali");
	// 		b.signForm(a);
	// 		a.execute(b2);

	// 	}
	// 	catch (std::exception & e)
	// 	{
	// 		std::cerr << e.what() << std::endl;
	// 	}
	// }
	// {
    //     std::cout << std::endl << "-----------Test 2-----------" << std::endl;
    // 	try
    //     {
    //         Bureaucrat  b("Bro", 100);
	// 		Bureaucrat	b2("Ali", 148);
    //         std::cout << b;
    //         ShrubberyCreationForm f1("BRO_TREE");
	// 		ShrubberyCreationForm f2;
    //         // b.signForm(f1);
    //         // f1.execute(b);
	// 		b2.signForm(f2);
	// 		f2.execute(b2);

    //     }
    //     catch (std::exception & e)
    //     {
    //         std::cerr << e.what() << std::endl;
    //     }
	// }
	// {
	// 	std::cout << std::endl << "-----------Test 3-----------" << std::endl;
	// 	try
    //     {
    //         Bureaucrat  b("Bro", 100);
    //         Bureaucrat  b2("Ali", 46);
    //         std::cout << b;
    //         ShrubberyCreationForm f1("Halil");
    //         RobotomyRequestForm f2;
    //         b.signForm(f1);
    //         f1.execute(b);
    //         b2.signForm(f2);
    //         f2.execute(b2);

    //     }
    //     catch (std::exception & e)
    //     {
    //         std::cerr << e.what() << std::endl;
    //     }
	// }
	{
        std::cout << std::endl << "-----------Test 4-----------" << std::endl;
        try
        {
            Bureaucrat  b1("Bro", 1);
            Bureaucrat  b20("20", 20);
            Bureaucrat  b50("50", 50);
            Bureaucrat  b70("70", 70);
            Bureaucrat  b100("100", 100);
            Bureaucrat  b140("140", 140);


            PresidentialPardonForm f1("Presidental--f1");
            PresidentialPardonForm f2("Presidental--f2");
            b1.signForm(f1);
            f1.execute(b1);
			
            b20.signForm(f2);
            f2.execute(b20);
            
            b50.signForm(f2);
            f2.execute(b50);
        }
        catch (std::exception & e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
}
