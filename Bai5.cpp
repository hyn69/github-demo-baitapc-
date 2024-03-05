//Bai5
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    double m = 0;
    for (double i = 1; i <= n; i++) {
        m += 1.0/(2.0*i+1.0);
    }
    if (n > 1) {
        cout << m;
    } else if (n==1) {
        cout << "No value";
    }
    return 0;
}