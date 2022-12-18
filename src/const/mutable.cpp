#include <iostream>
#include <string>

class Entity
{
private:
    std::string name;
    mutable int  size = 0;
public:
    const std::string& getName() const
    {
        size++;
        return name;
    }
};

int main()
{
    const Entity e;
    e.getName();
    //FIXME:lambada
    int x =8;
    auto f = [&]() mutable 
    {
        x++;
        std::cout<<x<<std::endl;
    };
    f();

    using namespace std::string_literals;
    std::string name = "Hello"s + "World";
    std::cout << name << std::endl;
    return 0;
}