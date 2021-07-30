#include<iostream>
using namespace std;
int main(){
    int a[3][3]={{1,2,3},{2,3,4},{1,1,1}};
    int b[3][3]={{4,5,6},{7,8,9},{4,5,7}};
    int c[3][3]={0};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          c[i][j]=a[i][i]*b[i][j+1]+a[i][j+1]*b[i+1][j]+a[i][j+2]*b[i+2][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<c[i]<<endl;
        }
    }
}

