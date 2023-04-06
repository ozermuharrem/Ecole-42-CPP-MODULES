/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozer <mozer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 10:21:09 by mozer             #+#    #+#             */
/*   Updated: 2023/04/05 14:36:37 by mozer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    std::cout<< "Claptrap default Constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
    this->setName(name);
    this->setHitScore(10);
    this->setEnergyScore(10);
    this->setAttackDamage(0);
    std::cout<< this->_name << " Claptrap Constructor"<<std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout<< this->_name << "ClapTrap destroyed"<< std::endl;
}

void ClapTrap::setName(std::string name){
    this->_name = name;
}
std::string ClapTrap::getName(){
    return (this->_name);
}

void ClapTrap::setHitScore(int hitScore){
    this->_hitScore = hitScore;
}
int ClapTrap::getHitScore(){
    return (this->_hitScore);
}

void ClapTrap::setEnergyScore(int energyScore){
    this->_energyScore = energyScore;
}
int ClapTrap::getEnergyScore(){
    return (this->_energyScore);
}

void ClapTrap::setAttackDamage(int attackDamage){
    this->_attackDamage = attackDamage;
}

int  ClapTrap::getAttackDamage(){
    return (this->_attackDamage);
}

void ClapTrap::attack(const std::string& target){
    if(checkScore(*this) > 0){
        std::cout << "ClapTrap " << this->_name << " attacks " << target
        << " causing " << this->_attackDamage << " points of damage! " << std::endl;
        this->_energyScore--;
    }
}
void ClapTrap::takeDamage(unsigned int amount){
    if(checkScore(*this) > 0)
    {
         std::cout << "ClapTrap " << this->_name << " takes "
        << amount << " points of damage! " << std::endl;
        this->_hitScore -= amount;
        if (this->_hitScore <= 0)
            std::cout << "\033[1;91mdead...\033[0m" << std::endl;
    }
}
void ClapTrap::beRepaired(unsigned int amount){
    if(checkScore(*this) > 0)
    {
        std::cout << "ClapTrap " << this->_name << " get health "
        << amount << " points " << std::endl;
        this->_hitScore += amount;
        this->_energyScore--;
    }
}

ClapTrap &ClapTrap::operator=(const ClapTrap& src){
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;
    if(this != &src)
    {
        this->_name = src._name;
        this->_hitScore = src._hitScore;
        this->_energyScore = src._energyScore;
        this->_attackDamage = src._attackDamage;
    }
    return (*this);
}

int ClapTrap::checkScore(ClapTrap& obj){
    if((obj._hitScore != 0 || obj._energyScore != 0) && (obj._hitScore > 0 && obj._energyScore > 0))
        return (1);
    return (0);
}

