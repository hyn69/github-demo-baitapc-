//Bai3
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    double m = 1;
    for (double i = 2; i <= n; i++) {
        m += 1.0/i;
    }
    cout << m;
    return 0;
}