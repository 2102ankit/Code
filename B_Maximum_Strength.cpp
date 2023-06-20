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

// void solve()
// {
//     string left, right;
//     cin >> left >> right;
//     //dbg(left);
//     //dbg(right);
//     int l = left.length() - 1;
//     int r = right.length() - 1;
//     int sum = 0;
//     while (l > 0 && r > 0)
//     {
//         //dbg(l);
//         //dbg(r);
//         int diff = 0;
//         char nextl = left[l - 1];
//         char nextr = right[r - 1];
//         //dbg(nextl);
//         //dbg(nextr);
//         if (nextl == nextr)
//             diff = abs(left[l] - right[r]);
//         else
//             diff = 9;
//         sum += diff;
//         //dbg(sum);
//         l--;
//         r--;
//     }
//     // iske baad eitehr l stands at left[0] or both stand at index 0;
//     if (left.length() == right.length())
//     {
//         char nextl = left[l];
//         char nextr = right[r];
//         //dbg(nextl);
//         //dbg(nextr);
//         sum += abs(left[l] - right[r]);
//         //dbg(sum);
//     }
//     else
//         while (r >= 0)
//         {
//             int diff = 0;
//             char nextl = '0';
//             char nextr = right[r];
//             //dbg(nextl);
//             //dbg(nextr);
//             if (r == 0)
//                 nextr = '0';
//             if (nextl == nextr)
//                 diff = abs(right[r] - '0');
//             else
//                 diff = 9;
//             sum += diff;
//             r--;
//             //dbg(sum);
//         }
//     cout << sum << nl;
// }

// void solve()
// {
//     string left, right;
//     cin >> left >> right;
//     string c;
//     for (int i = 1; i <= right.length() - left.length(); i++)
//     {
//         c += '0';
//     }
//     left = c + left;
//     while (left.size() && right.size() && left[0] == right[0])
//     {
//         left.erase(left.begin());
//         right.erase(right.begin());
//     }
//     if (right.empty())
//     {
//         cout << "0" << nl;
//         return;
//     }
//     cout << (right.size() - 1) * 9 + (right[0] - left[0]) << nl;
// }

void solve()
{
    string l, r;
    cin >> l >> r;
    while (l.size() < r.size())
        l = "0" + l;
    int ans = 0;
    for (int i = 0; i < l.size(); i++)
    {
        if (l[i] == r[i])
            continue;
        ans += (l.size() - i - 1)*9 + (r[i] - l[i]);
        break;
    }
    cout << ans << "\n";
}

int main()
{
    // fastio();
    int tc = 1;
    cin >> tc;

    for (int t = 1; t <= tc; t++)
    {
        // cerr << "Case #" << t << ": ";
        solve();
        // cerr << nl;
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