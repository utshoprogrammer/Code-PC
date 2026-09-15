#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y;
    cin >> x >> y;
    long long int whithout_sunday_cost = x * 6;
    long long int total_food_cost = whithout_sunday_cost + y;

    cout << total_food_cost << endl;
    return 0;
}