// #include <iostream>
// #include <string.h>
// #include <stdlib.h>
// #include <string>


// int main()
// {
//     const char name[12] = "hello\0world";
//     const char* Name = name;
//     std::cout << strlen(name) << std::endl; //5  because wo use \0 in name[12]

//     const char* name2 = "Beelyc2";
//     // TODO: 下面的代码不能执行，因为我们对只读的内存进行了操作
//     //name2[0] = '\0';
//     /**
//      * @brief 我们同样不能这么做，可能有的编译器会通过
//      * char* Str=(char*)"Beelyc";
//      * Str[0]  ='b';
//      */
  

//     const char* str = u8"Beelyc";
//     const wchar_t* str2 = L"Beelyc";

//     const char16_t* str3 = u"Beelyc";
//     const char32_t* str4 = U"Beelyc";

//     std::cout << str << std::endl;
//     std::cout << str2 << std::endl;
//     std::cout << str3 << std::endl;
//     std::cout << str4 << std::endl;

//     using namespace std::string_literals;

//     std::string name0 = "Beelyc"s + "hello!";
//     std::wstring name1 = L"Beelyc"s + L"hello!";
//     std::u16string names = u"Beelyc"s + u"hello!";
//     std::u32string name3 = U"Beelyc"s + U"hello!";

//     std::cout << name0 << std::endl;
//     // std::cout << name1<< std::endl;
//     // std::cout << names << std::endl;
//     // std::cout << name3 << std::endl;

//     const char* example =R"(line
// line2
// line3
// line4)";
//     std::cout << example << std::endl;
//     //TODO: 下面效果和上面是一样的，但是R能够使代码更加简洁方便
//     const char* e="line\n"
// "line2\n"
// "line3\n"
// "line4\n";
//     std::cout << e << std::endl;


//     return 0;
// }