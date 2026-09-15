#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n,x,y;
        cin >> n >> x >> y;
        vector<long long int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long int minimum = 0;
        for (int i = 0; i < n; i++)
        {
            minimum += min((a[i]*x),y);
        }
        cout << minimum << endl;
           
    }
    return 0;
}