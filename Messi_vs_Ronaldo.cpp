#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y;
    cin >> a >> b >> x >> y;
    int massi_point = (2*a) + b;
    int ronaldo_point = (2*x) + y;

    if(massi_point > ronaldo_point)
    {
        cout << "Messi" << endl;
    }
    else if(massi_point < ronaldo_point)
    {
        cout << "Ronaldo" << endl;
    }
    else if(massi_point == ronaldo_point)
    {
        cout << "Equal" << endl;
    }

    return 0;
}