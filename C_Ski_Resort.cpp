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
    int n, q, k;
    cin >> n >> k >> q;
    vi A(n);
    forr(n) cin >> A[i];
    ll ans = 0;
    int j = -1;
    forr(n)
    {
        if (A[i] > q)
            j = i;
        ans += max(0, i - j - k + 1);
    }
    cout << ans << nl;
}

// void solve()
// {
//     ll n, k, q;
//     cin >> n >> k >> q;
//     vi arr(n + 1);
//     for (int i = 0; i < n; i++)
//     {
//         ll x;
//         cin >> x;
//         if (x > q)
//         {
//             arr[i] = 0;
//         }
//         else
//             arr[i] = 1;
//     }
//     // array has been made; now in a vector store the l's of continuous one's
//     vi vec;
//     for (int i = 0; i < n;)
//     {
//         int ctr = 0;
//         while (i < n)
//         {
//             if (arr[i++] == 1)
//                 ctr++;
//             else
//                 break;
//         }
//         if (ctr >= k)
//         {
//             vec.push_back(ctr);
//         }
//     }
//     ll ans = 0;
//     for (auto l : vec)
//     {
//         // ans += ncr(el - k + 2, el - k);
//         ans += (l - k + 2) * (l - k + 1)/2;
//     }
//     cout << ans << nl;
// }

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