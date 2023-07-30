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
        int x,y;
        int bx,by,cx,cy;
        cin >> x >> y;
        cin >> bx >> by >> cx >> cy;
        int ans =1;
        {
            if((x<bx && x<cx) ||( x>bx &&x>cx))ans += min(abs(cx-x),abs(bx-x));
            if((y<by && y<cy) ||( y>by && y>cy))ans += min(abs(cy-y),abs(by-y));
        }
        cout << ans << endl;
    }
    
}
