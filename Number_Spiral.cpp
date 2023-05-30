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
    ll x, y;
    cin >> x >> y;
    // x = 2; y = 3
    //  if(x%2==0) //x has perf sq
    //  max of x ya y ke hisaab se
    if (x == 1 && y == 1)
        cout << "1\n";
    else if (x > y)
    {
        if (x % 2 == 0)
            cout << x * x - y + 1 << endl;
        else
            cout << (x - 1) * (x - 1) + y << endl;
    }
    else
    {
        if (y % 2 == 1)
            cout << y * y - x + 1 << endl;
        else
            cout << (y - 1) * (y - 1) + x << endl;
    }
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
