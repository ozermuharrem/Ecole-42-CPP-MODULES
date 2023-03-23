/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozer <mozer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:47:17 by mozer             #+#    #+#             */
/*   Updated: 2023/03/21 14:47:17 by mozer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    public:
        std::string name;
        Weapon *weapon;
        ~HumanB();
        HumanB(std::string name);
        HumanB(Weapon &WeaponB);
        void setWeapon(Weapon &WeaponB);
        void attack();
};

#endif
