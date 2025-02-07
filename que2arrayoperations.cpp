#include <iostream>
using namespace std;

void rev(int a[], int s) {
    for (int i = 0; i < s 
}

void sLS(int a[], int s) {
    int f = a[0], sc = a[0];
    for (int i = 0; i < s; i++) {
        if (a[i] > f) { sc = f; f = a[i]; }
        else if (a[i] > sc && a[i] != f) sc = a[i];
    }
    cout << "2nd large: " << sc << endl;

    f = a[0], sc = a[0];
    for (int i = 0; i < s; i++) {
        if (a[i] < f) { sc = f; f = a[i]; }
        else if (a[i] < sc && a[i] != f) sc = a[i];
    }
    cout << "2nd small: " << sc << endl;
}

int main() {
    int s;
    cout << "Enter size: ";
    cin >> s;

    int a[s];
    cout << "Enter elems: ";
    for (int i = 0; i < s; i++) cin >> a[i];

    rev(a, s);
    cout << "Rev: ";
    for (int i = 0; i < s; i++) cout << a[i] << " ";
    cout << endl;

    sLS(a, s);

    return 0;
}
