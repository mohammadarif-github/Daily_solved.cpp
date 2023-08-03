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
        int n;
        string s;
        cin >> n >> s;
        int i = 0,j=n-1,cnt =0 ;
        while (i<j)
        {
            if((s[i]=='0' && s[j]=='1') || (s[i]=='1' && s[j]=='0'))cnt+=2;
            else break;
            i++;
            j--;
        }
        cout << n - cnt << endl;
        
    }
    
}