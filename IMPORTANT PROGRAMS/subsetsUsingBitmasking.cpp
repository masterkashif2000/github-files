#include<iostream>
#include<cstring>
using namespace std;
void filterChars(char a[],int n){
    int j=0;
    while(n>0){
        int lastDigit=(n&1);
        if(lastDigit==1){
            cout<<a[j];
        }
        j++;
        n=n>>1;
    }
    cout<<endl;
}
void printSubsets(char a[]){
    int n=strlen(a);
    for(int i=0;i<(1<<n);i++)
    {
        filterChars(a,i);
    }
}
int main(){
    char a[100];
    cin>>a;
    printSubsets(a);

}