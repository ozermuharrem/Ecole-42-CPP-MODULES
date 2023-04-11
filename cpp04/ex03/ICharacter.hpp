#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "AMateria.hpp"
#include <iostream>

/*
C++ dilinde "interface" kavramı, bir sınıfın başka bir sınıf tarafından kullanılabilmesini sağlamak için bir 
arayüzü tanımlamak için kullanılan bir mekanizmadır. 
Bu arayüz, saf SANAL(virtual) işlevler tarafından sağlanır ve diğer sınıflar tarafından uygulanabilir.
*/

/*
C++ kodu, bir saf sanal işlevi ("pure virtual function") tanımlamaktadır. 
"= 0" ifadesi, bir işlevin saf sanal işlev olduğunu belirtmek 
için kullanılan bir sözdizimi öğesidir.
*/

class AMateria;

class ICharacter
{
public:
    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};

#endif
