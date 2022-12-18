// #include <iostream>

// using namespace std;

// class Log
// {
// public:
//     /**
//      * @brief 枚举中默认是32位的整型，枚举中必须是整数，不能使用float
//      * 我们能够做的是，指定你想要给枚举赋值的整数类型
//      * 比如加enum 名称 ：数据类型
//      * 我们下面实际用不到32位整型，我们使用了unsigned char(8位整型)可以节约内存的使用
//      */
//     enum LogLevel:unsigned char
//     {
//         LogLevelError = 0,
//         LogLevelWarning,
//         LogLevelInfo
//     };
//     // const int LogLevelError = 0;
//     // const int LogLevelWarning = 1;
//     // const int LogLevelInfo = 2;
// private:
//     LogLevel m_LogLevel = LogLevelInfo;
// public:
//     void SetLevel(LogLevel level) { m_LogLevel = level; }
//     void Warn(const char* msg)
//     {
//         if (m_LogLevel >= LogLevelWarning)
//             cout << "[WARNING]" << msg << endl;
//     }

//     void Error(const char* msg)
//     {
//         if (m_LogLevel >= LogLevelError)
//             cout << "[ERROR]" << msg << endl;
//     }

//     void Info(const char* msg)
//     {
//         if (m_LogLevel >= LogLevelInfo)
//             cout << "[INFO]" << msg << endl;
//     }
// };
// /**
//  * @brief 该函数用来测试对static类型变量的理解
//  * int i=0; TODO:这是一个全局变量，我们在函数的任何地方都能够调用
//  *static int i=0; TODO:这是在函数中声明的静态变量，只是作用在这个函数中
//  */
//  // void Function()
//  // {
//  //     static int i = 0;
//  //     i++;
//  //     cout << i << endl;
//  // }
//  //TODO: 完善Log类
// int main()
// {
//     Log log;
//     log.SetLevel(log.LogLevelError);
//     log.Warn("Hello, world!");
//     log.Error("Hello, world!");
//     log.Info("Hello, world!");
//     // Function();
//     // Function();
//     // Function();
//     return 0;
// }