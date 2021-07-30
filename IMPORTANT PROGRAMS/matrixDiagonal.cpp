#include<iostream>
#include <cmath>
#include <cstdio>
#include<iomanip>
using namespace std;
int main(){

    float n,positive=0,negative=0,zero=0;
    std::cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
       if(a[i]>0){
           positive++;
       }
       else if(a[i]<0){
           negative++;
       }
    else{
        zero++;
    }
    }

    printf("%.4f\n",positive/n);
    printf("%.4f\n",negative/n);
    printf("%.4f\n",zero/n);
}
