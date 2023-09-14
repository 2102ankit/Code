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

// int bin(vpll &pr, int key)
// {
//     int lo = 0;
//     int hi = pr.size();
//     while (lo <= hi)
//     {
//         int mid = (lo + hi) / 2;
//         if (pr[mid].first == key)
//             return mid;
//         else if (pr[mid].first < key)
//             lo = mid + 1;
//         else
//             hi = mid - 1;
//     }
//     return -1;
// }

// void solve()
// {
//     int n, k;
//     cin >> n >> k;
//     vi a(n), b(n), aa(n), bb(n);
//     forr(n) cin >> a[i];
//     forr(n) cin >> b[i];
//     aa = a;
//     bb = b;
//     sort(all(aa));
//     sort(all(bb));
//     vpll pr;
//     forr(n) pr.pb(make_pair(aa[i], bb[i]));
//     sort(all(pr));
//     // for each a[i], bin search to get corresponding b[i] from pair;
//     // make a map of pairs and get thru it,once found del from ,map;
//     // umap mp;
//     forr(n) mp.insert(pair<a[i],b[i]>);
//     for (int i = 0; i < n; i++)
//     {
//         if (pr.size() > 1)
//         {
//             int idx = bin(pr, a[i]);
//             cout << pr[idx].second << " ";
//             pr.erase(pr.begin() + idx);
//         }
//         else
//             cout << pr[0].second << nl;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << mp[a[i]];
//         mp.erase()
//     }

// }

void solve()
{
    int n, k;
    cin >> n >> k;
    vpll a(n);
    vi b(n), ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    forr(n) cin >> b[i];
    sort(all(a));
    sort(all(b));

    for (int i = 0; i < n; i++)
    {
        ans[a[i].second] = b[i];
    }
    for (auto el : ans)
        cout << el << " ";
    cout << nl;
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