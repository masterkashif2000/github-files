#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int p1[n]={0};
    int p2[n]={0};
    for(int i=0;i<n;i++){
        cin>>p1[i]>>p2[i];
    }
    for(int i=1;i<n;i++){
        p1[i]=p1[i]+p1[i-1];
        p2[i]=p2[i]+p2[i-1];
    }
    int lead[n]={0};
    for(int i=0;i<n;i++){
        lead[i]=p1[i]-p2[i];
    }
    int m1=0;
    int m2=0;
    for(int i=0;i<n;i++){
        if(lead[i]>0){
            if(m1<lead[i]){
                m1=lead[i];
            }
        }else{
            if(m2>lead[i]){
                m2=lead[i];
            }
        }
    }
    if(abs(m1)>abs(m2)){
        cout<<1<<" "<<abs(m1)<<"\n";
    }
    else{
        cout<<2<<" "<<abs(m2)<<"\n";
    }
    return 0;
}
