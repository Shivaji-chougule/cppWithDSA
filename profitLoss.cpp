#include <iostream>
using namespace std;
int main(){
    int pp;
    cout<<"enter perchaing price :";
    cin>>pp;
    int sp;
    cout<<"enter selling price :";
    cin>>sp;
    if(sp>pp){
        cout<<"profit :"<<sp-pp<<endl;
    }else if(sp<pp){
        cout<<"loss :"<<pp-sp<<endl;
    }else{
        cout<<"not profit not loss"<<endl;
    }
    
}