#include <bits/stdc++.h>
// #include "debugging.h"

using namespace std;

#define dbg(v) \
    cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<ll> vi;
typedef vector<pll> vpll;
typedef unordered_map<ll, ll> umap;
#define ff first
#define ss second
#define pb push_back
#define set_bits(x) __builtin_popcountll(x)
#define sz(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define nl "\n"
#define forr(n) for (int i = 0; i < n; i++)
#define loop(i, n) for (int i = 0; i < n; i++)
#define rep(i, x, n) for (int i = x; i < n; i++)

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

// min max => try bin search
// 1 2 0
// 3 4 0
// 0 0 5

int fun(int x, int y, int m, int n, vector<vector<int>> &a, vector<vector<int>> &v)
{

    // cerr << "\nfun {";
    // dbg(x);
    // dbg(y);
    // dbg(v[x][y]);
    // dbg(a[x][y]);
    //  if visited
    if (v[x][y] == 1 || a[x][y] == 0)
        return 0;

    int opl = 0, opr = 0, opd = 0, opu = 0;

    v[x][y] = 1;

    int newx, newy;

    // LEFT
    newx = x - 1;
    newy = y;
    if (newx >= 0 && newy >= 0 && newx < n && newy < m && v[newx][newy] != 1 && a[newx][newy] != 0)
    {
        opl = fun(newx, newy, m, n, a, v);
    }

    // RIGHT
    newx = x + 1;
    newy = y;
    if (newx >= 0 && newy >= 0 && newx < n && newy < m && v[newx][newy] != 1 && a[newx][newy] != 0)
    {
        opr = fun(newx, newy, m, n, a, v);
    }

    // UP
    newx = x;
    newy = y - 1;
    if (newx >= 0 && newy >= 0 && newx < n && newy < m && v[newx][newy] != 1 && a[newx][newy] != 0)
    {
        opu = fun(newx, newy, m, n, a, v);
    }

    // DOWN
    newx = x;
    newy = y + 1;
    if (newx >= 0 && newy >= 0 && newx < n && newy < m && v[newx][newy] != 1 && a[newx][newy] != 0)
    {
        opd = fun(newx, newy, m, n, a, v);
    }
    // //dbg(a[x][y]);
    // dbg(opl);
    // dbg(opr);
    // dbg(opu);
    // dbg(opd);
    // cerr << "}\n";
    return a[x][y] + opl + opr + opu + opd;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m, 0));
    vector<vector<int>> v(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // dbg(i);
            // dbg(j);
            // dbg(v[j][i]);
            if (v[i][j] == 0)
                ans = max(ans, fun(i, j, m, n, a, v));
        }
    }
    cout << ans << nl;
}

int main()
{
    fastio();
    int tc = 1;
    cin >> tc;

    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        // cerr << nl;
        solve();
    }
}

/***
 * If n ≤ 12, the time complexity can be O(n!).
 * If n ≤ 25, the time complexity can be O(2^n).
 * If n ≤ 100, the time complexity can be O(n^4).
 * If n ≤ 500, the time complexity can be O(n^3).
 * If n ≤ 10^4, the time complexity can be O(n^2).
 * If n ≤ 10^6, the time complexity can be O(n log n).
 * If n ≤ 10^8, the time complexity can be O(n).
 * If n > 10^8, the time complexity can be O(log n) or O(1)
 ***/