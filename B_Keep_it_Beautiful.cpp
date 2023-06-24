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
#define nl "\n"
#define forr(n) for (int i = 0; i < n; i++)

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

#define dbg(v) \
    ;          \
    cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

void solve()
{
    int n;
    cin >> n;
    // back is vectpr.back(); a0 = a[0]; ai = a[i]
    int back = -1, uptrend = 0, a0 = -1;
    int ai;
    for (int i = 0; i < n; i++)
    {
        cin >> ai;
        if (i == 0)
        {
            cout << "1";
            a0 = back = ai;
        }
        else if (uptrend)
        {
            if (ai >= back and ai <= a0)
            {
                cout << "1";
                back = ai;
            }
            else
                cout << "0";
        }
        else if (ai >= back)
        {
            cout << "1";
            back = ai;
        }
        else if (ai <= a0)
        {
            cout << "1";
            uptrend = 1;
            back = ai;
        }
        else
            cout << "0";
    }
    cout << nl;
}

int main()
{
    fastio();
#ifdef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif
    int tc = 1;
    cin >> tc;

    for (int t = 1; t <= tc; t++)
    {
        // cerr << "Case #" << t << ": ";
        solve();
        // cerr << nl;
    }
}
