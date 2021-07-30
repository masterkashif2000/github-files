#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,m,sum1=0,sum2=0,sum3=0,sum4=0;
    cin>>n>>m;
    int a[n],f[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>f[i];
    }
    for(int i=0;i<n;i++){
       if(a[i]==m && m>0){
        sum1+=f[i];
       }
       else if(a[i]==m-1 && m>0){
        sum2+=f[i];
       }
       else if(a[i]==m-2 && m>0){
        sum3+=f[i];
       }
       else if(a[i]==m-3 && m>0){
        sum4+=f[i];
       }
    }
    int r=min(sum1,sum2);
    int s=min(sum3,sum4);
    int t=min(r,s);
    cout<<r<<endl;
}
}
