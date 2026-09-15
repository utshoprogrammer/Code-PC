#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int win_point = (a*3);
    int drow_point = (b*1);
    int loss_point = (c*0);
    int total_point = (win_point+drow_point+loss_point);
    cout << total_point<<endl;
    return 0;
}