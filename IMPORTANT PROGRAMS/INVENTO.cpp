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
    ll t;
    cin>>t;
    while(t--)
    {
ll n;
cin >> n;
		int x=0;
		while(n)
		{x++;
			n=n/2;
		}
		
		cout << x << endl; 
    }
return 0;
}


