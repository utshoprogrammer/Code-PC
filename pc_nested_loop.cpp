#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int star = 1;
    int space = n-1;

    for (int i = 1; i < n; i++)
    {
        for (int i = 1; i <= space; i++)
        {
            cout<< " ";
        }
        for (int i = 1; i <= star; i++)
        {
            cout <<"*";
        }
        cout << endl;

        star += 2;
        space--;
    }

    int star1 = 2*n-1;
    int space1 = 1;

     for (int i = 1; i <= n; i++)
    {
        for (int i = space1-1; i >= 1; i--)
        {
            cout<< " ";
        }
        for (int i = star1; i >= 1; i--)
        {
            cout <<"*";
        }
        cout << endl;

        star1-=2;
        space1++;
    }
    
    
    return 0;
}