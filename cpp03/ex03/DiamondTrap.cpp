#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << " DiamondTrap default constructor called " << std::endl;
    FragTrap::setHitScore(100);
    ScavTrap::setEnergyScore(50);
    FragTrap::setAttackDamage(30);
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{
    std::cout << "\033[1;92mDiamondTrap Constructor\033[0m" << std::endl;
    FragTrap::setHitScore(100);
    ScavTrap::setEnergyScore(50);
    FragTrap::setAttackDamage(30);
    ScavTrap::setName(name + "_clap_name");
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "\033[1;91mDiamondTrap destructor called\033[0m" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << getName() << " ClapTrap name" << std::endl;
}