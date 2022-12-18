// #include <iostream>

// using namespace std;

// /**
//  * @brief 外部声明s_Variable 用extern
//  *
//  */
//  // extern int s_Variable; 
// /**
//  * @brief 当我们将结构体中的int类型的变量声明为static时，Entity所有的实例化对象都指向int类型变量的同一块内存
//  * 也就是修改一个实例化对象相当于同时修改了其他实例化对象指向变量的值
//  *
//  */
// struct Entity
// {
//     static int x, y;
//     void Print() { cout << x << "," << y << endl; }
// };

// int Entity::x;
// int Entity::y;

// int main()
// {
//     Entity e;
//     Entity::x = 2;
//     Entity::y = 3;
//     // e.Print();
//     Entity e1;

//     e.Print();
//     e1.Print();
//     return 0;
// }