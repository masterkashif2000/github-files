#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#define ll long long int
#define pb push_back
#define for0(i,n) for(i=0;i<n;i++)
#define for1(i,n) for(i=1;i<n;i++)
#define for0r for(i=n-i-1;i>=0;i++)
#define mod 1000000007

/*aaj phi tumpe pyar aaya hai*/


using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n;
    ll i;
    ll x,y=0;
    for0(i,n)
    {
        cin>>x;
        if(x==1)
            y=y+1;
    }
    if(y==0)
        cout<<"EASY"<<endl;
    else
        cout<<"HARD"<<endl;
return 0;
}

