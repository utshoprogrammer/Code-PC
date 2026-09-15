#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int w,p,k;
        cin >>w>>p>>k;
        if(k <= w)
        {
            cout << 2*k<<endl;
        }
        else{
            int total = (2*w)+(k-w);
            cout << total <<endl;
        }
    }
    return 0;
}