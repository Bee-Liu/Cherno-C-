// #include <iostream>
// #include <string>
// /**
//  * @param 纯虚函数学习
//  * @param 我们通常在接口类中不去具体实现函数功能而是子类去强制实现
//  * @param 一旦定义了虚函数那么我们必须要去实现它然后我们才能实例化对象
//  * FIXME:virtual std::string GetName() = 0;
//  */
// class Printable
// {
// public:
//     virtual std::string GetClassName() = 0;
// };

// class Entity:public Printable
// {
// public:
//     virtual std::string GetName() { return "Entity"; }
//     std::string GetClassName() override { return "Entity2"; }
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
//     std::string GetClassName() override { return "Cherno2"; }
// };

// class A: public Printable
// {
// public:
//     // A()=delete;
//     std::string GetClassName() override { return "A"; }
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

// void Print(Printable* obj)
// {
//     std::cout << obj->GetClassName() << std::endl;
// }

// int main()
// {
//     /** 
//      * @brief
//      * @param Entity* e = new Entity();
//         "message": "不允许使用抽象类类型 \"Entity\" 的对象:",
//         "message": "函数 \"Entity::GetName\" 是纯虚拟函数",
//      */
//     Entity* e = new Entity();
//     //Entity* e = new Player("Entity");
//     Print(e);
//     PrintName(e);

//     Player* p = new Player("Cherno");
//     std::cout << p->GetName() << std::endl;
//     /**
//      * @brief 这里我们传的是Player类型的指针变量，但是并没有调用Player类中打印名字的方法；原因是由于父类型变量
//      * 接收它会从父类中找到这个叫做Getname的函数
//      * @param 当我们将基函数修改成virtual时将会找到子类中的覆写函数
//      */
//     PrintName(p);
//     Print(p);

//     A* a = new A();
//     Print(a);
//     return 0;
// }