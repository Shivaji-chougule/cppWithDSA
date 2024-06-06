#include <iostream>
using namespace std;

class bike{
  public:
  static int noOfBikes;
  int tyreSize;
  int engineSize;
    // constructor :
//   bike(int tyreSize, int engineSize){
//     this->tyreSize = tyreSize;
//     this->engineSize = engineSize;
//   
//****// initilization list: its way of writing constuctor like
    bike(int ts , int es):tyreSize(ts),engineSize(es){

    }
};

int bike::noOfBikes = 5;
int main(){
 
  bike harly(18,99);
  bike ducati(20,100);
 
  cout<<harly.noOfBikes<<endl;
  cout<<ducati.noOfBikes<<endl;
  // cout<<harly.tyreSize<<endl;
  // cout<<harly.engineSize<<endl;
  // cout<<ducati.tyreSize<<endl;
  // cout<<ducati.engineSize<<endl;
}