//Bai9
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    long long m = 1;
    for (int i = 1; i <= n; i++) {
        m *= i;
    }
    if (n >= 1) {
        cout << m;
    } else {
        cout << "No value";
    }
    return 0;
}