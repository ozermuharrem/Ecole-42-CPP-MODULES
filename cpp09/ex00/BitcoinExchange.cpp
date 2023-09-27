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

//    std::map<int, float> ::iterator it = _dataMap.begin();
//    int cnt = 0;
//     for(; it != _dataMap.end() ; it++){
//         if(cnt != 500)
//             std::cout << it->first << " " << it->second << std::endl;
//         else
//             exit(1);
//         cnt++;
//     }
        
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

    // int count = 0;

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

        if(inpRate > 1000)
		{
			std::cout << "Error: too large a number." << std::endl;
			continue;
		}

        if(inpRate < 1){
            std::cout << "Error: not a positive number." << std::endl;
			continue;
        }

        size_t position;
        while ((position = inpData.find('-')) != std::string::npos) {
            inpData.erase(position, 1);
        }

        int intData = atoi(inpData.c_str());

       
       std::map<int , float > :: iterator it = _dataMap.begin();

       for(; it != _dataMap.end(); it++)
       {
            if(intData == it->first)
            {
                printData(line, inpRate);
                // std::cout << "line " << line;
                // std::cout << " = " << it->second * inpRate << "\n";
                break;
            }
            else if(intData < it->first){
                it--;
                printData(line, inpRate);
                // std::cout <<"line " << line;
                // std::cout << " = " << (--it)->second * inpRate << "\n";
                it++;
                break;
            }
       }
    }

    inputData.close();
        
}

void printData(std::string str, float arf){
    std::cout << str << "=>" << arf << " = ";
}