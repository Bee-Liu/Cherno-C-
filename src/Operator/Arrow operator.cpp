// #include <iostream>
// #include <string>


// class Entity
// {
// public:
//     void Print() const { std::cout << "hello world!" << std::endl; }
// };


// class Scopedptr
// {
// private:
//     Entity* m_Obj;
// public:
//     Scopedptr(Entity* entity):m_Obj(entity)
//     {

//     }
//     ~Scopedptr() {
//         delete m_Obj;
//     }

//     Entity* operator->()
//     {
//         return m_Obj;
//     }

//     Entity* GetObject() { return m_Obj; }
// };


// struct Vector3
// {
//     float x, y, z;
// };

// int main()
// {
//     Entity e;
//     e.Print();

//     Entity* ptr = &e;
//     ptr->Print();
//     // (*ptr).Print();//notes:逆向引用

//     Scopedptr entity = new Entity();
//     entity->Print();
//     entity.GetObject()->Print();

//     int a = (int)&((Vector3*)nullptr)->y;
//     std::cout << a << std::endl;
//     return 0;
// }