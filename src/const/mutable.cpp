#include <iostream>
#include <string>

class Entity
{
private:
    std::string name;
public:
    const std::string& getName() const
    {
        return name;
    }
};

int main()
{

    using namespace std::string_literals;
    std::string name = "Hello"s + "World";
    std::cout << name << std::endl;
    return 0;
}