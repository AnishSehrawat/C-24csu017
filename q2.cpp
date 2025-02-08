#include <iostream>
using namespace std;

int main() {
    int size;

    // Accept the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];  // Declare the array with the given size

    // Accept array elements from the user
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Reverse the array and display it
    cout << "Reversed array: ";
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Find and display the second largest and second smallest elements
    if (size < 2) {
        cout << "Array should have at least two elements to find second largest and second smallest." << endl;
    } else {
        int largest = arr[0], secondLargest = arr[0];
        int smallest = arr[0], secondSmallest = arr[0];

        // Loop through the array to find second largest and second smallest
        for (int i = 1; i < size; i++) {
            if (arr[i] > largest) {
                secondLargest = largest;
                largest = arr[i];
            } else if (arr[i] > secondLargest) {
                secondLargest = arr[i];
            }

            if (arr[i] < smallest) {
                secondSmallest = smallest;
                smallest = arr[i];
            } else if (arr[i] < secondSmallest) {
                secondSmallest = arr[i];
            }
        }

        // Display the second largest and second smallest
        cout << "Second largest element: " << secondLargest << endl;
        cout << "Second smallest element: " << secondSmallest << endl;
    }

    return 0;
}