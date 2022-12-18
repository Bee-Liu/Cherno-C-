// #include <iostream>
// #include <string>
// // #include <string.h>

/* class Entity
{
private:
    int m_X, m_Y;
    mutable int m_Z;
public:
    Entity(int x, int y, int z):m_X(x), m_Y(y), m_Z(z){}
    int getX() const {
        m_Z = 2;
        return m_X;
    }//FIXME:在常量方法中我们不能改变类中的任何东西，但是当我们把变量声明为mutable时就可以在常量方法中修改变量的值
    void setX(int x) { m_X = x; }
}; */
/* 
void PrintEntity(const Entity& e)
{
    std::cout <<e.getX() << std::endl;
} */

// int main()
// {
//     Entity e(1,2,3);
//     e.setX(10);
//     PrintEntity(e);

//     // const int a=5; //FIXME:如果我们声明为const那么我们就认为它是的常量，就不能修改a的值，对不能修改
//     //a = 3;

/*     using namespace std::string_literals;
    std::string name = "我是"s + "女生";
    std::cout << name << std::endl; */

/*     const int MAX_AGE = 90;
    const int* a=new int;//FIXME:我们不能修改a指向地址的值，但是我们可以修改a指向的地址：如下 FIXME:const int*和int const*是一样的
    *a = 2;
    a=(int*)&MAX_AGE; */

    /* int* const a=new int;//FIXME:我们可以修改a指向地址的值，但是我们不能修改a指向的的值
    *a=2;
    a =(int*)&MAX_AGE;
    std::cout<<a<<std::endl; */

//     return 0;
// }