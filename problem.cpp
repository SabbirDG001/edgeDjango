#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define debug(x) cout << #x << " " << x << endl
#define sze(a) (int)(a.size())
#define srt(v) sort((v).begin(), (v).end())
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define sz(a) (int)(a.size())
#define stlin(a)      \
    for (auto &x : a) \
    cin >> x
#define stlout(a)         \
    for (auto &x : a)     \
        cout << x << " "; \
    cout << endl;
#define ll long long int
const double pi = 3.14159265358979323846;

void solve()
{
    int n; cin >> n;
    vector<bool>v(1000000,false);
    int ans = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v[x] = true;
        while(v[ans] != false){
            ans++;
        }
        cout << ans << " ";
    }
    cout << endl;
}

int32_t main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t;cin >> t;while (t--)
    solve();
}