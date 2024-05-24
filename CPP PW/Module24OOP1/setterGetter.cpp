#include <iostream>
#include <string>
using namespace std;

class book{
    private:
    string title;
    int price;
    int noOfPages;

    public:
    //setter
    void setTitle(string s){
        title = s;
    }
    void setPrice(int p){
        price = p;
    }
    //getter
    string getTitle(){
        return title;
    }
    int getPrice(){
        return price;
    }

};
int main(){
    book harryPotter;
    harryPotter.setTitle("lord voldimord");
    cout<<harryPotter.getTitle()<<endl;
    harryPotter.setPrice(50);
    cout<<harryPotter.getPrice()<<endl;
}