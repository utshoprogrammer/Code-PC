#include <bits/stdc++.h>
using namespace std;

void fun(long long int a, long long int b)
{
    long long int x = a, y = b;

    while (y != 0)
    {
        long long int temp = y;
        y = x % y;
        x = temp;
    }
    long long int result = a * b / x;
    cout << result << endl;
}
int main()
{
    long long int a, b;
    cin >> a >> b;

    fun(a, b);

    return 0;
}