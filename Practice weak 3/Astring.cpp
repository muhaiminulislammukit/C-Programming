#include <bits/stdc++.h>
using namespace std;

int main() {

    string A, B;

    cin >> A;
    cin >> B;

    // 1. Size of strings
    cout << A.size() << " " << B.size() << endl;

    // 2. Concatenate
    cout << A + B << endl;

    // 3. Swap first character
    char temp = A[0];
    A[0] = B[0];
    B[0] = temp;

    cout << A << " " << B << endl;

    return 0;
}