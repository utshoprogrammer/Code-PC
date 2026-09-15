#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >>k;
        int one_frind_bill = n/(k+1);
        
        int all_frind_bill = one_frind_bill*k;

        int net_payment = n - all_frind_bill;

        cout << net_payment << endl;
    }
    return 0;
}