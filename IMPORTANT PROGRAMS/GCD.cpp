#include<iostream>
using namespace std;
int Gcd(int a,int b){
    return(b==0)?a:Gcd(b,a%b);
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
   cout<<Gcd(n1,n2);
}