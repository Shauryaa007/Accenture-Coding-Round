// sieve of eratosthenes

#include <iostream>
#include <vector>

using namespace std;

void sieve_of_eratosthenes(int n) {
    
    // Create a boolean array and initialize all entries as true
    
    vector<bool> primes(n + 1, true);
    primes[0] = primes[1] = false; // 0 and 1 are not prime numbers

    // Start with the first prime number, which is 2
    
    for (int p = 2; p * p <= n; ++p) {
        // If primes[p] is still true, then it is a prime number
        if (primes[p]) {
            // Mark all multiples of p as false (not prime)
            
            for (int i = p * p; i <= n; i += p) {
                primes[i] = false;
            }
        }
    }

    // Print all prime numbers
    for (int p = 2; p <= n; ++p) {
        if (primes[p]) {
            cout << p << " ";
        }
    }
}

int main() {
    int n;
    cin >> n;
    sieve_of_eratosthenes(n);
    return 0;
}
