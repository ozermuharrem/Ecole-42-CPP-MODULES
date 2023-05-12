/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozer <mozer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 10:51:37 by mozer             #+#    #+#             */
/*   Updated: 2023/05/10 14:03:06 by mozer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade){
    setName(name);
    setGrade(grade);
    
}

Bureaucrat::~Bureaucrat(){
    std::cout<< this->getName() <<" Destroyed" << std::endl;
}


std::string Bureaucrat::getName(){
    return this->_name;
}
int Bureaucrat::getGrade(){
    return this->_grade;
}

// setter 
void Bureaucrat::setName(std::string name){
    this->_name = name;
    
}
void Bureaucrat::setGrade(int grade){
    this->_grade = grade;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

const char *Bureaucrat::GradeTooLowException::what() const _NOEXCEPT
{
    //this class mustn't throw because the function have _NOEXCEPT like throw();
    return ("Too Low Exception");
}

const char *Bureaucrat::GradeTooHighException::what() const _NOEXCEPT
{
    //this class mustn't throw because the function have _NOEXCEPT like throw();
    return ("Too High Exception");
}

void Bureaucrat::increment()
{
    this->_grade--;
}

void Bureaucrat::decrement()
{
    this->_grade++;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat &src)
{
    if (src.getGrade() == 1)
        return (o << src.getName() << ", bureaucrat grade(MAX POINT) " << src.getGrade());
    else if (src.getGrade() == 150)
        return (o << src.getName() << ", bureaucrat grade(MIN POINT) " << src.getGrade());
    else
        return (o << src.getName() << ", bureaucrat grade " << src.getGrade());
}