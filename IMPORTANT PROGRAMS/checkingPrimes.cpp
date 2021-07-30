#include<iostream>
using namespace std;
bool isPrime(int no){
    if(no==1){
        return false;
    }
    else{
        for(int i=2;i*i<no;i++){
            if(no%i==0){
                return false;
            }
        }
        return true;
    }
}
int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"number is  prime"<<endl;
    }
    else{
        cout<<"number is not prime"<<endl;
    }
}