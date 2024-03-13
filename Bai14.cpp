#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, x;
    cout << "Input n: ";
    cin >> n;
    cout << "Input x: ";
    cin >> x;
    int sum = 0;
    for (int i = 1; i <= (2*n+1); i+=2) {
        sum += pow(x, i);
    }
    cout << sum << endl;
    return 0;
}