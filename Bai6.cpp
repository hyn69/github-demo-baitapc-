//Bai6
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        double m = (i*(i+1.0));
        sum += (1.0 / m);
    }
    if (n >= 1) {
        cout << sum;
    }  else {
        cout << "No value";
    }
    return 0;
}