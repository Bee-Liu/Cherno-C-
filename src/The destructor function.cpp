#include <iostream>

/**
 * @brief TODO:构造函数的孪生兄弟"析构函数"学习
 * TODO:析构函数是在销毁对象时运行，卸载变量等东西，并清理使用过的内存
 * TODO:析构函数同时适用于栈和堆分配的对象
 * @return int
 */

class Eninty
{
public:
    float X, Y; //TODO:这里我们为这两个浮点变量申请内存时，完全没有考虑之后怎么清除内存
public:
    //TODO:创建实例对象时会自动调用(构造函数) 通常如果我们不创建一个构造函数，
    //TODO:编译器也会给我们创建一个默认的构造函数（这个默认的构造函数啥也没做）
    Eninty()
    {
        X = 0.0f; Y = 0.0f;
        std::cout << "Created Eninty!" << std::endl;
    }

    ~Eninty() { std::cout << "Destroyed Eninty!" << std::endl; }

    void Printf()
    {
        std::cout << X << " " << Y << std::endl;
    }
};

void Function()
{
    Eninty e; //这是堆分配的,只有当主函数退出时(超出作用域时，它会自动销毁)，析构函数才会被调用 
    e.Printf();
}
int main()
{
    Function();
    return 0;
}