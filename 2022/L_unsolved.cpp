#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q, a, b, p = 0, m = 0;
    char get;
    cin >> n;
    while(n--) {
        cin >> get;
        if (get == '+') p++;
        else m++;
    }
    cin >> q;
    while(q--) {
        cin >> a >> b;
        if (a == b) {
            if (p == m) cout << "YES" << endl;
            else cout << "NO" << endl;
        } else {
            long long upper_bound = (long long)p * a - (long long)m * b;
            long long lower_bound = (long long)m * a - (long long)p * b;
            if ((upper_bound >= 0) && (lower_bound <= 0) && ((upper_bound - lower_bound) % (a - b) == 0)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}
