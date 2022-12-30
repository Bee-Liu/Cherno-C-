// #include <iostream>
// #include <string>


// struct Entity
// {
//     float x, y, z;

//     Entity(float x, float y, float z): x(x), y(y), z(z)
//     {
//         std::cout<<"Created!"<<std::endl;
//     }
// };


// int main()
// {
//     //Notes:这是在栈上分配的内存
//     int a = 5;
//     int b[5];
//     b[0] = 0;
//     b[1] = 1;
//     b[2] = 2;
//     b[3] = 3;
//     b[4] = 4;
//     Entity entity(1, 2, 3);

//     //Notes:这是在堆上分配的内存
//     int* ptr = new int;
//     *ptr = 5;
//     int* array = new int[5];
//     array[0] = 1;
//     array[1] = 2;
//     array[2] = 3;
//     array[3] = 4;
//     array[4] = 5;
//     Entity* entity1 = new Entity(1,2,3);

//     return 0;
// }