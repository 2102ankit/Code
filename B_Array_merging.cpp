#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<ll> vi;
typedef vector<pll> vpll;
typedef unordered_map<ll, ll> umap;
#define F first
#define S second
#define pb push_back
#define ar array
#define ll long long
#define ld long double
#define sz(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define endl "\n"
#define forr(n) for (int i = 0; i < n; i++)

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve()
{
    int n;
    cin >> n;
    int a[n], b[n];
    forr(n) cin >> a[i];
    forr(n) cin >> b[i];

    // for line a
    int max_ctr = 0;
    for (int i = 0; i < n; i++)
    {
        int ctr = 0;
        for (int j = 0; j < n; j++)
        {
            // cout << "l1 -> i : " << i << " j : " << j << "a[i]:" << a[i] << " a[j] :" << a[j] << " b[i] : " << b[i] << " b[j] :" << b[j] << endl;
            if (a[j] == a[i] && b[j] == a[i])
                ctr++;
            if (a[j] == a[i] || b[j] == a[i])
                ctr++;
            // else
            //     break;
        }
        // cout << "ctr = " << ctr << " max_ctr = " << max_ctr << endl;
        if (ctr > max_ctr)
            max_ctr = ctr;
    }

    for (int i = 0; i < n; i++)
    {
        int ctr = 0;
        for (int j = 0; j < n; j++)
        {
            // cout << "l2 -> i : " << i << " j : " << j << "a[i]:" << a[i] << " a[j] :" << a[j] << " b[i] : " << b[i] << " b[j] :" << b[j] << endl;
            if (a[j] == b[i] && b[j] == b[i])
                ctr++;
            if (a[j] == b[i] || b[j] == b[i])
                ctr++;
            // else
            //     break;
        }
        // cout << "ctr = " << ctr << " max_ctr = " << max_ctr << endl;
        if (ctr > max_ctr)
            max_ctr = ctr;
    }

    cout << max_ctr << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;

    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}
