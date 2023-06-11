#include <bits/stdc++.h>

using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
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

    int n;
    cin >> n;
    vector<string> vv;
    vv.push_back("0");
    vv.push_back("1");
    // vv.pb("1");
    // cout << "vv size = " << vv.size() << endl;
    // forr(vv.size()) cout << "--" << vv[i] << "\n";

    while (n-- > 1)
    {
        // cout << "n = " << n << endl;
        // forr(vv.size()) cout << vv[i] << "\n";
        int x = vv.size();
        // cout << "vv size = " << vv.size() << endl;
        for (int i = x - 1; i >= 0; i--)
        {
            // vv.pb(vv[i]);
            // cout << "pb " << vv[i] << endl;
            vv.push_back(vv[i]);
        }
        // cout << "inter --\n";
        // forr(vv.size()) cout << vv[i] << "\n";
        // cout << "-- inter\n";
        int x2 = vv.size() / 2;
        for (int i = 0; i < x2; i++)
        {
            vv[i] += "0";
            vv[x2 + i] += "1";
        }
    }
    forr(vv.size()) cout << vv[i] << "\n";
}

int main()
{
    // // fastio();
    // #ifdef ONLINE_JUDGE
    //     freopen("error.txt", "w", stderr);
    // #endif
    int tc = 1;
    // cin >> tc;

    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}
