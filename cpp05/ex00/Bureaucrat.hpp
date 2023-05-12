/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozer <mozer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 10:52:10 by mozer             #+#    #+#             */
/*   Updated: 2023/05/10 14:02:42 by mozer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat{
    private : 
        std::string _name;
        int _grade;
    public : 
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();

        Bureaucrat &operator=(const Bureaucrat &src);

        // getter
        std::string getName();
        int getGrade();

        // setter 
        void setName(std::string name);
        void setGrade(int grade);

        
        void increment();
        void decrement();
        
     class GradeTooLowException : public std::exception
    {
        public:
            const char *what() const _NOEXCEPT;
    };

    class GradeTooHighException : public std::exception
    {
        public:
            const char *what() const _NOEXCEPT;
    };
           
};


std::ostream &operator<<(std::ostream &o, Bureaucrat &src);


#endif