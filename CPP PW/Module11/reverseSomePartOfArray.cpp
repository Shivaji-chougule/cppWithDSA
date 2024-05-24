// using two pointers
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
}
void reversePart(int startIdx , int endIdx , vector<int>& a){
while(startIdx<=endIdx){
    
        int temp = a[startIdx];
        a[startIdx] = a[endIdx];
        a[endIdx] = temp;
        startIdx++;
        endIdx--;
}
}
int main()
{
    vector<int> v;

    for (int i = 0; i < 10; i++)
    {
        int x = 1 + i;
        v.push_back(x);
    }
    display(v);
    cout << endl;
   
   
    reversePart(0,4,v); //reverse idx 0 to 4
    
    display(v);
}