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
int giveidx(string &s, int target, int start, int end)
{ // dbg(target)
    char c = '0' + (target);
    // dbg(c);
    int i;
    // dbg(start);
    // dbg(end);
    for (i = start; i < end; i++)
    {
        // dbg(i);
        // dbg(s[i]);
        // dbg(c);
        if (s[i] == c)
        {
            // dbg("ifff");
            break;
        }
    }
    return i;
}

void solve()
{
    string s, l, r;
    cin >> s;
    int m, p = 0;
    cin >> m;
    cin >> l >> r;
    int len = s.length();
    for (int i = 0; i < m; i++)
    { // int start = '0' + l[i];
        // int end = '0' + r
        // for (int j = 0; j < m; j++) // jth position of key
        // {
        //     int curri = i;
            for (int x = l[i] - '0'; x <= r[i] - '0'; x++)
            {
                dbg(x);
                p = giveidx(s, x, p, len);
                dbg(p);
                if (p == m)
                {
                    cout << "YES\n";
                    return;
                }
                // i++;
            }
        //     i = curri;
        // }
        // p = 0;
    }
    cout << "NO\n";
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