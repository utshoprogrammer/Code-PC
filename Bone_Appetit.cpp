#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int x, y;
    cin >> x >> y;
    
    long long int total_Bones = n * x;
    long long int total_Blood = m * y;

    long long int ans = total_Bones + total_Blood;
    cout << ans << endl;
    return 0;
}