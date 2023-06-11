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

string reverseStr(string str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
    return str;
}

// void solve()
// {
//     string s;
//     cin >> s;
//     int c[26] = {};
//     for (auto d : s)
//     {
//         c[d - 'A']++;
//     }
//     int oddctr = 0;
//     for (int i = 0; i < 26; i++)
//         if (c[i] % 2 == 1)
//             oddctr++;

//     if (oddctr > 1)
//     {
//         cout << "NO SOLUTION";
//         return;
//     }
//     // og freq
//     // all even ki ek string + odd wale ki index
//     // odd wala append + even wala rev karke append
//     string ans = "";
//     int oddptr = -1;
//     for (int i = 0; i < 26; i++)
//     {
//         char ch = 'A' + i;
//         if (c[i] % 2 == 0)
//         {
//             c[i] /= 2;
//             while (c[i] != 0)
//             {
//                 ans += (ch);
//                 c[i]--;
//             }
//         }
//         else
//             oddptr = i;
//     }

//     string rev = reverseStr(ans);
//     if (oddptr != -1)
//     {
//         while (c[oddptr] != 0)
//         {
//             ans += ('A' + oddptr);
//             c[oddptr]--;
//         }
//     }
//     ans.append(rev);
//     cout << ans << endl;
// }

void solve(){
    string s;
    cin >> s;
    int c[26] = {};
    int c1 =0;
    for(auto d: s){
        c[d - 'A']++;
    }
    forr(26) c1+=c[i]&1;
    if(c1>1){
        cout << "NO SOLUTION";
        return;
    }
    string t;
    for(int i=0; i<26; i++){
        if(c[i]&1^1){
            for(int j=0; j<c[i]/2; j++)
                t+= (char('A'+i));
        }
    }
    cout << t;
    for(int i=0; i<26; i++){
        if(c[i]&1){
            for(int j=0; j<c[i]; j++)
                cout << (char('A'+i));
        }
    }
    reverse(all(t));
    cout << t;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin >> tc;

    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}
