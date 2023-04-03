/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozer <mozer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 10:22:31 by mozer             #+#    #+#             */
/*   Updated: 2023/03/30 10:22:31 by mozer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
    private: 
        int _num;
        static const int _kesirliBit = 8;

    public:
        Fixed(void);
        Fixed(const int nbr);
        Fixed(const float nbr);
        Fixed( const Fixed &rhs );
        Fixed& operator=( const Fixed &rhs );
        ~Fixed();

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );

        float toFloat(void) const;
        int toInt (void) const;
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif
