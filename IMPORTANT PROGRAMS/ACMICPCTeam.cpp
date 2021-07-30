#include<iostream>
using namespace std;
int main(){
    int n,m,count=0,max=0;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(a[i][j]=='1' || a[i+1][j]=='1'){
                count++;
                if(count>max){
                    max=count;
                }
           }
        }
    }
    cout<<max;
}
