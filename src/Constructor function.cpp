// #include <iostream>
// /**
//  * @brief :构造函数学习，构造函数通常是设置变量或者做你需要的任何初始化
//  *
//  */
// class Eninty
// {
// public:
//     float X, Y;
// public:
//     //TODO:创建实例对象时会自动调用(构造函数) 通常如果我们不创建一个构造函数，
//     //TODO:编译器也会给我们创建一个默认的构造函数（这个默认的构造函数啥也没做）
//     Eninty() { X = 0;Y = 0; }
//     Eninty(float x, float y)
//     {
//         X = x;
//         Y = y;
//     }
//     void Printf()
//     {
//         std::cout << X << " " << Y << std::endl;
//     }
// };

// class Log
// {
// public:
//     Log() = delete;
//     static void Write()
//     {

//     }
// };

// int main()
// {
//     Log::Write();
//     Log l;
//     Eninty e(10.0f, 20.0f);
//     std::cout << e.X << " " << e.Y << std::endl;
//     e.Printf();
//     return 0;
// }