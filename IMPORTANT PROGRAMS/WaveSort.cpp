#include<iostream>
#include<algorithm>
using namespace std;
void swap(int *x,int *y){
int temp=*x;
*x=*y;
*y=temp;
}
void waveSort(int a[],int n){
   for(int j=0;j<n;j+=2){
    if(j>0 && a[j-1]>a[j]){
        swap(&a[j],&a[j-1]);
    }
    if(j<n-1 && a[j]<a[j+1]){
        swap(&a[j],&a[j+1]);
    }
   }
}

int main(){
int a[]={10, 90, 49, 2, 1, 5, 23};
int n=sizeof(a)/sizeof(a[0]);
waveSort(a,n);
cout<<"the wave pattern is";
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
return 0;
}
