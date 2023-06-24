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

bool cmp()
{
}

void solve()
{
    int n;
    cin >> n;
    vi arr(n);
    forr(n) cin >> arr[i];
    int ans = 0;

    // for (int s = 0; s < n - 2; s++)
    // {
    //     int ctr = 0;
    //     for (int i = s; i < n - 1;)
    //     { // search r to l
    //         int j = n;
    //         while (j != i && arr[--j] != arr[i])
    //             ;
    //         if (j != i)
    //         {
    //             ctr += j - i + 1;
    //             i = j + 1;
    //         }
    //         else
    //             i++;
    //     }
    //     ans = max(ans, ctr);
    // }

    vector<pair<int, int>> trio(200001);
    fill(trio.begin(), trio.end(), make_pair(-1, -1));
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        if (trio[x].first == -1)
            trio[x].first = i;
        if (i > trio[x].second)
            trio[x].second = i;
    }
    std::sort(trio.begin(), trio.end(), [](const std::pair<int, int> &left, const std::pair<int, int> &right)
              { return left.second - left.first > right.second - right.first; });

    // for (auto el : trio)
    // {
    //     cout << el.first << " " << el.second << nl;
    // }

    // cout << ans << nl;
    int s = INT_MAX, e = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if ((trio[i].first < s && trio[i].first < s) || (trio[i].first > e && trio[i].first > e))
        {
            if (trio[i].second - trio[i].first == 0)
                break;
            ans += trio[i].second - trio[i].first + 1;
            s = min(s, trio[i].first);
            e = max(e, trio[i].second);
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