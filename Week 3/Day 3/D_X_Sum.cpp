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
        int r, c;
        cin >> r >> c;
        int mat[r + 1][c + 1];
        for (int i = 1; i <= r; i++)
        {
            for (int j = 1; j <= c; j++)
            {
                cin >> mat[i][j];
            }
        }
        int x, y;
        ll sum,ans=0;
        for (int i = 1; i <= r; i++)
        {
            for (int j = 1; j <= c; j++)
            {
                sum = 0;
                x = i, y = j;

                while (x > 0 && y > 0)
                {
                    sum += mat[x][y];
                    x--;
                    y--;
                }
                x = i + 1;
                y = j + 1;
                if (x <= r && y <= c)
                {
                    while (x <= r && y <= c)
                    {
                        sum += mat[x][y];
                        x++;
                        y++;
                    }
                }
                x = i-1;
                y = j+1;
                if(x>0 && y<=c)
                {
                    while(x>0 && y <=c)
                    {
                        sum+=mat[x][y];
                        x--;
                        y++;
                    }
                }
                x = i+1;
                y = j -1;
                if(x<=r && y>0)
                {
                    while(x<=r && y>0)
                    {
                        sum+=mat[x][y];
                        x++;
                        y--;
                    }
                }
                ans = max(sum,ans);
            }
        }
        cout << ans << endl;
    }
}
