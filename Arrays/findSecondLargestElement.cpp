#include <iostream>
#include <limits>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 25, 67, 77, 78, 9, 10}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxi = numeric_limits<int>::min();
    int secmaxi = numeric_limits<int>::min();

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxi) {
            secmaxi = maxi; // Update secmaxi with the previous value of maxi
            maxi = arr[i]; // Update maxi with the new maximum value
        } else if (arr[i] > secmaxi && arr[i] != maxi) { // Check if the element is greater than secmaxi and not equal to maxi
            secmaxi = arr[i];
        }
    }

    cout << "Second maximum value: " << secmaxi << endl;

    return 0;
}
