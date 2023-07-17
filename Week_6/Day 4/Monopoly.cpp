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
        vector<int>arr(4);
        int sum = 0;
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
            sum+=arr[i];
        }
        bool ok = false;
        for (int i = 0; i < 4; i++)
        {
            if(sum-arr[i]<arr[i])
            {
                ok = true;
                break;
            }
        }
        if(!ok)no;
        else yes;
    }
    
}
