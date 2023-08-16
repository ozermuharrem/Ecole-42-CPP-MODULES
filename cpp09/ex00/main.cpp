#include "BitcoinExchange.hpp"

/* input.txt deki tarihi data.csv de bulur ve input.txt'deki bitcoin sayısını data.csvdeki
o tarihteki değer ile çarpar. Eğer O tarih yoksa ondan önceki en yakın tarih için aynısını yapar. */

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