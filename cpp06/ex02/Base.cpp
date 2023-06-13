#include "Base.hpp"

//  Eğer dönüştürülebilirse, ifade yeni_tür tipindeki bir işaretçiye dönüştürülür, aksi takdirde nullptr döndürülür.
//  Bir üst sınıf işaretçisini veya referansını alt sınıf işaretçisin veya referansına dönüştürmek için kullanılır. dynamic_cast işlemi genellikle nesneler arasındaki kalıtım ilişkilerini belirlemek için kullanılır.

Base *generate(void)
{
    //It randomly instanciates A, B or C and returns the instance as a Base pointer.
    srand(time(0));
    int num = rand() % 3;
    //std::cout << num << std::endl;
    Base *ptr = nullptr;

    try
    {
        if (num == 0)
            ptr = dynamic_cast<Base*>(new A);
        else if (num == 1)
            ptr = dynamic_cast<Base*>(new B);
        else if (num == 2)
            ptr = dynamic_cast<Base*>(new C);
        std::cout << ptr << std::endl;
        return (ptr);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return (NULL);
    }
}

void identify(Base *p)
{
    // p ile işaret edilen nesnenin gerçek tipini yazdırır: "A", "B" veya "C".
    try
    {
        if (dynamic_cast<A*>(p))
            std::cout << "A" << std::endl;
        else if (dynamic_cast<B*>(p))
            std::cout << "B" << std::endl;
        else if (dynamic_cast<C*>(p))
            std::cout << "C" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void identify(Base &p)
{
    //p ile işaret edilen nesnenin gerçek tipini yazdırır: "A", "B" veya "C".
    try
    {
        if (dynamic_cast<A*>(&p))
            std::cout << "A" << std::endl;
        else if (dynamic_cast<B*>(&p))
            std::cout << "B" << std::endl;
        else if (dynamic_cast<C*>(&p))
            std::cout << "C" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
