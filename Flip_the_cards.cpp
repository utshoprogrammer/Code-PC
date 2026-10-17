#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t; cin >> t;
    while (t--)
    {
        int n,x; cin >> n >> x;
        int a = n - x;
        int ans = min(x,a);
        cout << ans << endl;
    }

    return 0;
}