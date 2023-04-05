/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozer <mozer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 10:10:50 by mozer             #+#    #+#             */
/*   Updated: 2023/04/05 14:40:51 by mozer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
    private:
        std::string _name;
        int _hitScore;
        int _energyScore;
        int _attackDamage;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        // ClapTrap(const ClapTrap& src);
        ~ClapTrap();

        ClapTrap &operator=(const ClapTrap& src);

        void setName(std::string name);
        std::string getName();

        void setHitScore(int hitScore);
        int getHitScore();

        void setEnergyScore(int energyScore);
        int getEnergyScore();

        void setAttackDamage(int attackDamage);
        int getAttackDamage();
        
        int checkScore(ClapTrap &obj);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

std::ostream &operator<<(std::ostream &o, ClapTrap &i);


#endif