#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        float x,n;
        cin >> x >> n;

        float total_need_aircraft = ceil(n/100);

        if(x > total_need_aircraft)
        {
            cout << "0"<<endl;
        }
        else
        {
            float ans = abs(total_need_aircraft - x);
            cout << ans << endl;
        }
    }
    return 0;
}