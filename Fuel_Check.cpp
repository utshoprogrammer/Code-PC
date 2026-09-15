#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin >> x>> y;
    int total_distance(x*y);
    if(total_distance >= 100)
    {
        cout <<"Yes" << endl;
    }
    else if(total_distance < 100)
    {
        cout <<"No"<< endl;
    }
    return 0;
}