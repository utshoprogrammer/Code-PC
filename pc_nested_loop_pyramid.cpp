// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int val = 1;
//     int space = n-1;

//     for (int i = 1; i < n; i++)
//     {
//         for (int i = 1; i <= space; i++)
//         {
//             cout << " ";
//         }
//         for (int i = 1; i <= val; i++)
//         {
//             cout << i <<" ";
//         }
//         cout << endl;

//         val++;
//         space--;
        
//     }
//     int val1 = n;
//     int space1 = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int i = space1; i >= 1; i--)
//         {
//             cout << " ";
//         }
//         for (int i = val1; i >= 1; i--)
//         {
//             cout << i <<" ";
//         }
//         cout << endl;

//         val1--;
//         space1++;
        
//     }
    
//     return 0;
// }

// or

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int val = 1;
    int space = n-1;

    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= space; i++)
        {
            cout<<" ";
        }
        for (int i = 1; i <= val; i++)
        {
            cout << val <<" ";
        }
        cout << endl;

        val++;
        space--; 
        
    }
    
    return 0;
}