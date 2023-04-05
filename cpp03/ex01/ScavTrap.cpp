/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozer <mozer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:58:35 by mozer             #+#    #+#             */
/*   Updated: 2023/04/05 15:07:42 by mozer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Default Constractor Created" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->setName(name);
    this->setHitScore(100);
    this->setEnergyScore(50);
    this->setAttackDamage(20);

    std::cout << "ScavTrap " << this->getName() << " created"<< std::endl;
    
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << this->getName() << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if ((this->getHitScore() != 0 || this->getEnergyScore() != 0) && (this->getHitScore() > 0 && this->getEnergyScore() > 0))
    {
        std::cout << "ScavTrap " << this->getName() << " attacks " << target
        << " causing " << this->getAttackDamage() << " points of damage! " << std::endl;
        setEnergyScore(getEnergyScore() - 1);
    }
}


