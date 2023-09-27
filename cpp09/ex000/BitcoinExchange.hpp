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
        std::map<std::string, float> _dataMap;
        std::map<int, std::pair<std::string , float> > _inputMap;

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


int findMap(std::map<std::string, float> Map, std::string const &data,float const &rate);
std::string noData(std::string inputData, float rate);