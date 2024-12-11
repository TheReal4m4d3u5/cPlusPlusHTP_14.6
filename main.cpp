#include <iostream>
#include <string>

// Function template to compare two values
template <typename T>
bool isEqual(const T& a, const T& b) {
    return a == b;
}

// User-defined class
class Point {
public:
    int x, y;

    Point(int x_val, int y_val) : x(x_val), y(y_val) {}

    // Overload the equality operator
    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }
};

int main() {
    // Test with built-in types
    std::cout << std::boolalpha; // Print boolean values as true/false
    std::cout << "Comparing integers: " << isEqual(5, 5) << std::endl;
    std::cout << "Comparing doubles: " << isEqual(3.14, 2.71) << std::endl;
    std::cout << "Comparing strings: " << isEqual(std::string("hello"), std::string("hello")) << std::endl;

    // Test with user-defined type
    Point p1(1, 2);
    Point p2(1, 2);
    Point p3(3, 4);

    std::cout << "Comparing Points p1 and p2: " << isEqual(p1, p2) << std::endl;
    std::cout << "Comparing Points p1 and p3: " << isEqual(p1, p3) << std::endl;

    return 0;
}