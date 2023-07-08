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
        cin >> n;
        string arr[n-2];
        for (int i = 0; i < n-2; i++)
        {
            cin >> arr[i] ;
        }
        string s ;
        for (int i = 0; i < n-2; i++)
        {
            s+=arr[i];
        }
        string ans ;
        ans+=s[0];
        for (int i = 1; i < s.size()-1 ; i++)
        {
            if(s[i]==s[i+1])
            {
                ans+=s[i];
                i++;
            }
            else 
            {
                ans+=s[i];
            }
        }
        ans+=s[s.size()-1];
        if(ans.size()<n)ans+='a';
        cout << ans << endl;
    }
    
}
