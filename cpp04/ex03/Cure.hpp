#ifndef CURE_HPP
#define CURE_HPP

#include "Amateria.hpp"

class Cure : public Amateria
{
    public:
        Cure();
        ~Cure();

        Cure( Cure const & );
        Cure& operator=( Cure const & );

        virtual Amateria*   clone() const;
        virtual void        use(ICharacter& target);
};

#endif
