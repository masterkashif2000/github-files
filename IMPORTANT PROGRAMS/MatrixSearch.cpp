#include<iostream>
using namespace std;
int main(){
int N,M,K;
cin>>M>>N;
int a[10][10];
for(int i=0;i<M;i++){
    for(int j=0;j<N;j++){
        cin>>a[i][j];
    }
}
cin>>K;
for(int i=0;i<M;i++){
    for(int j=0;j<N;j++){
        if(a[i][j]==K){
            cout<<'1';
        }
    }
}
cout<<'0';
}
