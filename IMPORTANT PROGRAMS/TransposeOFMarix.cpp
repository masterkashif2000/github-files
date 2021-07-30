#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    Time Complexity : O(m*n)
    Auxiliary Space : O(m*n)

    ll n,m;
    cin>>n>>m;
    ll a[n][m];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    ///transpose Matrix
    ll b[m][n];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            b[i][j]=a[j][i];
        }
    }

    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
