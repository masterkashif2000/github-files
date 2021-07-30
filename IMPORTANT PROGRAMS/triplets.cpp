#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int N,T;
cin>>N;
int a[1000];
for(int i=0;i<N;i++){
    cin>>a[i];
}
cin>>T;
sort(a,a+N);
for(int i=0;i<N;i++){
    for(int j=1;j<N;j++){
        for(int k=2;k<N;k++){
            if((a[i]+a[j]+a[k]==T)&&(a[i]<a[j] && a[j]<a[k])){
                cout<<a[i]<<", "<<a[j]<<"and"<<a[k]<<endl;
            }
        }
    }
}

}
