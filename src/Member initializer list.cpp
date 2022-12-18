#include <iostream>
#include <string>

class Entity
{
private:
    std::string m_Name;
public:
    Entity()
        :m_Name("Bee_Liu")
    {
        std::cout << m_Name << std::endl;
    }

    Entity(const std::string& name)
        :m_Name(name)
    {
        std::cout << m_Name << std::endl;
    }


};

int main()
{
    Entity e0;

    Entity e1("Hello Bee_Liu");
    return 0;
}