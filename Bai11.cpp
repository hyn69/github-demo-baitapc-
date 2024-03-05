//Bai 11
#include <iostream>
using namespace std;
int tong(int n) {
    int sum = 1;
    for (int i = 1; i <= n; i++) {
        sum *= i;
    }
    return sum;
}
int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += tong(i);
    }
    if (n >= 1) 
        cout << sum;
    else 
        cout << "No value";
    return 0;
}