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
        char mat[9][9];
        int n = 8;
        int x , y;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> mat[i][j];
            }
        }
        for (int i = 1; i <= n; i++)
        {
            int count = 0;
            for (int j = 1; j <= n; j++)
            {
                // cout << mat[i][j] << " ";
                if (mat[i][j] == '#')
                {
                    if(mat[i-1][j-1]=='#' && mat[i-1][j+1]=='#' && mat[i+1][j-1]=='#' && mat[i+1][j+1]=='#')
                    {
                        x = i ;
                        y = j;
                    }
                }
            }
        }
        cout << x << " " << y << endl;
        ;
    }
}
