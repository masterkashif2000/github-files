#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k,count=1;
	    cin>>n>>k;
	    int a[n],b[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        if(a[i]!=k){
	            b[i]=a[i];
	        }
	    }
	    cout<<sizeof(b)<<endl;
	}
	return 0;
}
