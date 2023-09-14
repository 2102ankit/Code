#include <bits/stdc++.h>
#include "debugging.h"

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

void dfs(int s, vector<vector<int>> &a, vector<int> &visited)
{
    visited[s] = 1;
    cout << s << " ->";
    for (auto child : a[s])
    {
        if (!visited[child])
            dfs(child, a, visited);
    }
}

// min max => try bin search
// vi dp(1e5, 0);
vector<vector<int>> adj;
vector<int> value;

int leafcnt(int from, int at)
{
    ll cnt = 0;
    for (auto child : adj[at])
    {
        if (child != from)
        {
            cnt += leafcnt(at, child);
        }
    }
    if (cnt == 0 && adj[at].size() == 1)
    {
        cnt++;
    }
    value[at] = cnt;
    return cnt;
}

void solve()
{
    int n, q;
    cin >> n;
    adj.resize(n + 1);
    value.resize(n + 1, 0);
    forr(n - 1)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // dbg(adj);
    leafcnt(1, 1);
    // dbg(value);
    cin >> q;
    forr(q)
    {
        int x, y;
        cin >> x >> y;
        cout << ((long long)value[x] * (long long)value[y]) << nl;
    }
    adj.clear();
    value.clear();
}

int main()
{
    fastio();
    int tc = 1;
    cin >> tc;

    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
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