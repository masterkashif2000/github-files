#include<iostream>
using namespace std;
void dec(int n){
if(n==0){
    return;
}
dec(n-1);
cout<<n<<" ";
}
int main(){
int n=5;
dec(n);
}