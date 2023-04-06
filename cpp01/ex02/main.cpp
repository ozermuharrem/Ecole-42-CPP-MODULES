/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozer <mozer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:44:51 by mozer             #+#    #+#             */
/*   Updated: 2023/03/21 11:57:55 by mozer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "str degiskeninin bellek adresi: " << &str << std::endl;
    std::cout << "stringPTR tarafindan tutulan bellek adresi: " << stringPTR << std::endl;
    std::cout << "stringREF tarafindan tutulan bellek adresi: " << &stringREF << std::endl;
    std::cout<<"\n";
    std::cout << "str degiskeninin degeri: " << str << std::endl;
    std::cout << "stringPTR tarafindan isaret edilen deger: " << *stringPTR << std::endl;
    std::cout << "stringREF tarafindan isaret edilen deger: " << stringREF << std::endl;
}