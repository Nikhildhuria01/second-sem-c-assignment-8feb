#include <iostream>
using namespace std;

bool isP(string s) {
    int l = 0, r = s.length() - 1;
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++; r--;
    }
    return true;
}

int main() {
    string s;
    cout << "Enter s: ";
    getline(cin, s);

    if (isP(s)) cout << "Palindrome." << endl;
    else cout << "Not palindrome." << endl;

    return 0;
}
