#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class players{
    public:
    int rank;
    int weight;
    int bicep;
    // private:
    int height;
    int chest;
};

int main(){
    players john;
    john.rank = 1;
    john.weight = 150;
    john.bicep = 22;
    john.height = 6.6;
    john.chest = 56;

    cout<<john.rank<<endl;
    cout<< john.weight<<endl;
    cout<<john.bicep<<endl;
    cout<<john.height<<endl;
    cout<<john.chest<<endl;
}