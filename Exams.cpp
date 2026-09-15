#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float x, y, z;
        cin >> x >> y >> z;

        float total_present = x * y;

        float total_pass = (z / total_present) * 100;

        if (total_pass > 50)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}