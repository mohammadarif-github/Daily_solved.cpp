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
        map<char,ll>freq;
        for (int i = 0; i < n; i++)
        {
            freq[s[i]]++;
        }
        int odd = 0;
        for(auto it : freq)
        {
            if(it.second%2)odd++;
        }
        if(odd>1)cout << 0 << endl;
        else if (odd%2 && freq.size()==1) cout << 2 << endl;
        else cout << 1 << endl;
    }
    
}
