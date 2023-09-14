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

// min max => try bin search

void solve()
{
    int n, k;
    cin >> n >> k;
    vi a(n);
    forr(n) cin >> a[i];
    sort(all(a));
    // dbg(a);
    // while (k--)
    // {
    //     if (a.back() <= a[0] + a[1])
    //     {
    //         a.pop_back();
    //     }
    //     else
    //         a.erase(a.begin(), a.begin() + 2);
    //     dbg(a);
    // }
    // ll s = 0;
    // forr(a.size()) s += a[i];
    // cout << s << nl;

    // prefix sum
    dbg(a)
    forr(n-1) a[i+1] = a[i+1] + a[i];
    dbg(a)

    // lets say m out of k times min were removed
    // 2m minimums removed & k-m maximums remved
    // sum will be from position 2m + 1 to n - (k-m)
    ll ans = 0;
    for(int i=0; i<k; i++){
        dbg(a[n-(k-i)])
        dbg(a[2*i])
        ans = max(ans, a[n-(k-i)] - a[2*i] );
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