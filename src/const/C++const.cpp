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
    }//FIXME:�ڳ������������ǲ��ܸı����е��κζ��������ǵ����ǰѱ�������Ϊmutableʱ�Ϳ����ڳ����������޸ı�����ֵ
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

//     // const int a=5; //FIXME:�����������Ϊconst��ô���Ǿ���Ϊ���ǵĳ������Ͳ����޸�a��ֵ���Բ����޸�
//     //a = 3;

/*     using namespace std::string_literals;
    std::string name = "����"s + "Ů��";
    std::cout << name << std::endl; */

/*     const int MAX_AGE = 90;
    const int* a=new int;//FIXME:���ǲ����޸�aָ���ַ��ֵ���������ǿ����޸�aָ��ĵ�ַ������ FIXME:const int*��int const*��һ����
    *a = 2;
    a=(int*)&MAX_AGE; */

    /* int* const a=new int;//FIXME:���ǿ����޸�aָ���ַ��ֵ���������ǲ����޸�aָ��ĵ�ֵ
    *a=2;
    a =(int*)&MAX_AGE;
    std::cout<<a<<std::endl; */

//     return 0;
// }