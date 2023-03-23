/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozer <mozer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:51:02 by mozer             #+#    #+#             */
/*   Updated: 2023/03/21 14:51:02 by mozer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string.h>
#include <iomanip>

class Harl
{
    public:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        void complain(std::string level);
};

#endif
