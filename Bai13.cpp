//Bai 13
#include <iostream>
using namespace std;
int tong(int x, int n) {
    n--;
    int temp = x;
    int sum = 1;
    while (n--) {
        sum = sum * temp * temp;
    }
    return sum;
}
int main() {
    int n;
    cin >> n;
    int x;
    cin >> x;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += tong(x, i);
    }
    cout << sum;
    return 0;
}