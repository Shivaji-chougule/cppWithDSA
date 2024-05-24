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
int main()
{
    vector<int> v;

    for (int i = 0; i < 5; i++)
    {
        int x = 1 + i;
        v.push_back(x);
    }
    display(v);
    cout << endl;
    //  int i = 0;
    // int j = v.size() - 1;
    //***** reverse code using while loop
    // while (i <= j)
    // {
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;
    //     i++;
    //     j--;
    // }
    //***** reverse code using for loop
    // for (int i = 0, j = v.size() - 1; i <= j; i++, j--)
    // {
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;
    // }
    //***** reverse code using builtin method
    // reverse(v.begin(), v.end());
    
    display(v);
}