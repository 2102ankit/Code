#include <bits/stdc++.h>

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

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve()
{
    ll n, x, s1 = 0, s2 = 0;
    cin >> n;
    x = n;
    ll sum = n * (n + 1) / 2;
    sum = sum / 2;
    ll ans = 0;
    vi v1, v2;
    while (x != 0)
    {
        // cout << "x = " << x << endl;
        // cout << "ans + x = " << ans + x << endl;
        if (ans + x <= sum)
        {

            ans = ans + x;
            v1.pb(x);
            s1 += x;
        }
        else
        {
            v2.pb(x);
            s2 += x;
        }
        // cout << "s1 = " << s1 << " s2 = " << s2 << endl;
        x--;
    }
    if (s1 != s2)
    {
        cout << "NO";
        return;
    }
    cout << "YES" << endl;
    cout << v1.size() << endl;
    forr(v1.size()) cout << v1[i] << " ";
    cout << endl;
    cout << v2.size() << endl;
    forr(v2.size()) cout << v2[i] << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin >> tc;

    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}
