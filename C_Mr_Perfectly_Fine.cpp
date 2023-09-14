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

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        int s;
        cin >> x >> s;
        if (s == 10)
            s = 2;
        else if (s == 11)
            s = 3;
        // v[i] = pair<x,s>;
        // dbg(x)
        //     dbg(s)
        v[i] = make_pair(x, s);
    }
    // dbg(v);
    sort(v.begin(), v.end(), cmp);
    // dbg(v);
    vector<pair<int, int>> ans;

    int t1 = 1, t2 = 2, t3 = 3;
    for (int i = 0; i < n; i++)
    {
        if (v[i].second == t1)
        {
            ans.pb(v[i]);
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i].second == t2)
        {
            ans.pb(v[i]);
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i].second == t3)
        {
            ans.pb(v[i]);
            break;
        }
    }
    // dbg(ans);
    int l = ans.size();
    if (l == 3)
    {
        cout << min(ans[2].first, ans[0].first + ans[1].first) << nl;
    }
    else if (l == 2 && ans[1].second == 3)
    {
        cout << ans[1].first << nl;
    }
    else if (l == 2 && ans[0].second == 1 && ans[1].second == 2)
    {
        cout << ans[0].first + ans[1].first << nl;
    }
    else if (l == 1 && ans[0].second == 3)
        cout << ans[0].first << nl;
    else
        cout << -1 << nl;
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