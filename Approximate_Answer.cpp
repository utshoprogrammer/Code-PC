#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,k;
    cin >> x>>y >>k;
    int total_sub = abs(x-y);
    if(total_sub <= k)
    {
        cout <<"Yes" <<endl;
    }
    else{
        cout <<"No"<<endl;
    }
    return 0;
}