#include<bits/stdc++.h>
using namespace std;

int rec(string s,int i)
{
    if(i == s.size())
    {
        return 0;
    }
    int count = rec(s,i+1);
    if(s[i] == 'a'||s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] == 'u'||s[i] == 'A'||s[i] == 'E'||s[i] == 'I'||s[i] == 'O'||s[i] == 'U')
    {
        return count + 1;
    }
    else{
        return 0;
    }
}
int main()
{
    string s;
    getline(cin,s);

    int result = rec(s,0);
    cout<< result << endl;
    return 0;
}