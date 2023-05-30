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
    string s;
    cin >> s;
    // max l of similar chars
    // int ans = 0, x = 0;
    // char l = '<';
    // for(char c: s){
    //     if(c==l){
    //         ans = max(ans,x);
    //         x++;
    //     }
    //     else
    //     {
    //         x = 1;
    //         l = c;
    //     }  
    //     // cout << "x = " << x << " ans = " << ans << endl;
    // }
    int currl = 1, maxl = 1;
    for(int i=0; i<n; i++){
        if(s[i+1]==s[i]){
            currl++;
            maxl = max(maxl, currl);
        }
        else currl = 1;
    }

    cout << maxl + 1 << endl;
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
