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

void solve()
{
    int n, x;
    cin >> n >> x;
    vi v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        // dbg(v[i]);
    }

    // dbg("-----------");
    // ll dp[n + 1][x + 1];
    vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));
    // dbg(dp);
    // dbg("-----------");
    for (int i = 1; i <= n; i++)
    {
        for (int sum = 0; sum <= x; sum++)
        {
            if (sum == 0)
                dp[i][sum] = 1;
            else
            {
                ll op1 = (v[i] > sum) ? 0 : dp[i][sum - v[i]];
                ll op2 = (i == 1) ? 0 : dp[i - 1][sum];
                dp[i][sum] = (op1 + op2) % MOD;
                // dbg(dp[i][sum]);
            }
        }
    }

    cout << dp[n][x];
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