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

void solve()
{
    int q;
    cin >> q;
    vi v;
    int n = q;
    while (n--)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }

    int i = 0;
    ll prev = 0;
    for (i; i < q; i++)
    {
        if (v[i] >= prev)
        {
            cout << "1";
            prev = v[i];
        }
        else
        {
            break;
        }
    }
    if (i == q)
    {
        cout << endl;
        return;
    }

    if (v[i] <= prev && v[i] <= v[0])
    {
        cout << "1";
        prev = v[i];
    }
    else
        cout << "0";
    i++;

    for (i; i < q; i++)
    {
        if (v[i] >= prev && v[i] <= v[0])
        {
            cout << "1";
            prev = v[i];
        }
        else
            cout << "0";
    }
    cout << endl;
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
        // cout << "Case #" << t << ": ";
        solve();
    }
}
