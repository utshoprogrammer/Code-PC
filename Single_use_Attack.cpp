#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double h, x, y;
        cin >> h >> x >> y;

        // int remaining = max(0, h - y);
        // int extra_attacks = (remaining + x -1)/x;
        // int ans = 1 + extra_attacks;

        double with_spacial_attack = h - y;

        double count = ceil(with_spacial_attack/x);
        
        cout << 1 + count << endl;
    }
    return 0;
}