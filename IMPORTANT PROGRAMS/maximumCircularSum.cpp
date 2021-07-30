#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int t,n,currentSum,maximum;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		maximum=a[0];
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				currentSum=0;
				{
					for(int k=i;k<=j;k++){
						currentSum+=a[k];
						if(currentSum>maximum){
                            maximum=currentSum;
						}
						}
					}
				}
			}
		cout<<maximum<<endl;
	}

	return 0;
}

