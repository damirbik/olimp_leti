#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    int n, q;
    cin >> n >> q;
    int r1 = 0, pr = 0;
    bool ch = 0;
    for(int i = 1; i < n; i++){
        cout << i << ' ' << i + 1 << '\n';
    }
    while(q--){
        int m;
        ch = 1;
        cin >> m;
        if(m == r1){
            cout << -1 << ' ' << -1 << ' ' << -1 << '\n';
        }
        else{
            cout << n << ' ';
            if(pr == 0){
                cout << n - 1 << ' ';
            }
            else{
                cout << pr << ' ';
            }
            cout << m << '\n';
        }
        pr = m;
        r1 = m;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}}