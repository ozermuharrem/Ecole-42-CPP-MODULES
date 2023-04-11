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

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria*       materias[4];

    public:
        MateriaSource();
        ~MateriaSource();

        MateriaSource( MateriaSource const & );
        MateriaSource&  operator=( MateriaSource const & );

        AMateria*       getMateria( std::string const & type );
        AMateria*       createMateria( std::string const & type );
        void            learnMateria( AMateria* );
};


#endif
