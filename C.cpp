#include <bits/stdc++.h>

#pragma GCC optimize("Ofast,unroll-loops,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2")

using namespace std;
typedef long long ll;
typedef long double ld;

ll solve() {
    ll n, mx = 0, ans;
    cin >> n;
    vector<ll> a(n);
    vector<ll> ost(3, 0);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        ost[a[i] % 3]++;
        mx = max(mx, a[i]);
    }
    if (ost[1] > 0 && ost[2] > 0) {
        if (mx % 3 == 1) {
            // проверка, что все собираются с t * 3 + 2 + 1 или (t - 1) * 3 + 2 + 2
            for (int i = 0; i < n; ++i) {
                if (a[i] == 1 || a[i] == mx - 1) {
                    return mx / 3 + 2;
                }
            }
            return mx / 3 + 1;
        }
        if (mx % 3 == 0) {
            return mx / 3 + 1;
        }
        return mx / 3 + 2;
    }
    if (ost[1] > 0 || ost[2] > 0) {
        return mx / 3 + 1;
    }
    return mx / 3;
}

int main() {
#ifdef LOCAL
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll tt;
    cin >> tt;
    while (tt--) {
        cout << solve() << "\n";
    }
    return 0;
}