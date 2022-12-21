// //Notes:运算符及其重载
// #include <iostream>
// #include <string>

// using String = std::string;

// struct Vector2
// {
//     float x, y;
    
//     Vector2(float x, float y)
//         :x(x), y(y)
//     {}
//     Vector2 Add(const Vector2& other) const
//     {
//         return  Vector2(x + other.x, y + other.y);
//     }

//     Vector2 operator+(const Vector2& other) const
//     {
//         return Add(other);
//     }
//     Vector2 operator*(const Vector2& other) const
//     {
//         return Multiply(other);
//     }
     
//     Vector2 Multiply(const Vector2& other) const
//     {
//         return Vector2(x * other.x, y * other.y);
//     }

//     bool operator==(const Vector2& other) const
//     {
//         return x == other.x && y == other.y;
//     }
    
//    bool operator!=(const Vector2& other) const 
//    {
//         return !(*this == other);
//    }
// };

// std::ostream& operator<<(std::ostream& stream, const Vector2& vector)
// {
//     stream << vector.x << ", " << vector.y;
//     return stream;
// }

// int main()
// {
        
//     Vector2 position(2.0f, 2.0f);
//     Vector2 speed(0.5f, 1.5f);
//     Vector2 powerup(1.1f, 1.1f);
    
//     Vector2 result = position.Add(speed.Multiply(powerup));
//     Vector2 result2 = position + speed * powerup;

//     std::cout << result2 << std::endl;
//     std::cout << "x=" << result2.x << ",y=" << result2.y << std::endl;
//     return 0;
// }    