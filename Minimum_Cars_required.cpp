#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        float n;
        cin >> n;
        float minimum_number_of_car = ceil(n/4);
        cout << minimum_number_of_car << endl;
    }
    return 0;
}