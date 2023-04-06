/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozer <mozer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 10:19:21 by mozer             #+#    #+#             */
/*   Updated: 2023/04/06 10:19:22 by mozer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
    this->setHitScore(100);
    this->setEnergyScore(100);
    this->setAttackDamage(30);
    std::cout << "Defaul FragTrap Constractor Created" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    this->setName(name);
    this->setHitScore(100);
    this->setEnergyScore(100);
    this->setAttackDamage(30);

    std::cout<< "FragTrap " << this->getName() << " created" << std::endl;
}

FragTrap::~FragTrap(){
    std::cout<< "FragTrap Destructor" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << this->getName() << " High Five Guys called " << std::endl;
}
