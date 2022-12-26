// #include "iostream"
// #include "string"


// // using String = std::string;
// struct  Vector
// {
//     float x, y;
// };

// class String
// {
// private:
//     char* m_Buffer;
//     unsigned int m_Length;
// public:
//     String(const char* string)
//     {
//         m_Length = strlen(string);
//         m_Buffer = new char[m_Length + 1];
//         memcpy(m_Buffer, string, m_Length);
//         m_Buffer[m_Length] = '\0';
//     }

//     String(const String& other)
//         :m_Length(other.m_Length)
//     {
//         std::cout<<"Copying string"<<std::endl;
//         m_Buffer = new char[m_Length + 1];
//         memcpy(m_Buffer, other.m_Buffer, m_Length + 1);
//     }

//     ~String()
//     {
//         delete[] m_Buffer;
//     }

//     char& operator[](unsigned int index)
//     {
//         return m_Buffer[index];

//     }

//     friend std::ostream& operator<<(std::ostream& stream, const String& string);
// };



// std::ostream& operator<<(std::ostream& stream, const String& string)
// {
//     stream << string.m_Buffer;
//     return stream;
// }

// void PrintString(const String& string)
// {
//     std::cout << string << std::endl;
// }

// int main()
// {
//     Vector a = { 2,3 };
//     Vector b = a;
//     b.x = 5;//myider:a和b是两个不同的变量，占用不同的内存，修改b.x并不会修改a中的x

//     String string = "Bee_Liu!";
//     String second = string;

//     second[2] = 'E';

//     PrintString(string);
//     PrintString(second);

//     // std::cout << string << std::endl;
//     // std::cout << second << std::endl;//myider:这里运行后会发生程序崩溃，原因就是上面我进行了字符串的复制，string和second都指向同一块内存地址，上面我们从堆上分配了内存然后出作用域会调用两次析构函数，因为第一次内存已经释放了，我们不能再进行第二次释放,否则程序就会发生崩溃

//     return 0;
// }

