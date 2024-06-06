#include <iostream>
using namespace std;

class AbstractClass {
public:
    virtual void display() = 0;  // Pure virtual function
    virtual ~AbstractClass() {}  // Virtual destructor
};

class ConcreteClass : public AbstractClass {
public:
    void display() override {
        cout << "Implementation of display in ConcreteClass" << endl;
    }
};

int main() {
    // AbstractClass obj;  // Error: Cannot instantiate abstract class
    ConcreteClass obj;  // OK: ConcreteClass can be instantiated
    obj.display();  // Outputs: Implementation of display in ConcreteClass
    return 0;
}
