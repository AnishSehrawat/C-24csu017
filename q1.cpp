#include <iostream>
using namespace std;

int main() {
    int n;

    // Take input from the user
    cout << "Enter a positive integer: ";
    cin >> n;

    // Check if the number is prime
    bool isPrime = true;
    
    if (n <= 1) {
        isPrime = false; // Numbers less than or equal to 1 are not prime
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = false; // Found a divisor, so not prime
                break;
            }
        }
    }

    // If the number is prime
    if (isPrime) {
        cout << n << " is a prime number." << endl;
        
        // Find the next prime number
        int next = n + 1;
        while (true) {
            bool isNextPrime = true;
            for (int i = 2; i <= next / 2; i++) {
                if (next % i == 0) {
                    isNextPrime = false; // Not prime
                    break;
                }
            }
            if (isNextPrime) {
                cout << "The next prime number greater than " << n << " is " << next << "." << endl;
                break;
            }
            next++; // Check the next number
        }
    } else {
        cout << n << " is not a prime number." << endl;
        
        // Find and print all factors of n
        cout << "Factors of " << n << " are: ";
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                cout << i << " "; // Print the factor
            }
        }
        cout << endl;
    }

    return 0;
}