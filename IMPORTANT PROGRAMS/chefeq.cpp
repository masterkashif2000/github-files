#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        int i,a[n],s,p[100001]={0};
        int sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            p[a[i]]++;
        }
        for(i=0;i<=100000;i++)
        {
            if(p[i]!=0)
            v.push_back(p[i]);
        }
        sort(v.begin(),v.end());
        for(i=0;i<v.size();i++)
        {
            sum=sum+v[i];
        }
        s=v.back();
        cout<<sum-s<<"\n";
    }
}
