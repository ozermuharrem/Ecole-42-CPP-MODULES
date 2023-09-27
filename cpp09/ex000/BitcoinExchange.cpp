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

    int count = 0;

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

        this->_inputMap[++count] = make_pair(inpData, inpRate);

        std::map<int , std::pair<std::string, float> >::iterator it = _inputMap.begin();

        while(it != _inputMap.end())
        {
            std::cout << it -> first << "------" << it->second.first << it->second.second << std::endl;
            it++;
        }

        std::map<std::string, float > ::iterator it1 = _dataMap.find(it->second.first);

        std::cout << it1->first << std::endl;

    }

    inputData.close();
        
}

int findMap(std::map<std::string, float> Map, std::string const &data, float const &rate){
    std::map<std::string , float >::iterator it = Map.find(data);

    if(it != Map.end()){
		std::cout << data << " => " << rate << " = " << it->second * rate  << std::endl;
        return(1);
    }

    return (0);
}

std::string noData(std::string inputData, float rate){
    int day;
    int mount;
    int year;
    std::string str_day, str_mount, str_year;
    std::string changeDay; 

    day = atoi((inputData.substr(8, 2)).c_str());
    mount = atoi((inputData.substr(6, 2)).c_str());
    year = atoi((inputData.substr(0, 4)).c_str());

    if(year > 2023 || year < 2009)
		std::cout << "Error: invalid year => " << inputData << std::endl;
    if (mount < 1 || mount > 12)
    {
        std::cout << "Error: invalid month => " << inputData << std::endl;
    }
    if (day  < 1 || day > 31)
    {
        std::cout << "Error: invalid day => " << inputData << std::endl;
    }
    if (rate < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
    }
    else if (rate > 1000)
    {
        std::cout << "Error: too large a number." << std::endl;
    }

    // 2011 01 01 


    if(day == 1 && ( mount == 3 || mount == 5 || mount == 7 || mount == 8 || mount == 10 || mount == 12)){
        str_day = "31";
        if(mount == 3){
            str_mount = std::to_string(mount--);
            str_day = "28";
        }
    }
    else if(mount == 1){
        str_mount = "12";
        str_day = "31";
        str_year = std::to_string(year--);
    }
    else
        str_day = "30";

    if(day < 10 && day != 1)
        str_day = "0"+std::to_string(day--);

    if(mount < 10 ){
        str_mount = "0" + std::to_string(mount);
    }
    else
        str_year = std::to_string(year--);

    changeDay = str_year +"-"+ str_mount +"-" + str_day;

    return (changeDay);
}