#include <iostream>
using namespace std;

class Array {
private:
    int *arr;
    int size;

public:
    // Constructor: Allocates memory for the array and initializes size
    Array(int s = 100) {
        size = s;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = 0; // Optional: Initialize elements to 0
        }
        cout << "Memory allocated for array of size " << size << "." << endl;
    }

    // Destructor: Automatically frees the allocated memory
    ~Array() {
        delete[] arr;
        cout << "Memory successfully freed." << endl;
    }

    // Method to set a value at a specific index
    void setValue(int index, int value) {
        if (index >= 0 && index < size) {
            arr[index] = value;
        } else {
            cout << "Index out of bounds!" << endl;
        }
    }

    // Method to get a value at a specific index
    int getValue(int index) {
        if (index >= 0 && index < size) {
            return arr[index];
        }
        return -1; // Return error value
    }
};

int main() {
    // Create an Array object (calls constructor)
    Array myArr(5);

    // Set some values
    myArr.setValue(0, 10);
    myArr.setValue(1, 20);

    // Display values
    cout << "Value at index 0: " << myArr.getValue(0) << endl;
    cout << "Value at index 1: " << myArr.getValue(1) << endl;

    // Destructor is called automatically when myArr goes out of scope
    return 0;
}
