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

void FragTrap::attack(const std::string& target)
{
    if ((this->getHitScore() != 0 || this->getEnergyScore() != 0) && (this->getHitScore() > 0 && this->getEnergyScore() > 0))
    {
        std::cout << "FlagTrap " << this->getName() << " attacks " << target
        << " causing " << this->getAttackDamage() << " points of damage! " << std::endl;
        setEnergyScore(getEnergyScore() - 1);
    }
    else
        std::cout << "FragTrap " << this->getName() << "doesn't have hitPoints or Energy" << std::endl;
}