/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozer <mozer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 12:38:31 by mozer             #+#    #+#             */
/*   Updated: 2023/04/07 12:38:31 by mozer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
