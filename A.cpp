#include <bits/stdc++.h>

#pragma GCC optimize("Ofast,unroll-loops,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2")

using namespace std;
typedef long long ll;
typedef long double ld;

ll solve() {
    ll n, s, k, i, x;
    cin >> n >> s >> k;
    multiset<ll> q;
    for (int j = 0; j < k; ++j) {
        cin >> i;
        q.insert(abs(s - i));
    }
    i = 0;
    if (!q.empty()) {
        x = *q.begin();
        q.erase(q.begin());
        if (i < x) return i;
    }
    while (true) {
        ++i;
        if (i <= min(s - 1, n - s)) {
            if (!q.empty()) {
                x = *q.begin();
                q.erase(q.begin());
                if (i < x) return i;
            } else {
                return i;
            }
            if (!q.empty()) {
                x = *q.begin();
                q.erase(q.begin());
                if (i < x) return i;
            } else {
                return i;
            }
        } else {
            if (!q.empty()) {
                x = *q.begin();
                q.erase(q.begin());
                if (i < x) return i;
            } else {
                return i;
            }
        }
    }
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