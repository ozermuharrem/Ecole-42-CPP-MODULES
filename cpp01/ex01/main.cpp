/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozer <mozer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:02:32 by mozer             #+#    #+#             */
/*   Updated: 2023/03/21 11:43:58 by mozer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int size = 5;
    Zombie *zozo = zombieHorde(size,"ZoZo");

    for(int i = 0; i < size; i++)
        zozo[i].announce();
    delete [] zozo;
}