// #include <iostream>
// #include <string>

// using String = std::string;

// class Entity
// {
// private:
//     String m_name;
// public:
//     Entity(): m_name("Unknown") {}
//     Entity(const String& name): m_name(name) {}

//     const String& Getname() const { return m_name; }
// };

// int main()
// {
    
//     int a = 2;//FIXME:4 bytes
//     int* b=new int[50]; //FIXME:200 bytes
    
//     //FIXME:placement new
//     Entity* e = new Entity; //FIXME:他调用了Entity构造函数  FIXME:Entity* e = new(b) Entity;将b分配的内存给e；
//     Entity* e1 = (Entity*)malloc(sizeof(Entity));//FIXME:仅仅分配内存，然后给我们一个指向那个内存的地址，并没有调用构造函数
    
//     free(e1);
//     delete[] b;
//     delete e;
    
//     return 0;
// }