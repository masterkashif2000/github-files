#include<iostream>
using namespace std;
int Gcd(int a,int b){
    if(b==0){
        return a;
    }
     return Gcd(b,a%b);
}
int lcm(int a,int b){
    return a*b/Gcd(a,b);
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
   cout<<Gcd(n1,n2)<<endl;
   cout<<lcm(n1,n2);
}