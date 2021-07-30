#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
int t;
cin>>t;
while(t--){
    ll k,d0,d1;
    cin>>k>>d0>>d1;
    if(k==2)
    {
        if((d0+d1)%3==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else{
        ll sum[5],strt,r1,r2,r3,r4,t1,t2,t3,d2,digitsum;
        d2=(d0+d1);
        sum[0]=0;
        r1=(2*(d2));
        r2=(4*(d2));
        r3=(8*(d2));
        r4=(6*(d2));
        //cout<<r1<<r2<<r3<<r4<<endl;
        sum[1]=r1;
        sum[2]=r1+r2;
        sum[3]=r1+r2+r3;
        sum[4]=r1+r2+r3+r4;
        t1=k-3;
        t2=t1/4;
        t3=t1%4;
        digitsum=t2*sum[4]+sum[t3]+d2+d0+d1;
        if(digitsum%3==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
}
