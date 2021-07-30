#include<iostream>
using namespace std;
int print(int a[][100],int n,int m){
    int k;
    cin>>k;
for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]==k){
                return true;
			}
		}
	}
	return -1;
}
int main(){
	int n,m,k;
	cin>>n>>m;
	int a[100][100];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	cout<<print(a,n,m);
}
