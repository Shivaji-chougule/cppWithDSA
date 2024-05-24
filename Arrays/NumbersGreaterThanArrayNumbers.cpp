// tell the numbers are greater than given no.


#include<iostream>
using namespace std;

int main() {
    int numarr[] = {25, 75, 23, 115, 74, 23, 86, 34, 11, 98, 35};
    int x = 30;
    int n = sizeof(numarr) / sizeof(numarr[0]);

    int* arr = nullptr; // Initialize arr pointer to null

    int count = 0; // Count the number of elements in numarr greater than x
    for (int i = 0; i < n; i++) {
        if (numarr[i] > x) {
            count++;
        }
    }

    if (count > 0) { // Allocate memory for arr if there are elements greater than x
        arr = new int[count];
        int idx = 0; // Index to keep track of the position in arr

        // Populate arr with elements from numarr greater than x
        for (int i = 0; i < n; i++) {
            if (numarr[i] > x) {
                cout<<numarr[i]<<" ";  //dirctly printing
                arr[idx] = numarr[i];
                idx++;
            }
        }
    }
    cout<<endl;
    // Print elements of arr
    for (int i = 0; i < count; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deallocate memory
    delete[] arr;

    return 0;
}
