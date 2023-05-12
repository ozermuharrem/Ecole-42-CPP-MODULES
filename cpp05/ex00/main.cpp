/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozer <mozer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 10:52:07 by mozer             #+#    #+#             */
/*   Updated: 2023/05/10 14:04:36 by mozer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
    try{
        Bureaucrat br("Bro", 0);
        std::cout<<br<<std::endl;
    }catch(std::exception &e){
        std::cerr<<e.what()<<std::endl;
    }

    return 0;
}