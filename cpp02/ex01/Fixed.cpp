/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozer <mozer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 10:22:33 by mozer             #+#    #+#             */
/*   Updated: 2023/03/30 10:22:33 by mozer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _num(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int nbr ) : _num( nbr << _kesirliBit ) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float nbr ) : _num( std::roundf( nbr * ( 1 << _kesirliBit ) ) ) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &rhs ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = rhs;
}

Fixed& Fixed::operator=( const Fixed &rhs ) {
    std::cout << "Copy assignment operator called" << std::endl;
    if ( this != &rhs )
        this->_num = rhs.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
    return this->_num;
}

void    Fixed::setRawBits( int const raw ) {
    this->_num = raw;
}

float   Fixed::toFloat( void ) const {
    return static_cast<float>( this->getRawBits() ) / ( 1 << _kesirliBit );
}

int     Fixed::toInt( void ) const {
    return this->_num >> _kesirliBit;
}

std::ostream & operator<<( std::ostream & o, Fixed const & i ) {
    o << i.toFloat();
    return o;
}
