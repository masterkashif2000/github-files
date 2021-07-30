#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
    cin>>n;
    int i;
    int max1=0,max2=0;
    int r=0,h=0;
    for(i=1;i<=n;i++)
    {
        int a,b;
        cin>>a>>b;
        r=r+a;
        h=h+b;
        int d = r-h;
        int f = h-r;
        if(max1<d)
        max1 = d;
        if(max2<f)
        max2 =f;
    }
    if(max1>max2)
    cout<<"1"<<" "<<max1<<endl;
    else
    cout<<"2"<<" "<<max2<<endl;
	return 0;
}

