#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the rows :";
    cin>>n;
    int m;
    cout<<"enter the col :";
    cin>>m;
    // int mid = n/2 + 1 ;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i== n || j== m){
                cout<<"* ";
            }else if(i== 1 || j== 1){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }
}