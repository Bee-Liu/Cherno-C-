// #include <iostream>
// #include <string>

// class Example
// {
// public:
//     Example()
//     {
//         std::cout << "Example Entity" << std::endl;
//     }
//     Example(int x)
//     {
//         std::cout << "Example Entity" << x << std::endl;
//     }
// };

// class Entity
// {
// private:
//     std::string m_Name;
//     Example m_Example;
// public:
//     Entity()
//         :m_Name("Bee_Liu"),m_Example(Example(8))
//     {}
//     Entity(const std::string& name)
//         :m_Name(name)
//     {}

//     const std::string& GetName() const
//     {
//         std::cout << m_Name << std::endl;
//         return m_Name;
//     }
// };

// int main()
// {
//     Entity e0;
//     e0.GetName();
//     //Entity e1("Hello Bee_Liu");
//     //e1.GetName();
//     return 0;
// }