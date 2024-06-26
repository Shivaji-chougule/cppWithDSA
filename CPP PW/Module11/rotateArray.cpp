#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout<<endl;
}
void reversePart(int i, int j,vector<int>& v){
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}
int main()
{
    vector<int> v;
    int k = 7; //given
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(10);
    v.push_back(12);
    v.push_back(14);
    v.push_back(16);
      display(v);
    int n = v.size();
    if(k>n) k = k % n;
    reversePart(0,n-k-1,v);
    // display(v);
    reversePart(n-k,n-1,v);
    // display(v);
    reversePart(0,n-1,v);
    display(v);
    cout << endl;
}