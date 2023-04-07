#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "Amateria.hpp"

class Character : public ICharacter
{

private:
    std::string _name;
    Amateria    *_inventory[4];

public:
    Character(std::string const &name);
    Character(Character const &src);
    ~Character();

    Character&          operator=(Character const &rhs);

    std::string const&  getName() const;
    void                equip(Amateria* m);
    void                unequip(int idx);
    void                use(int idx, ICharacter& target);
};

#endif
