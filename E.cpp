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

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    ll s_a = 0, s_b = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        s_a += a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
        s_b += b[i];
    }
    ll ans = (s_b + k) / s_a, x;
    ll r = ans, l = 0;
    while (r - l > 1) {
        x = k;
        for (int i = 0; i < n; ++i) {
            if (ans * a[i] > b[i]) {
                x -= ans * a[i] - b[i];
            }
        }
        if (x >= 0) {
            l = ans;
            ans = (r + l) / 2;
        } else {
            r = ans;
            ans = (r + l) / 2;
        }
    }
    x = k;
    for (int i = 0; i < n; ++i) {
        if (r * a[i] > b[i]) {
            x -= r * a[i] - b[i];
        }
    }
    if (x >= 0) {
        cout << r;
    } else {
        cout << l;
    }
    return 0;
}