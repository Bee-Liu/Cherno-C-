// #include <iostream>
// /**
//  * @brief 类的继承
//  */

// class Entity
// {
// public:
//     float X, Y;
//     void Move(float xa, float ya)
//     {
//         X += xa;
//         Y += ya;
//     }
// };
// /**
//  * @brief 任何在Entity类中不是私有的东西，实际上都可以被Player访问
//  *
//  */
// class Player: public Entity
// {
// public:
//     int* p;
//     const char* name;
//     void Printname()
//     {
//         std::cout << name << std::endl;
//     }
// };

// int main()
// {
//     Player player;
//     std::cout << sizeof(Entity) << std::endl;
//     std::cout << sizeof(Player) << std::endl;
//     std::cout << sizeof(Player::name) << std::endl;
//     std::cout << sizeof(Player::p)<< std::endl;

//     player.name = "Hello World!";
//     player.Printname();

//     return 0;
// }