#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"
# include <iostream>

class ICharacter;

class Amateria
{
protected:
    std::string _type;
public:
    Amateria();
    Amateria(std::string const & type);
    Amateria(Amateria const & src);
    virtual ~Amateria();

    std::string const & getType() const;
    virtual Amateria*   clone() const = 0;
    virtual void        use(ICharacter& target);
};

#endif
