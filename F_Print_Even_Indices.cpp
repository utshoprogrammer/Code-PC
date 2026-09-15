#include<bits/stdc++.h>
using namespace std;

void array_rev(int a[],int n ,int i)
{
    if(i < 0)
    {
        return;
    }
    else if(i%2 == 0)
    {
        cout << a[i] << " ";
    }
    array_rev(a,n,i-1);

}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i <= n; i++)
    {
        cin >> a[i];
    }

    array_rev(a,n,n-1);
    
    return 0;
}