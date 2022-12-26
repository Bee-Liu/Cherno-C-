// #include <iostream>
// #include <string>
// #include <memory>

// //myider:new和delete，new在堆上分配内存，需要delete来删除内存，释放内存，因为它不会自动释放内存 我们不能复制unique_ptr,
// //warnme：智能指针是实现这一过程自动化的一种方式，智能指针本质上是一个原始指针的包装，当你创建一个智能指针，他会自动new帮你从堆上分配内存，然后基于你使用的智能指针，他会在某一时刻自动释放内存
// //todo first:(unique_ptr):作用域指针，当你超出作用于是他会自动销毁
// //todo second:(shared_ptr):工作方式是通过引用计数，引用计数基本上是一种方法，可以跟踪你的指针有多少个引用，一旦引用计数为0，他就被删除了
// //notes:(shared_ptr):比如我们创建了一个shared_ptr用另一个shared_ptr来复制它那么我们的引用计数就是2，当我们一个shared_ptr销毁时计数值就减一,当减到零时，内存就被释放了

// class Entity
// {
// public:
//     Entity()
//     {
//         std::cout << "created Entity" << std::endl;
//     }

//     ~Entity()
//     {
//         std::cout << "destroyed Entity" << std::endl;
//     }

//     void Print()
//     {
//         //print
//     }
// };


// int main()
// {
//     {
//         // std::unique_ptr<Entity> entity(new Entity);//myider:显式调用构造函数

//         //myider:这样创建不会导致异常内存泄漏，最终不会得到一个没有引用的悬空指针，从而造成内存泄漏,为了异常安全
//         //warnme:不能复制
//         std::unique_ptr<Entity> entity1 = std::make_unique<Entity>();
//         entity1->Print();
//         // std::unique_ptr<Entity> entity2 = std::make_unique<Entity>();
//         // entity2=entity1;//warnme:我们不能复制unique_ptr指针
//     }

//     {
//         std::shared_ptr<Entity> e0;
//         {
//             //myider:这样创建和unique_ptr有所不同就是因为shared_ptr需要分配另外一块内存，叫做控制块，用来存储引用计数
//             //warnme:能够复制
//             std::shared_ptr<Entity> entity2 = std::make_shared<Entity>();
//             e0 = entity2;
//         }//warnme:当离开作用域时对象会被自动销毁
//         return 0;
//     }

//     {
//         std::weak_ptr<Entity> e1;
//         {
//             //myider:这样创建和unique_ptr有所不同就是因为shared_ptr需要分配另外一块内存，叫做控制块，用来存储引用计数
//             //warnme:能够复制
//             std::shared_ptr<Entity> entity3 = std::make_shared<Entity>();
//             e1 = entity3;
//         }//warnme:当离开作用域时对象会被自动销毁
//         return 0;
//     }
// }