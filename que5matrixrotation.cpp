#include <iostream>
using namespace std;

void rM(int m[][3], int n) {
    for (int i = 0; i < n / 2; i++) {
        for (int j = i; j < n - 1 - i; j++) {
            int t = m[i][j];
            m[i][j] = m[n - 1 - j][i];
            m[n - 1 - j][i] = m[n - 1 - i][n - 1 - j];
            m[n - 1 - i][n - 1 - j] = m[j][n - 1 - i];
            m[j][n - 1 - i] = t;
        }
    }
}

void pM(int m[][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << m[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = 3;

    cout << "Original:" << endl;
    pM(m, n);

    rM(m, n);

    cout << "Rotated:" << endl;
    pM(m, n);

    return 0;
}
