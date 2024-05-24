#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    int rollNo;

    void printInfo(){
        cout<<"name :";
        cout<<name<<endl;
        cout<<"age :";
        cout<<age<<endl;
        cout<<"rollNo :";
        cout<<rollNo<<endl;
    }
    
};

int main(){
    student arr[3];
    for(int i=0;i<3;i++){
        cout<<"enter name :";
        cin>>arr[i].name;
        cout<<"enter age :";
        cin>>arr[i].age;
        cout<<"enter rollNo :";
        cin>>arr[i].rollNo;
    }

     for(int i=0;i<3;i++){
        arr[i].printInfo();
     }
}