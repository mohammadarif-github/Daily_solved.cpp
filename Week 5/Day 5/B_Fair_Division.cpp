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
        int freq[3] = {0};
        int one = 0, two = 0;
        for (int i = 0; i < n; i++)
        {
            int in;
            cin >> in;
            if (in == 1)
                one++;
            else
                two++;
        }
        int sum = one + two * 2;
        if (sum % 2)
        {
            no;
        }
        else
        {
            sum /= 2;
            if (sum % 2 == 0 || (sum % 2 && one))
                yes;
            else
                no;
        }
    }
}
