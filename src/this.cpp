<<<<<<< HEAD
// #include <iostream>
// #include <string>



// class Entity
// {
// public:
//     int x,y;
// public:

//     Entity(int x, int y)
//     {
//         this->x = x;
//         this->y = y;
//         std::cout<<this->x<<" "<<this->y<<std::endl;
//     }

//     int GetX() const
//     {
//         const Entity* e = this;

//         return x;
//     }
// };


// void PrintEntity(const Entity& e)
// {
//     //printf  
//     std::cout <<e.x<<" "<<e.y<<std::endl;
// }

// int main()
// {
//     Entity e(10,20);
//     PrintEntity(e);
//     return 0;
// }

=======
#include <iostream>
#include <string>



class Entity
{
public:
    int x,y;
public:
    void Abc(const Entity& entity);

    Entity(int x, int y)
    {
        // this->x = x;
        // this->y = y;
        Entity& e = *this;
        Abc(e);
    }

    int GetX() const
    {
        const Entity* e = this;

        return x;
    }
};



void Abc(const Entity& entity)
{
    std::cout << entity.x << "," << entity.y << std::endl;
}

int main()
{
    Entity e(10,20);
    return 0;
}


void PrintEntity(const Entity& e)
{
    //printf  
}
>>>>>>> 087ae81d056a766669d052c24b8bc24fc4bfbdbe
