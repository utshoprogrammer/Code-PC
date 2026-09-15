#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    cin >> a >> b;

    long long int d = a/b;
    cout << d <<" ";
    long long int r = a%b;
    cout << r <<" ";
    double num1 = double(a);
    double num2 = double(b);

    double f = double(num1/num2);
    cout << fixed << setprecision(5) << double(f);
    return 0;
}