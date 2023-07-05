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
        int arr[n+1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        int s=0;
        for (int i = n - 1; i >=1; i--)
        {
            if (arr[i + 1]==0)
            {
                s=-1;
                break;
            }
            while(arr[i]>=arr[i+1])
            {
                s++;
                arr[i]/=2;
            }
            
        }
        cout << s << endl;
    }
}
