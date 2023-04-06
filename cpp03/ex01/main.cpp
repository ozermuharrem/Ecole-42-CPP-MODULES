/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozer <mozer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:17:02 by mozer             #+#    #+#             */
/*   Updated: 2023/04/05 15:09:43 by mozer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap scavTrap("Ninja");

    std::cout << "1 - Hit Point: " << scavTrap.getHitScore() << std::endl
    << "2 - Energy Point: " << scavTrap.getEnergyScore() << std::endl
    << "3 - Attack Point: " << scavTrap.getAttackDamage() << std::endl;

    scavTrap.attack("Target");

    std::cout << "1 - Hit Point: " << scavTrap.getHitScore() << std::endl 
    <<"2 - Energy Point: " << scavTrap.getEnergyScore() << std::endl
    <<"3 - Attack Point: " << scavTrap.getAttackDamage() << std::endl;

    scavTrap.takeDamage(20);

    if (scavTrap.getHitScore() >= 0 && scavTrap.getEnergyScore() > 0)
    {
        std::cout << "1 - Hit Point: " << scavTrap.getHitScore() << std::endl
        << "2 - Energy Point: " << scavTrap.getEnergyScore() << std::endl
        << "3 - Attack Point: " << scavTrap.getAttackDamage() << std::endl;
    }
    scavTrap.beRepaired(30);
    
    if (scavTrap.getHitScore() >= 0 && scavTrap.getEnergyScore() > 0)
    {
        std::cout << "1 - Hit Point: " << scavTrap.getHitScore() << std::endl
        <<"2 - Energy Point: " << scavTrap.getEnergyScore() << std::endl
        <<"3 - Attack Point: " << scavTrap.getAttackDamage() << std::endl;
    }
    return (0);
}