// #include <iostream>
// #include <fstream>
// #include <array>
// class Entity
// {
// public:
//     int* example = new int[5];

//     Entity()
//     {
//         int* ptr;
//         int count = sizeof(*example) / sizeof(int);
//         std::cout<<count<<std::endl;
//         std::array<int,5> another;
//         for (int i = 0; i < another.size(); i++)
//             example[i] = 2;
//         //ptr = example;
        
        

//     }
// };
// int main()
// {
//     // int example[5];
//     // std::cout << sizeof(example) / sizeof(int) << std::endl;

//     Entity e;
//     int a=2;
//     int* ptr=&a;
//     std::cout<<sizeof(*ptr) << std::endl;
//     /**
//      * @brief TODO: 2;
//      *
//      */
//      // int example[5]; //FIXME:这是在栈上创建的 当我们的程序退出它会自动销毁
//      // int* ptr = example;

//      // int* another = new int[5]; //FIXME:这是在堆上创建的，所以用完一定要delete[] another
//      // for (int i = 0; i < 5; i++)
//      //     another[i] = 2;
//      // delete[] another;
//      // /**
//      //  * @brief 
//      //  * TODO: 1;
//      //  */
//      // example[2]=2;
//      // *(int*)((char*)ptr + 2) = 6;
//      // std::cout << example[0] << std::endl;

//      // *(int*)((char*)ptr + 8) = 6;
//      // std::cout << example[2] << std::endl;


//     return 0;
// }