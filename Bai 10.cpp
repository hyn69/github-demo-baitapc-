//Bai 10
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x;
    cin >> x;
    int temp = x;
    n--;
    while (n--) {
        x *= temp;
    }
    cout << x;
    return 0;
}