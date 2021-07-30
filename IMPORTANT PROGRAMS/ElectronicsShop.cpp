#include<iostream>
using namespace std;

int main(){
    int b,n,m,t,o=-1;
    cin>>b>>n>>m;
    int a[n],c[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>c[i];
    }
    int k=a[0]+c[0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]+c[j]<=b){
               int y=a[i]+c[j];
               t=max(y,k);
            }
        }
    }
    if(t){
        cout<<t<<endl;
    }
    else
    {
        cout<<o<<endl;
    }
}
