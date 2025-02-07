#include <iostream>
#include <cmath>

using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
       return false;
        }
    }
    return true;
}
void findFactors(int n) {
    cout << "Factors of " << n << " are: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
        cout << i << " ";
  }
  }
    cout << endl;
}
int nextPrime(int n) {
    int next = n + 1;
    while (!isPrime(next)) {
        next++;}
    return next;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (isPrime(n)) {
        cout << n << " is a prime number." << endl;
        cout << "The next prime number greater than " << n << " is " << nextPrime(n) << "." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
        findFactors(n);
    }

    return 0;
}
