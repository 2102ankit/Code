#include <bits/stdc++.h>
// #include "debugging.h"
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<ll> vi;
typedef vector<pll> vpll;
typedef unordered_map<ll, ll> umap;
#define F first
#define S second
#define pb push_back
#define ar array
#define ll long long
#define ld long double
#define sz(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define endl "\n"
#define forr(n) for (int i = 0; i < n; i++)

#define dbg(v) \
    cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

#define nl "\n";

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve()
{
    int n;
    cin >> n;
    int a[n], b[n];
    forr(n) cin >> a[i];
    forr(n) cin >> b[i];

    umap ma, mb;
    for (int i = 0; i < n;)
    {
        ll curr = a[i];
        ll ctr = 1;
        while (++i < n)
        {
            if (a[i] == curr)
                ctr++;
            else
                break;
        }

        ma[curr] = max(ma[curr], ctr);
    }
    // for (auto el : ma)
    // {
    //     cout << "[" << el.first << " " << el.second <<"]" << nl;
    // }

    for (int i = 0; i < n;)
    {
        ll curr = b[i];
        ll ctr = 1;
        while (++i < n)
        {
            if (b[i] == curr)
                ctr++;
            else
                break;
        }
        mb[curr] = max(mb[curr], ctr);
    }

    // for (auto el : mb)
    // {
    //     cout << "[" << el.first << " " << el.second <<"]" << nl;
    // }

    ll ans = 0;

    for (auto el : a)
    {
        ans = max(ans, ma[el] + mb[el]);
        // cout <<"[ans = " << ans << "]" << nl;
    }
    for (auto el : b)
    {
        ans = max(ans, ma[el] + mb[el]);
        // cout <<"[ans = " << ans << "]" << nl;
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;

    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}