#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec;
    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(6);
    vec.push_back(8);
    vec.push_back(10);
    vec.push_back(12);
    vec.push_back(14);
    vec.push_back(16);
    vec.push_back(18);
    vec.push_back(20);

    cout<<vec[5]<<endl;

    cout<<vec.size()<<endl;

    cout<<vec.capacity()<<endl;

    vec.pop_back();
    cout<<vec.size()<<endl;
}