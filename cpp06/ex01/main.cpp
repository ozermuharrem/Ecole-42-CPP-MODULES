#include <iostream>

struct Data
{
    std::string s1;
    std::string s2;
};

static uintptr_t serialize(Data *ptr)
{
    //Bir işaretçi alır ve uintptr_t işaretsiz tamsayı türüne dönüştürür.
    //ptr -> donusturulecek veri
    //uintptr_t -> donusturulecek verinin yeni turu // bellek adresini tamsayıya çevirir
    //reinterpret -> yeniden yorumlama tur degisimi.
    //bellek adresinin tam sayı türüne dönüştürülmesi
    return (reinterpret_cast<uintptr_t>(ptr));
}

static Data* deserialize(uintptr_t raw)
{
    //İşaretsiz bir tamsayı parametresi alır ve Data işaretçisine dönüştürür.
    return(reinterpret_cast<Data *>(raw));
}

// uintptr_t: En az 32 bitlik bir tamsayı tipi, bir işaretli veya işaretsiz işaretçiyi hafızada tutulan bellek adreslerini temsil etmek için kullanılan bir tamsayı tipidir.
int main()
{
    Data str;

    str.s1 = "Hello";

    uintptr_t serialized_ptr = serialize(&str);

    std::cout << "serialized: " << serialized_ptr << std::endl;

    Data *ptr = deserialize(serialized_ptr);

    std::cout << "serialized: " << ptr->s1 << std::endl;

    return (0);
}
