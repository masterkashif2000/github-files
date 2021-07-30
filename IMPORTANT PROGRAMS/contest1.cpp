#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int left[n],right[n];
	    int water=0;
	    left[0]=a[0];
	    for(int i=1;i<n;i++){
	        left[i]=max(left[i-1],a[i]);
	    }
	    right[n-1]=a[n-1];
	    for(int i=n-2;i>=0;i--){
	        right[i]=max(right[i],a[i]);
	    }
	    for (int i = 0; i < n; i++) {
        water += min(left[i], right[i]) - a[i];
	    }
        cout<<water;
}


	return 0;
}
