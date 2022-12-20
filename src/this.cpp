#include <iostream>
#include <string>

void abc(const Entity& entity)
{
    
}

class Entity
{
private:
    int x, y;
public:
    Entity(int x, int y)
    {
        this->x = x;
        this->y = y;
        Entity& e = *this;
        abc(e);
    }

    int GetX() const
    {
        const Entity* e = this;

        return x;
    }
};


int main()
{

    return 0;
}


void PrintEntity(const Entity& e)
{
    //printf  
}