#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1;
  
  
    for (int i = 0; i < 5; i++)
    {
          int x = 1 + i;
        v1.push_back(x);
    }
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    cout<<endl;


    vector<int> v2;

   for (int i = v1.size()-1; i>=0; i--)
    {
       int y = v1[i];
        v2.push_back(y);
    }
    
   
        for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
}