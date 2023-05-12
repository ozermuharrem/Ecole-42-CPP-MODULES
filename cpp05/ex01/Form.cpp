/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozer <mozer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 13:41:22 by mozer             #+#    #+#             */
/*   Updated: 2023/05/12 15:26:01 by mozer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("Default"){
    // this->_name = "Defaul";
    this->_value = false;
    this->_signature = 31;
    this->_note = 61;
    std::cout<<this->getName() << " Form has been constructed." <<std::endl;
}

Form::Form(const std::string name,  int sig, int note) : _name(name){
   this->setParam(sig,note);
    std::cout <<this->getName() << " Form has been constructed." << std::endl;

}

Form::~Form(){
    std::cout<<"Kapan"<<std::endl;
}

  void Form::setParam(int broGrade, int note){
            this->_value = false;
            this->_signature = broGrade;
            this->_note = note;
}

Form &Form::operator=(const Form & copy)
{
	this->_value = copy.getValue();

    
	std::cout << "Form's copy assignment called." << std::endl;
	return *this;
}

std::string Form::getName()const{
    return this->_name;
}

bool Form::getValue()const{
    return this->_value;
}

int Form::getSignature()const{
    return this->_signature;
}

int Form::getNote()const{
    return this->_note;
}


void	Form::beSigned(Bureaucrat &bure)
{
	if (this->_signature < bure.getGrade())
		throw (GradeTooLowException());
	this->_signature = true;
}