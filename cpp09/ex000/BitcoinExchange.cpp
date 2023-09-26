#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
    std::string line;

    this->ifs.open("data.csv", std::ifstream::in);

    if(!this->ifs.is_open())
        std::cout << "File could not open!" << std::endl;

    std::getline(this->ifs, line);

    while(std::getline(this->ifs, line)){
        this->_data = line.substr(0,10);
        this->_rate = atof((line.substr(11, line.length()-1)).c_str());

        this->_dataMap.insert(std::pair<std::string, float>(this->_data, this->_rate));

    }

   // std::map<std::string , float> ::iterator it = _dataMap.find("2021-09-18");
   // printMap(this->_dataMap, it->first , "2022-01-24");
    std::cout << "Data Map in size() " << this->_dataMap.size() << std::endl;
}
BitcoinExchange::~BitcoinExchange(){
    this->ifs.close();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src){
    *this = src;
}
BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &src){
    this->_data = src._data;
    this->_rate = src._rate;

    return (*this);
}

std::string const &BitcoinExchange::getData()const{
    return this->_data;
}
float const &BitcoinExchange::getRate()const{
    return this->_rate;
}

void BitcoinExchange::setData(std::string const &data){
    this->_data = data;
}
void BitcoinExchange::setRate(float const &rate){
    this->_rate = rate;
}

void BitcoinExchange::rateCalculator(char *filename){
    std::ifstream inputData;
    std::string line;
    std::string inpData;
    float inpRate;

    inputData.open(filename, std::ifstream::in);

    if(!inputData.is_open()){
        std::cout << "Error: could not open file." << std::endl;
		return;
    }

    getline(inputData, line);

    while(getline(inputData, line)){
        if (!strchr(line.c_str(), '-') || !strchr(line.c_str(), '|'))
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}
        inpData = line.substr(0,10);
        inpRate = atof((line.substr(13, line.size() - 13)).c_str());

        // std::cout << inpRate << std::endl;

        printMap(this->_dataMap, inpData, inpRate);

    }

       
    
    inputData.close();
        
}

void printMap(std::map<std::string, float> Map, std::string const &data, float const &rate){
    std::map<std::string , float >::iterator it = Map.find(data);

    if(it != Map.end())
    {
        std::cout << it->first << " "<< it -> second << " "<< rate<< std::endl; 
        std::cout << it->second * rate << std::endl;
    }
    else
    {
        std::cout << "Gardas Bulamadim " << std::endl;
        exit(1);
    }

    // while(it != Map.end()){
    //     std::cout << it -> first << " =========== " << it -> second << std::endl;
    //     it++;
    // }
//     std::cout << "Carpim Islemi " << Map[data]  << " x " << Map[data1]  <<  " = " <<  Map[data] * Map[data1] << std::endl;
//     std::cout << 3.05 * 1.75 << std::endl;
}
