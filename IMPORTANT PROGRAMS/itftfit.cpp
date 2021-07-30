#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int N,K;
cin>>N;
int a[N];
for(int i=0;i<N;i++){
    cin>>a[i];
}
sort(a,a+N);
cin>>K;
int *l,*r;
l=&a[0];
r=&a[N-1];
for(;l<r;l++){
while(r>0){
    if(*l+*r==K){
        cout<<*l<<"and"<<*r;
    }
    r--;
}
}
}
