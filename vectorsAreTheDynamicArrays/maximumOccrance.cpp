#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec(8);
    for(int i=0;i<=vec.size();i++){
        cout<<"enter elements :"<<" ";
        cin>>vec[i];
    }

    // for(int i=0;i<=vec.size();i++){
    //     cout<<vec[i]<<" "<<endl;
    // }
    int n;
    cout<<"enter number & get occurance :";
    cin>>n;
    int occ= 0;
     for(int i=0;i<=vec.size();i++){
        if(vec[i]==n){
            occ++;
        }
    }
    cout<<occ<<endl;
}