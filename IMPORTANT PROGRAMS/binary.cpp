#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int T,N;
	cin>>T;
	int A[N];
	while(T>0){
	    for(int i=0;i<N;i++){
	        cin>>A[i];
	    }
	    sort(A,A+N);
	    for(int i=0;i<N;i++){
	        cout<<A[i]<<" ";
	    }
	    T--;
	}

	return 0;
}
