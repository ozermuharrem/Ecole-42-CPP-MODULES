/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozer <mozer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:51:05 by mozer             #+#    #+#             */
/*   Updated: 2023/03/21 14:51:05 by mozer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int arg, char **argv)
{
    Harl harl;

    if (arg == 2)
        harl.complain(argv[1]);
    else
        std::cout << "Eksik argv";
}
