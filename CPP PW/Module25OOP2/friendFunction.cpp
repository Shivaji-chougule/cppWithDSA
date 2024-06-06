#include <iostream>
using namespace std;

// class Box{
//     private:
//     int width;

//     public:
//     // Constructor to initialize width
//     Box(int width){
//        this->width = width; 
//     }
//     // Friend function declaration
//     friend void BoxWidth(Box r);
// };
//     // Definition of friend function
//     void BoxWidth(Box r){
//         cout<<r.width<<endl;
//     };
// int main(){
//     Box red(10);
//     // cout<<red.width<<endl;
//     BoxWidth(red);
// }

//////////////**************///////////*******************

    class Vector{
        private:
        double x,y,z;

        public:
        // constructor
        Vector(double xv,double yv,double zv){
            x = xv;
            y = yv;
            z = zv;
        }

        friend Vector operator+(const Vector& v1, const Vector& v2);
        
        void display()const{
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
    };
        Vector operator+(const Vector& v1, const Vector& v2){
            return Vector(v1.x+v2.x,v1.y+v2.y,v1.z+v2.z);
        }
    int main(){
        Vector v1(1,2,3);
        Vector v2(4,5,6);

        Vector v3 = v1 + v2;
        v1.display();
        v2.display();
        v3.display();
    }