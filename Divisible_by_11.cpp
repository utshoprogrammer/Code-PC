#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int odd_count = 0;
    int even_count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if(i%2 != 0)
        {
            odd_count += s[i] -'0';
        }
        else{
            even_count +=s[i] -'0';
        }
    }
    int count = abs(odd_count - even_count);

    if(count%11 == 0)
    {
        cout <<"YES"<< endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}