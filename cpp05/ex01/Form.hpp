#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form {
    private: 
        const std::string _name;
        bool _value;
        int _signature;
        int _note;
    public :
    
        Form();
        Form(const std::string name,int sig,int note);
        ~Form();

        Form &operator=(const Form & copy);


        // getter
        std::string getName()const;
        bool getValue()const;
        int getSignature()const;
        int getNote()const;

        //setter

        void setParam(int broGrade, int note);


        void beSigned(Bureaucrat &br);

        class GradeTooHighException: public std::exception
		{
			public:
				const char *what() const _NOEXCEPT;
		};
		class GradeTooLowException: public std::exception
		{
			public:
				const char *what() const _NOEXCEPT;
		};
};


#endif