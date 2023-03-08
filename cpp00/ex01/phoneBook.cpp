/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozer <mozer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:44:41 by mozer             #+#    #+#             */
/*   Updated: 2023/03/08 14:03:45 by mozer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void message()
{
    std::cout<< "\033[32m Seçim Yapınız -----> ADD, SEARCH, EXIT \033[0m" << std::endl;
    std::cout<< "\033[32m Seçiçiminiz Nedir ?  \033[0m" ;
}

void add(PhoneBook *kisi)
{
    if(kisi->count >= 7)
        kisi->count = 7;
    std::cout << "\033[1;92mKisi Bilgilerini Giriniz\033[0m" << std::endl;
    std :: cout << "Isim: ";
    std::getline(std::cin, kisi->person[kisi->count].name);
    std :: cout << "Soyisim: ";
    std::getline(std::cin, kisi->person[kisi->count].surName);
    std :: cout << "Rumuz: ";
    std::getline(std::cin, kisi->person[kisi->count].nickName);
    std :: cout << "Tel Nu: ";
    std::getline(std::cin, kisi->person[kisi->count].telNum);
    std :: cout << "Gizli Sir: ";
    std::getline(std::cin, kisi->person[kisi->count].secret);
    if (kisi->person[kisi->count].name.empty() || kisi->person[kisi->count].surName.empty() || kisi->person[kisi->count].nickName.empty() || kisi->person[kisi->count].secret.empty())
        return ;



    kisi -> count++;

    //! empty() fonksiyonu değiskenin içerisinde veri olup olmadığını kontrol eder veri yok ise true döner    
    
}

void search(PhoneBook *kisi)
{
    int i = 0;
    int j = 0;
    int controller;
    std::string filler;
    std::string tmp_kisi;
    Contact p2;

    if(std::cin.eof() == 1)
        exit(0);
    if(!kisi->count)
    {
        std::cout << "\033[1;91mKayitli Kisi Yok\033[0m" << std::endl;
        return ;
    }

    std::cout<<"\033[1;92mListe\033[0m" << std::endl;

    
    while(LOADING[i]){
        std::cout << LOADING[i]<< std::flush; // standart output un buffer ini boşaltır 
        usleep(50000);
        i++;
    }
    std::cout<< "\n";
    
    while(kisi->count > j)
    {
        std::cout << SEPERATOR

        << "| " << std::right << std::setw(10) << j
        << "| " << std::right << (kisi->person[j].name.length() > 10 ? kisi->person[j].name.substr(0,9) + '.' : kisi->person[j].name)
        << "| " << std::right << (kisi->person[j].surName.length() > 10 ? kisi->person[j].surName.substr(0,9) + '.' : kisi->person[j].surName)
        << "| " << std::right << (kisi->person[j].nickName.length() > 10 ? kisi->person[j].nickName.substr(0,9) + '.' : kisi->person[j].nickName)
        << "| " << std::endl << SEPERATOR;
        j++;       
    }

    std::cout << " Kisi ID Girin: ";
    //std::cin >> controller;
    std::getline(std::cin, tmp_kisi);
    
    std::istringstream my_stream(tmp_kisi);

    if(!(my_stream >> controller))
    {
        std::cout<< "Gecerli bir numara girin ";
        return ;
    }
    if(controller >= 9 || controller <= 0)
    {
        std::cout << "Olmayan Birisi Olamaz" << std::endl;
        return ;
    }

    if(kisi->count >= j && (j <= 8 && j >= 1) && j >= controller)
    {
        std::cout << "\033[1;95mInformation -> \033[0m" << controller <<std::endl;
        std::cout << "Isim: " << kisi->person[controller - 1].name << std::endl;
        std::cout << "Soyisim: " << kisi->person[controller - 1].surName << std::endl;
        std::cout << "Rumuz: " << kisi->person[controller - 1].nickName << std::endl;
        std::cout << "TelNum: " << kisi->person[controller - 1].telNum << std::endl;
        std::cout << "Gizli Sir: " << kisi->person[controller - 1].secret << std::endl;
    }
    else
        std::cout<<"We haven't been there yet" << std::endl;
}

int main()
{
   PhoneBook employe;
   employe.count = 0;

   std::string str;
 
    message();
    while(std::getline(std::cin,str))
    {      
        if(str.compare("ADD") == 0)
            add(&employe);
        else if(str.compare("SEARCH") == 0)
        {
            search(&employe);
        }
        else if (str.compare("EXIT") == 0)
        {
            std::cout << "\033[1;91mBy...\033[0m" << std::endl;
            exit(0);
        }
        else if (std::cin.eof() == 1)
        {
            std::cout << "^D " << std::endl;
            exit(0);
        }

            message();
    }


    return (0);

   
}

