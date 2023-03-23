/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozer <mozer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:48:48 by mozer             #+#    #+#             */
/*   Updated: 2023/03/21 14:48:48 by mozer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
}

std::string Weapon::getType() const
{
    return(this->type);
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}

Weapon::~Weapon() {}
