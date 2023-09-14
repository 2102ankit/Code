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

int diff(string a, string b)
{
    int ctr = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != b[i])
            ctr++;
    }
    // dbg(a);
    // dbg(b);
    // dbg(ctr);
    return ctr;
}

void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a;
    cin >> b;
    string r = b;
    reverse(r.begin(), r.end());
    // cout << a << nl << b << nl << r << nl;
    int diffb = diff(a, b), diffr = diff(a, r);
    if (diffb == 0)
    {
        cout << 0 << nl;
        return;
    }
    else if (diffr == 0)
    {
        cout << 2 << nl;
        return;
    }
    // dbg(diffb);
    // dbg(diffr);
    int rev = diffb >= diffr;
    // cout << rev << nl;
    // if rev ==1 => rev mein diff kam hai
    // if rev mei diff kam hai pehle char fir rev
    // jitna chars diff hai utne baar Alice usse ek kam baar Bob
    int ans1 = 0, ans2 = 0;
    // dbg(rev);
    if (diffr % 2 == 1)
    {
        ans1 = diffr + diffr;
    }
    else
        ans1 = diffr + diffr - 1;

    // else
    // {
    // ans = #chars + #(chars - 1 revs)
    if (diffb % 2 == 1)
    {
        ans2 = diffb + diffb - 1;
    }
    else
        ans2 = diffb + diffb;
    // }
    cout << min(ans1, ans2) << nl;
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