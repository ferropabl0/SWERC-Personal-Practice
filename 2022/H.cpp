#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    //freopen("input.txt", "r", stdin);
    int t, n, tmp, get, i, found;
    
    cin >> t;

    while (t--) {
        cin >> n;
        tmp = n;
        i = 1;
        vector<int> first_pos, sec;
        first_pos.resize(n+1);
        found = 0;

        while (tmp--) {
            cin >> get;
            first_pos[get] = i;
            i++;
        }
        tmp = n;

        while (tmp--) {
            cin >> get;
            sec.push_back(get);
        }

        for (int j = n-1; j > 0; j--) {
            if (!found) {
                if (first_pos[sec[j]] < first_pos[sec[j-1]]) {
                    cout << j << endl;
                    found = 1;
                }
            }
        }
        if (!found) cout << 0 << endl;
    }
}