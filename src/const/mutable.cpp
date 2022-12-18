#include <iostream>
#include <string>

int main()
{
    using namespace std::string_literals;
    std::string name = "Hello"s+"World";
    std::cout << name << std::endl;
    return 0;
}