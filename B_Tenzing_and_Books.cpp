#include <bits/stdc++.h>
using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve()
{
    int n, x;
    cin >> n >> x;
    int a[100001];
    int s = 0;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < n; j++)cin >> a[j];
        for (int j = 0; j < n; j++){
            if ((x | a[j]) != x)break;
            s |= a[j];
        }
    }
    if (s == x)cout << "Yes\n";
    else cout << "No\n";

    // int n, x, a[100000];
    //     cin >> n >> x;
    //     int s = 0;
    //     for (int i = 0; i < 3; i++) {
    //         for (int j = 0; j < n; j++) cin >> a[j];
    //         for (int j = 0; j < n; j++) {
    //             if ((x | a[j]) != x) break;
    //             s |= a[j];
    //         }
    //     }
    //     if (s == x) cout << "YES\n";
    //     else cout << "NO\n";
}


        

int main()
{
    fastio();
    int tc = 1;
    cin >> tc;

    for (int t = 1; t <= tc; t++)
    {
        solve();
    }
}
