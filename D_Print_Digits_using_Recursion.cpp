#include<bits/stdc++.h>
using namespace std;

void rec(int n)
{
    if(n == 0)
    {
        return;
    }
    rec(n/10);
    int last = n%10;
    cout << last <<" ";
   
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if(n == 0)
        {
            cout<< n ;
        }
        rec(n);
        cout << endl;
    }
    
    return 0;
}