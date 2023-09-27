#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc > 2)
	{
		std::cerr << "Arg Error" << std::endl;
		exit(1);
	}
	BitcoinExchange bit;
    
	bit.rateCalculator(argv[1]);
}