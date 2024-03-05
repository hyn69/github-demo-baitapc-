//Bai 7
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    double m = 0;
    for (int i = 1; i <= n; i++) {
        m += (i)/(i+1.0);
    }
    if (n >= 1) {
        cout << m;
    } else {
        cout << "No value";
    }
    return 0;
}