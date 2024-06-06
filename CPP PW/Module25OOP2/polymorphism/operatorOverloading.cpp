// operator overloading allows to user defind types to behave
// like built in types by defining the operations for them.
#include <iostream>
using namespace std;

class demo {
public:
    int a;

    void putData() {
        cout << "Enter number: ";
        cin >> a;
    }

    void getData() {
        cout << "Value: " << a << endl;
    }

    // Overload the + operator
    demo operator+(const demo& bb) {
        demo cc;
        cc.a = this->a + bb.a;
        return cc;
    }
};

int main() {
    demo aa, bb, cc;

    // Get input data for aa and bb
    aa.putData();
    bb.putData();

    // Perform addition
    cc = aa + bb;

    // Display result
    aa.getData();
    bb.getData();
    cc.getData();

    return 0;
}

//******************* another example 

// #include <iostream>
// using namespace std;

// class Point {
// private:
//     int x, y;

// public:
    // Constructor
//     Point(int x = 0, int y = 0) : x(x), y(y) {}

//     // Overload the == operator
//     bool operator==(const Point& p) const {
//         return (x == p.x && y == p.y);
//     }

//     // Overload the != operator
//     bool operator!=(const Point& p) const {
//         return !(*this == p);
//     }

//     // Display function
//     void display() const {
//         cout << "(" << x << ", " << y << ")" << endl;
//     }
// };

// int main() {
//     Point p1(3, 4), p2(3, 4), p3(1, 2);

//     // Compare points
//     if (p1 == p2)
//         cout << "p1 is equal to p2" << endl;
//     else
//         cout << "p1 is not equal to p2" << endl;

//     if (p1 != p3)
//         cout << "p1 is not equal to p3" << endl;
//     else
//         cout << "p1 is equal to p3" << endl;

//     return 0;
// }
