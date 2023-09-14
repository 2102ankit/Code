#include <bits/stdc++.h>
// #include "debugging.h"
//
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
bool cmp(vector<int> a, vector<int> b)
{
    if (a[0] == b[0])
    {
        if (a[1] == b[1])
        {
            return a[2] < b[2];
        }
        else
            return a[1] < b[1];
    }
    else
        return a[0] > b[0];
}

void solve()
{
    int n, m, h, ans = 1;
    cin >> n >> m >> h;

    pair<int, ll> rud;
    for (int i = 0; i < n; i++)
    {
        vector<int> a(m);
        for (int j = 0; j < m; j++)
            cin >> a[j];
        sort(all(a));

        int points = 0;
        ll penalty=0, sum = 0;
        for (int j = 0; j < m; j++)
        {
            if (sum + a[j] > h)
                break;
            sum += a[j];
            penalty += sum;
            points--;
        }
        if (i == 0)
            rud = {points, penalty};
        else if (make_pair(points, penalty) < rud)
            ans++;
    }
    // dbg(a);
    // vector<vector<int>> b(n, vector<int>(m));
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if (j > 0)
    //             b[i][j] = a[i][j] + b[i][j - 1];
    //         else
    //             b[i][j] = a[i][j];
    //     }
    // }
    // dbg(a);
    // dbg(b);

    // vector<vector<int>> score(n, vector<int>(3, 0));
    // // 0 => pts
    // // 1 => pen
    // // 2 => idx
    // ll ans = 1;

    // for (int i = 0; i < n; i++)
    // {
    //     // cerr << nl;
    //     score[i][2] = i + 1;
    //     int time = 0;
    //     for (int j = 0; j < m; j++)
    //     {
    //         // dbg(pen[i]);
    //         // dbg(s);
    //         // dbg(time);
    //         // dbg(a[i][j + 1]);
    //         // dbg(h);
    //         // dbg(time + a[i][j]);
    //         if (time + a[i][j] <= h)
    //         {
    //             time += a[i][j];
    //             score[i][1] += time;
    //             score[i][0]--;
    //             // dbg(score);
    //         }
    //     }
    //     if (i)
    //     {
    //         if (make_pair(score[i][0], score[i][1]) < rud)
    //             ans++;
    //     }
    //     else
    //         rud = {score[i][0], score[i][1]};
    // }
    // sort(score.begin(), score.end());
    // // dbg(score);
    // for (int i = 0; i < n; i++)
    // {
    //     if (score[i][2] == 1)
    //     {
    //         cout << i + 1 << nl;
    //         break;
    //     }
    // }
    cout << ans << '\n';
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