/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozer <mozer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 10:19:27 by mozer             #+#    #+#             */
/*   Updated: 2023/04/06 10:19:28 by mozer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    DiamondTrap diamondTrap("Monster");
    std::cout << "1 - Hit Point: " << diamondTrap.getHitScore() << std::endl
    << "2 - Energy Point: " << diamondTrap.getEnergyScore() << std::endl
    << "3 - Attack Point: " << diamondTrap.getAttackDamage() << std::endl;

    std::cout << "--------------------------------------------------" << std::endl;

    diamondTrap.attack("Target");
    std::cout << "1 - Hit Point: " << diamondTrap.getHitScore() << std::endl 
    <<"2 - Energy Point: " << diamondTrap.getEnergyScore() << std::endl
    <<"3 - Attack Point: " << diamondTrap.getAttackDamage() << std::endl;

    std::cout << "--------------------------------------------------" << std::endl;

    diamondTrap.takeDamage(50);
    if (diamondTrap.getHitScore() >= 0 && diamondTrap.getEnergyScore() > 0)
    {
        std::cout << "1 - Hit Point: " << diamondTrap.getHitScore() << std::endl
        << "2 - Energy Point: " << diamondTrap.getEnergyScore() << std::endl
        << "3 - Attack Point: " << diamondTrap.getAttackDamage() << std::endl;
    }

    std::cout << "--------------------------------------------------" << std::endl;
    
    diamondTrap.beRepaired(30);
    if (diamondTrap.getHitScore() >= 0 && diamondTrap.getEnergyScore() > 0)
    {
        std::cout << "1 - Hit Point: " << diamondTrap.getHitScore() << std::endl
        <<"2 - Energy Point: " << diamondTrap.getEnergyScore() << std::endl
        <<"3 - Attack Point: " << diamondTrap.getAttackDamage() << std::endl;
    }
    diamondTrap.whoAmI();

    return (0);
}