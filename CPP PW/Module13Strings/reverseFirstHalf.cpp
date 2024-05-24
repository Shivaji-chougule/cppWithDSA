
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string names;
    cout << "Enter string: ";
    getline(cin, names);
    
    // Reverse half string
    int n = names.length();
    reverse(names.begin(), names.begin() + n / 2);
    
    cout << "Reversed half string: " << names << endl;
    
    return 0;
}
