#include <iostream>
using namespace std;

bool primeNo(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cout << "enter start no :";
    cin >> n;
    int m;
    cout << "enter end no :";
    cin >> m;
    primeNo(n);
    for (int i = n; i <= m; i++)
    {
        if (primeNo(i))
        {
            cout << i << endl;
        }
    }
}
