#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,k,count=0;
    cin>>n>>k;
    int a[n];
    int r=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int *pLarge=max_element(a,a+n);
    if(k>=*pLarge){
        cout<<r<<endl;
    }
    else{
    while(k<*pLarge){
        k++;
        count++;
    }
    }
    cout<<count<<endl;
}
