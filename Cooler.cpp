#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        int count_time = 0;
        while(n != m)
        {
            int t = (n-1);
            count_time += n;
            n--;
        }
        cout << count_time << endl;   
    }
    return 0;
}