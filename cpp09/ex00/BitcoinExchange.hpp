#pragma once

#include <iostream>
#include <fstream>
#include "string.h"
#include <iomanip>
#include <map>

class BitcoinExchange{
    private:
        std::string _data;
        float _rate;
		std::ifstream ifs;
        std::map<int, float> _dataMap;
        std::map<int, std::pair<int , float> > _inputMap;

    public:
        BitcoinExchange();
        ~BitcoinExchange();

        BitcoinExchange(BitcoinExchange const &src);
        BitcoinExchange &operator=(BitcoinExchange const &src);

        std::string const &getData()const;
        float const &getRate()const;

        void setData(std::string const &data);
        void setRate(float const &rate);

		void rateCalculator(char *filename);
};


int yearMountDayRate(std::string str, float rate);
