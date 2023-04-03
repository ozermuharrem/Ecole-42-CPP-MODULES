/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozer <mozer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 11:30:04 by mozer             #+#    #+#             */
/*   Updated: 2023/03/31 11:30:04 by mozer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    /*
        Bir sınıfın bir üyesini static olarak bildirdiğimizde, 
        sınıfın kaç nesnesi oluşturulursa oluşturulsun, 
        static üyenin yalnızca bir kopyası olduğu anlamına 
        gelir. Statik bir üye sınıfın tüm nesneleri tarafından 
        paylaşılır. Tüm statik veriler, ilk nesne 
        oluşturulduğunda, başka bir başlatma yoksa sıfır olarak 
        başlatılır
    */
private:
    int                 _fixedPointValue;
    static const int    _fractionalBits = 8;

public:
    Fixed( void );
    Fixed( const int n );
    Fixed( const float n );
    Fixed( const Fixed &rhs );
    Fixed& operator=( const Fixed &rhs );
    ~Fixed();

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );

    /*
     kayan noktayı sabit noktaya dönüştürmek için kayan 
     sayıyı n'nin kuvvetine yükseltilmiş taban ile çarparız 
     (n kesirli kısmın büyüklüğü) tersini yapmak için böleriz
    */
    float   toFloat( void ) const;
    int     toInt( void ) const;

    bool    operator>( const Fixed &rhs ) const ;
    bool    operator<( const Fixed &rhs ) const ;
    bool    operator>=( const Fixed &rhs ) const ;
    bool    operator<=( const Fixed &rhs ) const ;
    bool    operator==( const Fixed &rhs ) const ;
    bool    operator!=( const Fixed &rhs ) const ;

    Fixed   operator+( const Fixed &rhs ) const ;
    Fixed   operator-( const Fixed &rhs ) const ;
    Fixed   operator*( const Fixed &rhs ) const ;
    Fixed   operator/( const Fixed &rhs ) const ;

    Fixed&  operator++( void );
    Fixed   operator++( int );
    Fixed&  operator--( void );
    Fixed   operator--( int );

    static Fixed& min( Fixed &a, Fixed &b );
    static const Fixed& min( const Fixed &a, const Fixed &b );
    static Fixed& max( Fixed &a, Fixed &b );
    static const Fixed& max( const Fixed &a, const Fixed &b );
    /*
        Statik Fonksiyon Üyeleri Bir fonksiyon üyesini statik olarak bildirerek, 
        onu sınıfın herhangi bir nesnesinden bağımsız hale getirirsiniz.
    */ 

};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif  // FIXED_HPP