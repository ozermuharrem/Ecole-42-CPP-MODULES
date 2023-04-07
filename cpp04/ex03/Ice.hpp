#ifndef ICE_HPP
#define ICE_HPP

#include "Amateria.hpp"

class Ice : public Amateria
{

    public:
        Ice();
        ~Ice();

        Ice( Ice const & );
        Ice& operator=( Ice const & );

        virtual Amateria*   clone() const;
        virtual void        use(ICharacter& target);
};

#endif
