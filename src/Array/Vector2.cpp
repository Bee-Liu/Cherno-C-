// //Notes:vector的优化使用
// #include <iostream>
// #include <string>
// #include <vector>

// struct Vertex
// {
//     float x, y, z;

//     Vertex(float x, float y, float z)
//         :x(x), y(y), z(z)
//     {

//     }

//     Vertex(const Vertex& vertex)
//         :x(vertex.x), y(vertex.y), z(vertex.z)
//     {
//         std::cout << "Copy!" << std::endl;
//     }


// };



// int main()
// {
//     std::vector<Vertex> vertices;//Warnme:  std::vector<Vertex> vertices(3); 这里实际上是构造了3个对象而不是分配了3个内存空间

//     vertices.reserve(3);
//     //Notes:1
//     // vertices.push_back(Vertex(1, 2, 3));
//     // vertices.push_back(Vertex(4, 5, 6));
//     // vertices.push_back(Vertex(7, 8, 9));
//     //Notes:2
//     vertices.emplace_back(1, 2, 3);
//     vertices.emplace_back(4, 5, 6);
//     vertices.emplace_back(7, 8, 9);

//     return 0;
// }