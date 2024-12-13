#include<bits/stdc++.h>
const int mod = 1000000007; 
const int N = 1e5+10; 
using namespace std;
typedef pair<int,int>pii;
#define endl "\n"
#define yes cout<<"YES\n"
#define no  cout<<"NO\n"
#define forn(i,x, n) for (int i = x; i < int(n); i++)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define stin(a) string a; cin>>a
#define sz(a) (int)(a.size())
#define fin(a) for (auto &x : a) cin>>x
#define fout(a) for (auto &x : a) cout<<x<<" "; cout<<endl;
#define ll long long int
ll powm(ll x, ll n) {
    x %= mod;
    if (n == 0)
        return 1;
    else if (n == 1)
        return x%mod;
    int p = powm(x * x%mod, n / 2);
    if (n % 2)
        return p * x % mod;
    else
        return p;
}
void solve()
{
    int n; cin>>n;
    vector<int>v1(n),v2(n); fin(v1); fin(v2);
    int minim = min_element(v1.begin(),v1.end()) - v1.begin();
    int sec = v2[minim];
    int x = v1[minim];
    ll ans=INT_MAX;
    while(x>=0)
    {
        ll count=0;
        bool ok=true;
        for(int i=0;i<n;i++)
        {
           if(v1[i]==x) continue;
           else{
                 if(v1[i]<v2[i]||(v1[i]-x)%v2[i]!=0)
                 {
                    ok=false;
                     break;
                 }
                 else
                 {
                    count+=((v1[i]-x)/v2[i]);
                 }
           }
        }
        if(ok) {
            ans=min(ans,count);
        }
        if(x==0||sec==0) break;
        x-=sec;
    }
    cout << (ans == INT_MAX ? -1 : ans) << endl;
}
int32_t main()
{
   ios_base::sync_with_stdio (0);
   cin.tie (0);
   cout.tie (0);
   //int t; cin>>t; while(t--)
   solve();
}