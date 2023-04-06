/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozer <mozer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 12:33:32 by mozer             #+#    #+#             */
/*   Updated: 2023/03/21 11:43:44 by mozer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Zombie {
    public:
        Zombie(void);
        ~Zombie(void);
        void announce( void );
        void setName(std::string name);

    private:
        std::string _name;
};


Zombie* zombieHorde( int N, std::string name );
#endif

