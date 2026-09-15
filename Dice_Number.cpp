// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string  a1, a2, a3, b1, b2, b3;
//         cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

//         vector<string> s = {a1, a2, a3};
//         vector<string> s2 ={b1,b2,b3};

//         sort(s.begin(),s.end(),greater<string>());
//         sort(s2.begin(),s2.end(),greater<string>());

//         string temp_s = "";
//         for(string digit : s)
//         {
//             temp_s += digit;
//         }
//         int s_number = stoi(temp_s);

//         string temp_s2 = "";
//         for(string digit2 : s2)
//         {
//             temp_s2 += digit2;
//         }

//         int s_number2 = stoi(temp_s2);

//         if(s_number < s_number2)
//         {
//             cout << "Bob"<<endl;
//         }
//         else if(s_number == s_number2)
//         {
//             cout << "Tie"<<endl;
//         }
//         else{
//             cout <<"Alice"<<endl;
//         }      
//     }
//     return 0;
// }

// or simple soloution

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<string> a(3), b(3);
        
        for (int i = 0; i < 3; i++)
        {
            cin >>a[i];
        }
        for (int i = 0; i < 3; i++)
        {
            cin >>b[i];
        }

        sort(a.begin(),a.end(),greater<string>());
        sort(b.begin(),b.end(),greater<string>());

        int number1 = stoi(a[0]+a[1]+a[2]);
        int number2 = stoi(b[0]+b[1]+b[2]);

        if(number1 < number2)
        {
            cout << "Bob"<<endl;
        }
        else if(number1 == number2)
        {
            cout <<"Tie"<<endl;
        }
        else{
            cout <<"Alice"<<endl;
        }      

    }
    return 0;
}