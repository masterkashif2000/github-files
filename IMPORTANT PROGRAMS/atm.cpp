#include<iostream>>
using namespace std;
typedef long long int ll;
int main(){
ll n;
cin>>n;
double m,x;
cin>>m;
if(n%5==0 && (float)n<m){
    x=m-(float)n-0.50;
    cout<<x<<endl;
}
else if(n%5!=0){
cout<<m*1.0<<endl;
}
else if((float)n>m){
    cout<<m<<endl;
}
}
