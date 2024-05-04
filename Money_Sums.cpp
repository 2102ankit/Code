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
#define fr(i, n) for (int i = 0; i < n; i++)
#define rep(i, x, n) for (int i = x; i < n; i++)

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

// min max => try bin search

void f(int i, vi &a, vi &b, int sum)
{
    if (i < 0)
    {
        if (sum != 0)
            b.push_back(sum);
        return;
    }

    f(i - 1, a, b, sum + a[i]);
    f(i - 1, a, b, sum);
}

// dp[i] = no. of sums that can be obtained from 1 to i coins
// dp[n] = final ans
// dp[1] = a[0];
// dp[0] = 0;
// dp[i] = dp[i-1]

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    int sum = 0;
    forr(n)
    {
        cin >> a[i];
        sum += a[i];
    }
    vi dp(sum + 1, 0);
    dp[0] = 1;

    forr(n)
    {
        for (int val = sum; val >= a[i]; val--)
        {
            dp[val] = dp[val] || dp[val - a[i]];
        }
    }
    vi b;
    // dbg(dp);
    for (int i = 1; i < sum + 1; i++)
    {
        if (dp[i] != 0)
            b.push_back(i);
    }
    cout << b.size() << nl;
    for (auto bb : b)
        cout << bb << " ";
    cout << nl;
}

int main()
{
    fastio();
    int tc = 1;
    // cin >> tc;

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