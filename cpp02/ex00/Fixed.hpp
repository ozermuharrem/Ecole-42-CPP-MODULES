/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozer <mozer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 10:22:48 by mozer             #+#    #+#             */
/*   Updated: 2023/03/30 10:22:48 by mozer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{
    private: 
        int _num;
        static const int _kesirliBit = 8;

    public:
        Fixed(); //default constructor
        Fixed( const Fixed &rhs ); // copy constructor
        Fixed& operator=( const Fixed &rhs ); // operator overloading 
        ~Fixed();

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
};


#endif
