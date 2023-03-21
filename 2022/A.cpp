#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    //freopen("input.txt", "r", stdin);
    int t, n, get, tmp, count = 0, cur;
    
    cin >> t;

    while(t--) {
        vector<int> mes;
        cin >> n;
        tmp = n;
        count = 0;
        mes.push_back(0);

        while(tmp--) {
            cin >> get;
            mes.push_back(get);
        }

        mes.push_back(1440);

        for (int i = 0; i <(n+1); i++) {
            cur = mes[i];
            while (cur + 120 <= mes[i+1]) {
                count++;
                cur += 120;
            }
        }
        
        if (count > 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }    
    
}