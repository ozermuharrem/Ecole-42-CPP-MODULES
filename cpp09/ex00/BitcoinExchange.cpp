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

        size_t position;
        while ((position = this->_data.find('-')) != std::string::npos) {
            this->_data.erase(position, 1);
        }

        this->_dataMap.insert(std::pair<int, float>(atoi(this->_data.c_str()), this->_rate));

    }
        
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
    std::string tmp;

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
        tmp = line;
        inpData = line.substr(0,10);
        inpRate = atof((line.substr(13, line.size() - 13)).c_str());

        if(!yearMountDayRate(inpData, inpRate))
			continue;
		
        size_t position;
        while ((position = inpData.find('-')) != std::string::npos) {
            inpData.erase(position, 1);
        }

        int intData = atoi(inpData.c_str());


       
       std::map<int , float > :: iterator it = this->_dataMap.begin();

       for(; it != _dataMap.end(); it++)
       {
            if(intData == it->first)
            {
                std::cout << tmp.substr(0,10);
                std::cout << " => " << inpRate << " = ";
                std::cout << it->second * inpRate << "\n";
                break;
              
            }
            else if(intData < it->first)
            {
                std::cout << tmp.substr(0,10);
                std::cout << " => " << inpRate << " = ";
                std::cout << (--it)->second * inpRate << "\n";
                break;
            }
       }
    }

    inputData.close();
        
}

int yearMountDayRate(std::string str, float rate){
   int year;
   int mount;
   int day;

   year = atoi(str.substr(0,4).c_str());
   mount = atoi(str.substr(5,2).c_str());
   day = atoi(str.substr(8,2).c_str());

	if(year < 2009 || year > 2023)
	{
		std::cout << "Error: invalid year => " << str << std::endl;
		return (0);
	}
	else if(mount < 1 || mount > 12)
	{
		std::cout << "Error: invalid mount => " << str << std::endl;
		return (0);
	}
    else if(day < 1 || day > 31)
    {
        std::cout << "Error: invalid day => " << str << std::endl;
        return (0);
    } 
    else if(rate < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return (0);
    }
	else if(rate > 1000)
	{
		std::cout << "Error: too large a number." << std::endl;
		return (0);
	}
	
	return (1);

}
