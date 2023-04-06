/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozer <mozer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:17:02 by mozer             #+#    #+#             */
/*   Updated: 2023/04/05 14:37:24 by mozer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clapTrap("Ninja");

    std::cout << "1 - Hit Point: " << clapTrap.getHitScore() << std::endl
    << "2 - Energy Point: " << clapTrap.getEnergyScore() << std::endl
    << "3 - Attack Point: " << clapTrap.getAttackDamage() << std::endl;

    clapTrap.attack("Target");

    std::cout << "1 - Hit Point: " << clapTrap.getHitScore() << std::endl 
    <<"2 - Energy Point: " << clapTrap.getEnergyScore() << std::endl
    <<"3 - Attack Point: " << clapTrap.getAttackDamage() << std::endl;

    clapTrap.takeDamage(2);

    if (clapTrap.getHitScore() >= 0 && clapTrap.getEnergyScore() > 0)
    {
        std::cout << "1 - Hit Point: " << clapTrap.getHitScore() << std::endl
        << "2 - Energy Point: " << clapTrap.getEnergyScore() << std::endl
        << "3 - Attack Point: " << clapTrap.getAttackDamage() << std::endl;
    }
    clapTrap.beRepaired(3);
    
    if (clapTrap.getHitScore() >= 0 && clapTrap.getEnergyScore() > 0)
    {
        std::cout << "1 - Hit Point: " << clapTrap.getHitScore() << std::endl
        <<"2 - Energy Point: " << clapTrap.getEnergyScore() << std::endl
        <<"3 - Attack Point: " << clapTrap.getAttackDamage() << std::endl;
    }
    return (0);
}