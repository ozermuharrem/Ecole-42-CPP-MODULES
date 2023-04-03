/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozer <mozer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 10:22:44 by mozer             #+#    #+#             */
/*   Updated: 2023/03/30 10:22:44 by mozer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


//! Default constructor
Fixed::Fixed(){
    std::cout<<"Default constructor called"<<std::endl;
    this->_num = 0;
}


//! Copy constructor
Fixed::Fixed(const Fixed &rhs){
    std::cout << "Copy constructor called"<< std::endl;
    this->setRawBits(rhs.getRawBits());
}


//! operator overloading
Fixed& Fixed::operator=(const Fixed &rhs){
    std::cout<<"Copy assignment operator called"<< std::endl;
    if(this != &rhs)
        this->_num = rhs.getRawBits();
    return *this;
}


//! Destructor
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}


//! sabit nokta değerinin ham değerini döndürür
int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_num;
}

//! Sabit noktalı sayının ham değerini ayarlayan
void    Fixed::setRawBits( int const raw ) {
    this->_num = raw;
}