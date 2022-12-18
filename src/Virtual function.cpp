// #include <iostream>
// #include <string>
// /**
//  * @brief 虚函数学习
//  * FIXME:虚函数引入了一种叫做Dynamic Dispatch(动态联编)的东西,它通常通过v表(虚函数表)来实现编译
//  * FIXME:v表就是一个表，它包含基类中所有虚函数的映射，这样我们可以在它运行时，将它们映射到正确的覆写(override)函数
//  * @param 我们需要额外的内存来存储v表这样我们就可以分配到正确的函数
//  * @param 这是额外的性能损失
//  * @param 同时基类中要有一个成员指针指向v表 @param 每次我们调用虚函数时都会遍历这个表来确定要映射到哪个函数
//  * @param 1:std::string GetName() { return "Entity"; }
//  * @param 2:virtual std::string GetName() { return "Entity"; }
//  */
// class Entity
// {
// public:
//     virtual std::string GetName() { return "Entity"; }
// };

// /**
//  * @brief Player公有继承Entity
//  * @param 当我们需要覆写函数时要在函数后面加上override来表示这是一个覆写函数
//  */
// class Player:public Entity
// {
// private:
//     std::string Name;
// public:
//     Player(const std::string& name): Name(name) {}

//     std::string GetName() override { return Name; }
// };

// /**
//  * @brief 打印名字函数
//  *
//  * @param entity
//  */
// void PrintName(Entity* entity)
// {
//     std::cout << entity->GetName() << std::endl;
// }

// int main()
// {
//     Entity* e = new Entity();
//     PrintName(e);

//     Player* p = new Player("Cherno");
//     std::cout << p->GetName() << std::endl;
//     /**
//      * @brief 这里我们传的是Player类型的指针变量，但是并没有调用Player类中打印名字的方法；原因是由于父类型变量
//      * 接收它会从父类中找到这个叫做Getname的函数
//      * @param 当我们将基函数修改成virtual时将会找到子类中的覆写函数
//      */
//     PrintName(p);

//     return 0;
// }