/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozer <mozer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:47:12 by mozer             #+#    #+#             */
/*   Updated: 2023/03/21 14:47:12 by mozer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::HumanB(Weapon &WeaponB)
{
    this->weapon = &WeaponB;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with their" << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &Weapon)
{
    this->weapon = &Weapon;
}

HumanB::~HumanB() {}
