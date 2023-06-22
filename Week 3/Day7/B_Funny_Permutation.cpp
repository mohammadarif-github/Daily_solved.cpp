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
        ll n;
        cin >> n;
        int arr[n + 1];

        for (int i = 1; i <= n; i++)
        {
            arr[i] = i;
        }
        reverse(arr + 1, arr + n + 1);

        if (n < 5 && n % 2)
            cout << "-1" ;
        else if (n % 2 == 0)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << arr[i] << " ";
            }
        }
        else
        {
            reverse(arr + 1, arr + n / 2 + 2);
            for (int i = 1; i <= n; i++)
            {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }
}
