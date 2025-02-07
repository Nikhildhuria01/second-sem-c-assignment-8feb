#include <iostream>
using namespace std;

void pS(int n) {
    int m[n][n], v = 1, mr = 0, mxr = n - 1, mc = 0, mxc = n - 1;

    while (v <= n * n) {
        for (int i = mc; i <= mxc; i++) m[mr][i] = v++;
        mr++;
        for (int i = mr; i <= mxr; i++) m[i][mxc] = v++;
        mxc--;
        for (int i = mxc; i >= mc; i--) m[mxr][i] = v++;
        mxr--;
        for (int i = mxr; i >= mr; i--) m[i][mc] = v++;
        mc++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << m[i][j] << "\t";
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    pS(n);
    return 0;
}
