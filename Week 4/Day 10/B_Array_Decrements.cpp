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
        int arr[n];
        int lst[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int diff = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> lst[i];
            
        }
        int l = 0 ;
        int r = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if(lst[i])
            {
                int x = arr[i]-lst[i];
                l = max(l,x);
                r = min (r,x);
            }
            else
                l = max(arr[i],l);
        }
        
    if (l<=r)
        yes;
    else
        no;
    }
}

