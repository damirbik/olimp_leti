#include<bits/stdc++.h>

using namespace std;

#define int long long

const int INF = 1e9 + 7;
const long double EPS = 1e-12;
const int hk = 31;

mt19937_64 rnd(chrono::steady_clock::now().time_since_epoch().count());

void solve() {
    /*int n, mx = 0;
    cin >> n;
    vector<int>vc(n);
    vector<bool>ch(3, 0);
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        ch[a % 3] = 1;
        mx = max(a, mx);
        vc[i] = a;
    }
    int ans = 0;
    if(ch[1]){
        ans++;
    }
    if(ch[2]){
        ans++;
    }
    ans += mx / 3;
    if(ch[1] && ch[2] && !(mx % 3)){
        ans--;
    }
    cout << ans << '\n';*/
    int n, l;
    cin >> n >> l;
    vector<double>vc(n);
    for (int i = 0; i < n; ++i) {
        double a;
        cin >> a;
        vc[i] = a;
    }
    sort(vc.begin(), vc.end());
    double mn = max(vc[0], l - vc[n - 1]);
    for (int i = 1; i < n; ++i) {
        mn = max((vc[i] - vc[i - 1]) / 2, mn);
    }
    cout << fixed << setprecision(10) << mn << '\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}