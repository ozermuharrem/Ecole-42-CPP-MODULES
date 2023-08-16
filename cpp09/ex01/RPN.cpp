#include "RPN.hpp"

RPN::RPN()
{
	this->token_counter = 0;
}

RPN::~RPN() {}

void	RPN::my_checker(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Arg error" << std::endl;
        exit(1);
    }

    int i = 1;
    int j = 0;

    while(argv[i])
    {
        j = 0;//4
        while(argv[i][j])
       {
            if (argv[i][j] == '/' || argv[i][j] == '+' || argv[i][j] == '*' || argv[i][j] == '-')
            {
                this->token_counter++;// 2 
                this->real_token = argv[i][j]; // * - 
            }
            j++;
       }
       i++;
    }

    if (this->token_counter == 0)
    {
        std::cerr << "There is no Operator" << std::endl;
        exit(1);
    }
}
