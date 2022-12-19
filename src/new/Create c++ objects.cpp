// //FIXME:Creates and initializes C++ objects TODO:创建并初始化C++对象
// #include <iostream>
// #include <string>

// using String = std::string;

// class Entity
// {
// private:
//     String m_name;
// public:
//     Entity(): m_name("Unknown") {}
//     Entity(const String& name): m_name(name) {}

//     const String& Getname() const { return m_name; }
// };

// void Function()
// {
//     Entity entity("Bee_Liu");
// }

// int main()
// {
//     /**
//      * @brief 这是在栈上创建的对象
//      *
//      */
//     Entity* e;
//     {
//         Entity entity("Bee_Liu0");
//         e = &entity;
//         std::cout << e->Getname() << std::endl;
//     }
//     // std::cout<<entity.Getname()<< std::endl; //FIXME:出了上面括号中的作用域对象entity就被从栈上销毁了,e所指向的name也会被销毁
//     // std::cout << e->Getname() << std::endl;

//     /**
//      * @brief 这是在堆上分配的
//      * @param 当然我们在堆上分配内存空间需要delete释放
//      */
//     Entity* e1;
//     {
//         Entity* entity1 = new Entity("Bee_Liu1");
//         e1 = entity1;
//     }
//     std::cout << e1->Getname() << std::endl;
//     delete e1;

//     std::cout << sizeof(Entity) << std::endl;
//     return 0;

// }