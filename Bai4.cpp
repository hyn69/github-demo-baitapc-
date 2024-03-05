//Bai4
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    double sum = 1/2;
    for (double i = 2; i <= n; i++) {
        sum += 1.0/(2*i);
    }
    if (n >= 2) {
        cout << sum;
    } else {
        cout << "No value";
    }
    return 0;
}