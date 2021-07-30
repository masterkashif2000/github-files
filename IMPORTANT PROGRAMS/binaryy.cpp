#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	   long int n,i;
	   long int count0=0;
	   long int count1=0;
	    cin>>n;
	   long int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]==0)
	        {
	            count0++;
	        }
	        else
	        {
	            count1++;
	        }
	    }
	    while(count0--)
	    {
	        cout<<"0"<<" ";
	    }
	    while(count1--)
	    {
	        cout<<"1"<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
