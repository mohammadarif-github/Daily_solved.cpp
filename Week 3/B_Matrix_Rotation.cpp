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
int mat[3][3];
int t[3][3];
void rotate()
{
    // memcpy(b, a, sizeof(a));
    t[1][1] = mat[1][2];
    t[1][2] = mat[2][2];
    t[2][1] = mat[1][1];
    t[2][2] = mat[2][1];
    for (int i = 1; i <= 2; ++i)
        for (int j = 1; j <= 2; ++j)
            mat[i][j] = t[i][j];
}
int main()
{
    boost;
    int t;
    cin >> t;
    int i = 0;
    while (t--)
    {
        // int mat[2][2];
        int n = 2;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> mat[i][j];
            }
        }
        bool flag = false;
        if (mat[1][1] < mat[1][2] && mat[2][1] < mat[2][2] && mat[1][1] < mat[2][1] && mat[1][2] < mat[2][2])
        {
            cout << "YES" << endl;
            flag = true;
        }
        else
        {
            for (int i = 0; i < 3; i++)
            {
                rotate();
                if (mat[1][1] < mat[1][2] && mat[2][1] < mat[2][2] && mat[1][1] < mat[2][1] && mat[1][2] < mat[2][2])
                {
                    cout << "YES" << endl;
                    flag = true;
                    break;
                }
            }
        }
        if (flag == false)
            cout << "NO" << endl;

        // i++;
        // cout << i << endl ;
    }
}
