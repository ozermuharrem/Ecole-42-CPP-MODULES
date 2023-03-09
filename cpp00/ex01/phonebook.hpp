/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozer <mozer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:44:44 by mozer             #+#    #+#             */
/*   Updated: 2023/03/09 15:38:05 by mozer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include <string>
#include <unistd.h>
#include <sstream>


#define LOADING "\033[0;31m[\033[0m\033[1;32m###################################\033[0m\033[0;31m]\033[0m"
#define SEPERATOR "+-----------------------------------------------+\n"

class Contact{
    public : 
        std::string name;
        std::string surName;
        std::string nickName;
        std::string secret;
        std::string telNum;

    //Constructor
    Contact(){};

    //Destructor
    ~Contact(){};
};

class PhoneBook{
    public :
        Contact person[9];
        int count;
        int swap;

    //Constructor
    PhoneBook(){};

    //Destructor
    ~PhoneBook(){};
};

#endif