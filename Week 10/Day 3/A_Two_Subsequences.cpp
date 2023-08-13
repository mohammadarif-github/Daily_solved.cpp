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

using namespace std;
int main()
{
    boost;
    int t = 1;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int minn = INT_MAX,idx = 0;
        for(int i =0 ;i<s.size();i++)
        {
            if((s[i]-'a')<minn)
            {
                minn = s[i]-'a';
                idx = i;
            }
        }
        cout << s[idx] << " ";
        for(int i =0 ;i<s.size();i++)
        {
            if(i!=idx)
            {
                cout << s[i] ;
            }
        }
        cout << endl;
    }
    
}
