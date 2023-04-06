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

#include "FragTrap.hpp"

int main()
{
    FragTrap fragTrap("Ninja");

    std::cout << "1 - Hit Point: " << fragTrap.getHitScore() << std::endl
    << "2 - Energy Point: " << fragTrap.getEnergyScore() << std::endl
    << "3 - Attack Point: " << fragTrap.getAttackDamage() << std::endl;

    fragTrap.attack("Target");

    std::cout << "1 - Hit Point: " << fragTrap.getHitScore() << std::endl 
    <<"2 - Energy Point: " << fragTrap.getEnergyScore() << std::endl
    <<"3 - Attack Point: " << fragTrap.getAttackDamage() << std::endl;

    fragTrap.takeDamage(20);

    if (fragTrap.getHitScore() >= 0 && fragTrap.getEnergyScore() > 0)
    {
        std::cout << "1 - Hit Point: " << fragTrap.getHitScore() << std::endl
        << "2 - Energy Point: " << fragTrap.getEnergyScore() << std::endl
        << "3 - Attack Point: " << fragTrap.getAttackDamage() << std::endl;
    }
    fragTrap.beRepaired(30);
    
    if (fragTrap.getHitScore() >= 0 && fragTrap.getEnergyScore() > 0)
    {
        std::cout << "1 - Hit Point: " << fragTrap.getHitScore() << std::endl
        <<"2 - Energy Point: " << fragTrap.getEnergyScore() << std::endl
        <<"3 - Attack Point: " << fragTrap.getAttackDamage() << std::endl;
    }

    fragTrap.highFivesGuys();

    return (0);
}