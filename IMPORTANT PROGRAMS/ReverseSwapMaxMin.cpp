#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;
typedef long long int ll;
int main()
{
    ll arr[]= {10,20,30,40,50};
    ll n=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,arr+n);
    for(ll i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    char s[100]="kashif";
    ll d=sizeof(s)/sizeof(s[0]);
    for(ll i=0; i<d; i++)
    {
        cout<<s[i]<<"";
    }
    cout<<endl;
    reverse(s,s+d);
    for(ll i=0; i<d; i++)
    {
        cout<<s[i]<<"";
    }
}
/* SWAP(A,B)
MAX(A,B)
MIN(A,B)
*/
