#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        
        int minimum_distance = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            int distance = abs(x - a) + abs(y - b);
            minimum_distance = min(minimum_distance, distance);
            // if(distance < minimum_distance)
            // {
            //     minimum_distance = distance;
            // }
        }
        cout << minimum_distance << endl;

    }
    return 0;
}