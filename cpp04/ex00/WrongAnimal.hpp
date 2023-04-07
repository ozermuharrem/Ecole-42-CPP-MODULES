#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include "Animal.hpp"

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    virtual ~WrongAnimal();
    //set
    void setTyp(const std::string &typ);
    //get
    std::string getType() const;

	WrongAnimal& operator=(const WrongAnimal& src);

    void makeSound() const;
};

#endif