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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        string s;
        cin >> s;
        
        bool found = true;
        for (int i = 0; i < n; i++)
        {
            char ch = s[i];
            int x = arr[i];
            for (int j = i; j < n; j++)
            {
                
                if (arr[j] == x && s[j] != ch)
                {
                    // cout << ch <<  " " << arr[j] << endl;
                    found = false;
                    break;
                }
            }
            if (!found)
            {
                no;
                break;
            }
        }
        if(found)yes;
    }
}
