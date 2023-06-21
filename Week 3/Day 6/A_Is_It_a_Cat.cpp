/*

    Author :--
    !~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!
    |                                         |
    |                                         |
    |  cout<< "MOHAMMAD ARIFUL ISLAM"<< endl  |
    |                                         |
    |                                         |
    !~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!

*/
#include <bits/stdc++.h>
#define boost                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define minus cout << -1 << endl;
#define mp map<ll, ll>

using namespace std;
int main()
{
    boost;
    int t;
    cin >> t;
    while (t--)
    {
        string s, temp;
        int sz;
        cin >> sz;
        cin >> s;
        int i = 0;
        int freq[26] = {0};
        
        if (sz < 4)
            no;
        else
        {
            s[0]=tolower(s[0]);
            temp += s[0];
            for (int i = 1; i < sz; i++)
            {
                s[i] = tolower(s[i]);
                // temp+=s[i];
                if (s[i] == s[i - 1])
                    continue;
                else
                    temp += s[i];
            }
            // cout << temp << endl;
            if (temp == "meow")
                yes;
            else
                no;
        }
    }
}
