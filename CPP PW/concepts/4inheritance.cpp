#include <iostream>
#include <string>
using namespace std;

class vehicle{
private: // Change access specifier to private
    string color;
public:
    int enginePower;
    int price;
    string companyName;

    void showCompany(){
        cout<<companyName<<endl;
    }

    // Setter method to set the color
    void setColor(const string& col) {
        color = col;
    }

    // Getter method to get the color
    string getColor() const {
        return color;
    }
};

class cars : public vehicle{
public:
    int stearingSize;
};

class bikes : public vehicle{
public:
    int handleSize;
};

int main(){
    cars xuv700;
    xuv700.stearingSize = 10;
    cout << xuv700.stearingSize << endl;

    xuv700.setColor("red"); // Using the setter method to set the color
    cout << xuv700.getColor() << endl; // Using the getter method to get the color

    xuv700.companyName = "Mahendra";
    xuv700.showCompany(); //we can also access the member function of parent class

    return 0;
}
