#include<iostream>
#include<vector>
using namespace std;
typedef long long int ll;
ll isPrimeNumber(ll n);
int main()
{
    ll t;
    cin>>t;
    while(t--){
    ll f,s=1,i=0,count=0;
    cin>>f;
   bool isPrime;
   vector<int> v;
   for(ll n = 2; n < 100; n++) {
      // isPrime will be true for prime numbers
      isPrime = isPrimeNumber(n);

      if(isPrime == true)
          v.push_back(n);
   }
   ll p=v.size();
   if(f==1){
       cout<<"0"<<endl;
   }
   else{
   for(ll j=0;j<p;j++){
       s=s*v[i];
       i++;
       if(s>f){
           cout<<count<<endl;
           break;
       }
       count++;
   }
    }
    }
}

// Function that checks whether n is prime or not
ll isPrimeNumber(ll n) {
   bool isPrime = true;

   for(ll i = 2; i <= n/2; i++) {
      if (n%i == 0) {
         isPrime = false;
         break;
      }
   }  
   return isPrime;
}
