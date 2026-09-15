#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int unrated = 2*n - x;
        int extra = x - unrated;
        cout << max(0,extra) << endl;

        //or
        //cout << max(0, 2*x-2*n) << endl;
    }
    return 0;
}