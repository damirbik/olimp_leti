#include <bits/stdc++.h>

#pragma GCC optimize("Ofast,unroll-loops,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2")

using namespace std;
typedef long long ll;
typedef long double ld;

int main() {
#ifdef LOCAL
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, x;
    char tt;
    cin >> n;
    vector<int> call(2 * n);
    vector<int> ans(n);
    int ind = n - 1;
    for (int i = 2 * n - 1; i >= 0; --i) {
        cin >> tt;
        if (tt == '+') {
            call[i] = 0;
        } else {
            cin >> x;
            call[i] = x;
        }
    }
    stack<int> q;
    for (int i = 0; i < 2 * n; ++i) {
        x = call[i];
        if (x == 0) {
            if (q.empty()) {
                cout << "NO";
                return 0;
            } else {
                ans[ind] = q.top();
                q.pop();
                --ind;
            }
        } else {
            if (!q.empty() && x > q.top()) {
                cout << "NO";
                return 0;
            }
            q.push(x);
        }
    }
    cout << "YES" << "\n";
    for (int i : ans) {
        cout << i << " ";
    }
    return 0;
}