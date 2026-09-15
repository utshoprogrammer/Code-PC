#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count_x = 0;
    for (int i = 0; i < k-1; i++)
    {
        if(a[i] > a[k-1])
        {
            count_x++;
        }
    }
    int count_y = 0;
    for (int j = k; j < n; j++)
    {
        if(a[j] < a[k-1])
        {
            count_y++;
        }
    }
    cout << count_x <<" "<< count_y << endl;

    return 0;
}