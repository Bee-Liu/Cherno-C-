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
//     // TODO: ����Ĵ��벻��ִ�У���Ϊ���Ƕ�ֻ�����ڴ�����˲���
//     //name2[0] = '\0';
//     /**
//      * @brief ����ͬ��������ô���������еı�������ͨ��
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
//     //TODO: ����Ч����������һ���ģ�����R�ܹ�ʹ������Ӽ�෽��
//     const char* e="line\n"
// "line2\n"
// "line3\n"
// "line4\n";
//     std::cout << e << std::endl;


//     return 0;
// }