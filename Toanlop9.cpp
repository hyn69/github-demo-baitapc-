#include <iostream>
#include <vector>
using namespace std;
long long count[1000006] = {0};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long a[1000006];
        cin >> n;
        vector<int> temp;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            int t1 = a[i];
            while (t1 != 0) {
                int tempnumber = t1 % 10;
                count[tempnumber]++;
                if (count[tempnumber] == 1) {
                    temp.push_back(tempnumber);
                }
                t1 /= 10;
            }
        }
        int sizetemp = temp.size();
        for (int i = 0; i < sizetemp; i++) {
            cout << temp[i] << ' ';
        
        }
        count[1000006] = {0};
    }
    return 0;
}