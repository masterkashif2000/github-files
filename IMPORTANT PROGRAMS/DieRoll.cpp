#include<bits/stdc++.h>
#include<string.h>
#include<vector>
#include<algorithm>
#define ll long long int
#define nl "\n"
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int y,w;
    cin>>y>>w;
    int m=max(y,w);
    if(m==1)
        cout<<"1/1"<<nl;
    else if(m==2)
        cout<<"5/6"<<nl;
    else if(m==3)
        cout<<"2/3"<<nl;
    else if(m==4)
        cout<<"1/2"<<nl;
    else if(m==5)
        cout<<"1/3"<<nl;
    else if(m==6)
        cout<<"1/6"<<nl;
    
    
}
