#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],i,d[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);

    for(i=0;i<n;i++){
        d[i]=a[i+1]-a[i];

    }
    sort(d,d+n);
    for(int i=0;i<n;i++){
        cout<<d[i]<<" ";
    }
}



