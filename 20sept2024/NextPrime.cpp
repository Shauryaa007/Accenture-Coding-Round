#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Function to find the next prime number after n
int nextPrime(int n) {
    int candidate = n + 1;
    while (true) {
        if (isPrime(candidate))
            return candidate;
        candidate++;
    }
}

// Function to check if the second number is the next prime after the first
bool isNextPrime(int prime1, int prime2) {
    if (!isPrime(prime1) || !isPrime(prime2))
        return false;
    return nextPrime(prime1) == prime2;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (isNextPrime(num1, num2)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
