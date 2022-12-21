// //notes:C++的对象生存期（栈作用域生存期）
// #include <iostream>
// #include <string>

// //warnme:理解栈上的东西是如何存在的，这样才能够写出不会崩溃的代码，能正常工作的代码
// //myider:当应用程序终止时系统会自动释放栈和堆上的内存
// class Entity
// {
// public:
//     Entity()
//     {
//         std::cout << "Create Entity" << std::endl;
//     }
//     ~Entity()
//     {
//         std::cout << "Destroy Entity" << std::endl;
//     }
// };

// //myider:当然我们可以传进去一个参数来接收该作用域中的内容
// //myider:在局部创建数组是不好的做法，一旦出了作用域就会被销毁，导致问题
// int* CreateArray()
// {
//     int* a=new int[50];//warnme:这是在堆上创建的，因此不会有26行警告;
//     return a;
//     // int a[50]={1,2,3,4,5,6,7,8,9};//warnme:这是在栈上创建的
//     // return a;//warnme:与返回的局部变量'a'相关的堆栈内存地址:警告
// }

// class Scopedptr
// {
//     private:
//     Entity* m_ptr;
//     public:
//     Scopedptr(Entity* ptr)
//         : m_ptr(ptr)
//         {}
//     ~Scopedptr()
//     {
//       delete m_ptr;
//     }
// };

// int main()
// {
//     int* c=CreateArray();
//     // int* b=CreateArray();
//     // std::cout<<*(b+1)<<std::endl;

//     {
//         Entity e;//warnme:运行到这会从栈上创建对象
//     }//warnme:出作用域后会销毁对象

//     {
//         Entity* e1 = new Entity;//warnme:从堆上创建的对象
//     }//warnme:出作用域后不会销毁对象

//     //myider：自动析构，这种基于栈的变量，离开作用域后会被自动销毁，是非常有用的
//     Scopedptr s=new Entity();//todo:即使我们从堆上来创建对象，但它仍然会调用析构函数，这就是智能指针工作方式

//     return 0;
// }

