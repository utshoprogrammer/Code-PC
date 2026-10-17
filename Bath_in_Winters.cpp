#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t; cin >> t;
    while (t--)
    {
        int x,y; cin >> x >> y;
        int ans = x / (2*y);
        cout << ans << endl;
    }

    return 0;
}