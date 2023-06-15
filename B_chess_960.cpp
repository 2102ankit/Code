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

#ifdef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x) ;
#endif

void solve()
{
    string s;
    cin >> s;
    int b1 = -1, b2 = -1, r1 = -1, r2 = -1, k = -1;
    for (int i = 0; i < s.size(); i++)
    {
        char d = s[i];
        // cout << "d = " << d << nl;
        if (d == 'B')
        {
            if (b1 == -1)
                b1 = i;
            else
                b2 = i;
        }
        else if (d == 'R')
        {
            if (r1 == -1)
                r1 = i;
            else
                r2 = i;
        }
        else if (d == 'K')
            k = i;
    }
    // cout << "b1 = " << b1 << " b2 = " << b2 << " r1 = " << r1 << " r2 = " << r2 << " k = " << k << nl;
    b1++;
    b2++;
    int c1 = (r1 < k && k < r2);
    int c2 = b1 % 2 != b2 % 2;
    if (c1 && c2)
        cout << "Yes";
    else
        cout << "No";
}

int main()
{
    fastio();
#ifdef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif
    int tc = 1;
    // cin >> tc;

    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}
