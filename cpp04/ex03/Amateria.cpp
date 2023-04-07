/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozer <mozer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 11:38:17 by mozer             #+#    #+#             */
/*   Updated: 2023/04/07 11:38:17 by mozer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Amateria.hpp"

Amateria::Amateria( void ) : _type("")
{
}

Amateria::Amateria( std::string const & type )  : _type(type)
{
    std::cout << "Amateria " << this->_type << " created" << std::endl;
}

Amateria::Amateria( Amateria const & src )
{
    *this = src;
}

Amateria::~Amateria( void )
{
    std::cout << "Amateria " << this->_type << " destroyed" << std::endl;
}

std::string const & Amateria::getType() const
{
    return this->_type;
}

Amateria* Amateria::clone() const
{
    return (Amateria*)this;
}

void    Amateria::use( ICharacter& target )
{
    std::cout << "Amateria " << this->_type << " used on " << target.getName() << std::endl;
}
