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
#define fr(i, n) for (int i = 0; i < n; i++)
#define rep(i, x, n) for (int i = x; i < n; i++)

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

// min max => try bin search

void solve()
{
    int n;
    cin >> n;
    vi a(n), x(n);
    priority_queue<pair<int, int>> pq; // val, idx
    set<int> st;                       // val
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        x[i] = a[i] + i + 1;
        pq.push(make_pair(x[i], i + 1));
    }
    // pair<int, int> p;
    while (pq.size() > 0)
    {
        cerr << pq.top().first << " " << pq.top().second << ", ";
        pq.pop();
    }
    cerr << nl;
    int last = -1, k = 0;
    while (k != n)
    {
        cerr << "--" << pq.size() << nl;
        pair<int, int> p = pq.top();
        pq.pop();
        cerr << p << nl;
        if (p.second >= last)
        {
            cerr << " adding " << p.first - k << nl;
            st.insert(p.first - k);
        }
        else
        {
            cerr << " adding " << p.first << nl;
            st.insert(p.first);
        }
        last = p.second;
        k++;
    }
    dbg(st);
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