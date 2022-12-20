#include <iostream>
#include <string>



class Entity
{
public:
    int x,y;
public:

    Entity(int x, int y)
    {
        this->x = x;
        this->y = y;
        std::cout<<this->x<<" "<<this->y<<std::endl;
    }

    int GetX() const
    {
        const Entity* e = this;

        return x;
    }
};


void PrintEntity(const Entity& e)
{
    //printf  
    std::cout <<e.x<<" "<<e.y<<std::endl;
}

int main()
{
    Entity e(10,20);
    PrintEntity(e);
    return 0;
}

