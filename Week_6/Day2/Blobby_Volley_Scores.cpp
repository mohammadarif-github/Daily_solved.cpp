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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s ;
        int a =0,b =0,j=0;
        if(s[j]=='A')
        {
            while (s[j]=='A')
            {
                a++;
                j++;
            }
            
        }
        for (; j < n-1 ; j++)
        {
            if(s[j]=='A' && s[j+1] == 'A')a++;
            else if(s[j]=='B' && s[j+1] == 'B')b++;
        }
        cout << a << " " << b << endl;
        
    }
    
}
