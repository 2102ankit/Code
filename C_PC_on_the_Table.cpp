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
    int h, w;
    cin >> h >> w;
    string sarr[h];
    for (int i = 0; i < h; i++)
    {
        cin >> sarr[i];
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w - 1; j++)
        {
            if (sarr[i][j] == 'T' && sarr[i][j + 1] == 'T')
            {
                sarr[i][j] = 'P';
                sarr[i][j + 1] = 'C';
                j++;
            }
        }
    }
    for (int i = 0; i < h; i++)
    {
        cout << sarr[i] << endl;
    }
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
