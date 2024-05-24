#include <iostream>

class MathOperations {
public:
    static int count; // Static member variable to count the number of operations

    static int add(int x, int y) {
        count++; // Increment count each time add() is called
        return x + y;
    }

    static int multiply(int x, int y) {
        count++; // Increment count each time multiply() is called
        return x * y;
    }
};

// Definition of the static member variable outside the class
int MathOperations::count = 0;

int main() {
    int a = 5, b = 3;

    // Calling the static member functions using the class name
    int sum = MathOperations::add(a, b);
    int product = MathOperations::multiply(a, b);

    std::cout << "Sum: " << sum << std::endl;       // Output: 8
    std::cout << "Product: " << product << std::endl; // Output: 15

    // Display the count of operations
    std::cout << "Number of operations: " << MathOperations::count << std::endl; // Output: 2

    return 0;
}


