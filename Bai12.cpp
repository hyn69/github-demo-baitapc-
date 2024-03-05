//Bai 12
#include <iostream>
using namespace std;
int tong(int n, int x) {
    n--;
    int m;
    while (n--) {
        x *= x;
    }
    m = x;
    return m;
}
int main() {
    int x, n;
    cin >> x >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += tong(i, x);
    }
    cout << sum;
    return 0;
}