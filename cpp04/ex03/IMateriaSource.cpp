#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "Amateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        Amateria*       materias[4];

    public:
        MateriaSource();
        ~MateriaSource();

        MateriaSource( MateriaSource const & );
        MateriaSource&  operator=( MateriaSource const & );

        Amateria*       getMateria( std::string const & type );
        Amateria*       createMateria( std::string const & type );
        void            learnMateria( Amateria* );
};


#endif
