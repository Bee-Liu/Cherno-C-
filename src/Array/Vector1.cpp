// //Notes:C++动态数组

// #include <iostream>
// #include <string>
// #include <vector>

// struct Vertex
// {
//     float x, y, z;
// };


// std::ostream& operator<<(std::ostream& stream, const Vertex& vector)//Notes:运算符重载<<
// {
//     stream << vector.x << "," << vector.y << "," << vector.z;
//     return stream;
// }

// void Function(const std::vector<Vertex>& vector)
// {
//     // 
// }



// int main()
// {
//     std::vector<Vertex> vertices;
//     vertices.push_back({ 1,2,3 });
//     vertices.push_back({ 4,5,6 });
//     Function(vertices);

//     for(int i = 0; i <vertices.size(); i++)
//     std::cout << vertices[i] << std::endl;

//     vertices.erase(vertices.begin());


//     for(const Vertex& v : vertices)//Notes:这里加&为了减少复制
//     std::cout << v << std::endl;
//     return 0;
// }