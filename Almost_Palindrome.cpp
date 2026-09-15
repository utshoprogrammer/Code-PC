#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int fre[26] = {0};
        int odd_char = 0;
        for (int i = 0; i < s.size(); i++)
        {
            char ch = s[i];
            fre[ch -'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (fre[i] % 2 != 0)
                odd_char++;
            else
            {
                continue;
            }
        }

        if(odd_char == 0)
        {
            cout << odd_char << endl;
        }
        else{

            cout << odd_char - 1 << endl;
        } 
    }
    return 0;
}