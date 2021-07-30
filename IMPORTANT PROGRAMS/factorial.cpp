#include <iostream>
using namespace std;

int main() {
    long long  int min,max,t,c,a,d,l;
cin>>t;
    while(t--)
    {
        cin>>c>>d>>l;
        a=c-d*2;
        if(a<0)
        a=0;
        if(l>=(4*(d+a))&&l<=4*(d+c)&&l%4==0)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
	return 0;
}
